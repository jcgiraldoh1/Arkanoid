#pragma once

#include "Entity.h"

enum class BrickColour {BLUE, GRAY, GREEN, RED, YELLOW, PURPLE};

//externed sprites
extern Sprite* blueBrickSprite;
extern Sprite* grayBrickSprite;
extern Sprite* greenBrickSprite;
extern Sprite* purpleBrickSprite;
extern Sprite *redBrickSprite;
extern Sprite *yellowBrickSprite;



class BrickEntity : public Entity
{
public:
	BrickColour colour;
	BrickEntity()
	{
		typeID = ENTITYBRICK;
		colour = BrickColour::YELLOW;
	}

	bool HandleCollision();
};

BrickEntity * MakeBrick(BrickColour type, float xpos, float ypos);

void LoadMap(std::string fileName, std::vector<BrickEntity*>& brickEntityList);