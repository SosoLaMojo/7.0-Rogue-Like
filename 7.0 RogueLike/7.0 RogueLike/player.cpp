#include "player.h"
#include "map.h"
#include "GlobalRessources.h"
#include <iostream>

Map map;
Ressource ressources;


void Player::TakeDamage(const int attack)
{
	health_ -= attack;
}

void Player::PickUpObject()
{
	
}

//void Player::Position()
//{
//	
//}

void Player::MovePlayer()
{
	map.isObstacle = false;
	switch(UserInputs)
	{
	case('w'):
		ressources.yNewPlayerPosition = -1;
		map.CheckObject();
		if (map.isObstacle == true)
		{
			ressources.xPlayerPosition = ressources.xPlayerPosition;
			ressources.yPlayerPosition = ressources.yPlayerPosition;
		}
		else
		{
			ressources.yPlayerPosition = ressources.yNewPlayerPosition;
		}
		break;
	case('a'):
		ressources.xNewPlayerPosition = -1;
		map.CheckObject();
		if (map.isObstacle == true)
		{
			ressources.xPlayerPosition = ressources.xPlayerPosition;
			ressources.yPlayerPosition = ressources.yPlayerPosition;
		}
		else
		{
			ressources.xPlayerPosition = ressources.xNewPlayerPosition;
		}
		break;
	case('s'):
		ressources.yNewPlayerPosition = +1;
		map.CheckObject();
		if (map.isObstacle == true)
		{
			ressources.xPlayerPosition = ressources.xPlayerPosition;
			ressources.yPlayerPosition = ressources.yPlayerPosition;
		}
		else
		{
			ressources.yPlayerPosition = ressources.yNewPlayerPosition;
		}
		break;
	case('d'):
		ressources.xNewPlayerPosition = +1;
		map.CheckObject();
		if (map.isObstacle == true)
		{
			ressources.xPlayerPosition = ressources.xPlayerPosition;
			ressources.yPlayerPosition = ressources.yPlayerPosition;
		}
		else
		{
			ressources.xPlayerPosition = ressources.xNewPlayerPosition;
		}
		break;
	}
	
	
}

//void Player::CheckObject()
//{
//	/*if(map.map[ressource.xNewPlayerPosition][ressource.yNewPlayerPosition] == ressources.walls || map.map[ressource.xNewPlayerPosition][ressource.yNewPlayerPosition] == ressources.rocks)
//	{
//		map.isObstacle = true;
//	}*/
//	
//}

void Player::AskUserInput()
{
	std::cin >> UserInputs;
}

Player::Player(const int health, char sprite)
{
}
