#ifndef SPACE_OBJECT_HPP
#define SPACE_OBJECT_HPP

//--------------------------------------------------------------------------------

#include "game_object.hpp"

class SpaceObject : public GameObject
{
public:
	SpaceObject(std::string aTexturePath, uint_8 aLayer = 0);
	virtual ~SpaceObject();
	virtual void move(Pair<int> aCoord) = 0;

};
//--------------------------------------------------------------------------------

#endif // !SPACE_OBJECT_HPP