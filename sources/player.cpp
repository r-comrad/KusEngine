#include "player.hpp"

//Player::Player(std::string aTexturePath, sf::RenderWindow& aWindow) :
//	Drawable(aTexturePath, aWindow)
Player::Player(std::string aTexturePath) :
	MyDrawable(aTexturePath, 2)
{
}
Player::~Player() {}