#ifndef PLAYER_H
#define PLAYER_H

#include "gui/gui_paths.hpp"
#include "gui/gui_mouse_event.hpp"

#include "space/spaceship.hpp"

//#define PLAYER_TEXTURE_PATH TEXTURES + "player.png"s
#define PLAYER_TEXTURE_PATH TEXTURES + "plain.png"s

namespace sr
{
	class Player : public Spaceship
	{
	public:
		//Player(std::string aTexturePath, sf::RenderWindow& aWindow);
		Player(str_const_ref aTexturePath = PLAYER_TEXTURE_PATH);
		virtual ~Player();
		std::optional<uint_16> processEvent(gui::Event* aEvent) override;

	private:
	};
}

#endif // !PLAYER_H