#include "space/space_object.hpp"

sr::SpaceObject::SpaceObject
(
	std::string aTexturePath, 
	str_const_ref aLayer
) :
	Drawable		(aTexturePath)
{
	setLayer(aLayer);
}

void
sr::SpaceObject::create() 
{
	this->Drawable::create();
	this->LogicObject::create();
}