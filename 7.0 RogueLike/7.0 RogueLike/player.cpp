#include "player.h"
#include "map.h"
#include "GlobalRessources.h"
#include <iostream>



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



void Player::MovePosition(int newplayerPositionX, int newplayerPositionY)
{
	
	xPlayerPosition = newplayerPositionX;
	yPlayerPosition = newplayerPositionY;
	
}

void Player::CheckMove(char userInput)
{
	switch(userInput)
	{
	case('w'):
		yNewPlayerPosition = yPlayerPosition ;
		xNewPlayerPosition = xPlayerPosition -1;
		
		break;
	case('a'):
		yNewPlayerPosition = yPlayerPosition -1;
		xNewPlayerPosition = xPlayerPosition;
		break;
	case('s'):
		yNewPlayerPosition = yPlayerPosition;
		xNewPlayerPosition = xPlayerPosition + 1;
		break;
	case('d'):
		yNewPlayerPosition = yPlayerPosition +1;
		xNewPlayerPosition = xPlayerPosition;
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

int Player::GetPlayerXposition()
{
	return xPlayerPosition;
}

int Player::GetPlayerYposition()
{
	return yPlayerPosition;
}

Player::Player(const int health, char sprite)
{
}
