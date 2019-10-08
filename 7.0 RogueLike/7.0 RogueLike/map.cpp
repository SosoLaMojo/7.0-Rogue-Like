#include "map.h"
#include <iostream>
#include "GlobalRessources.h"
#include "player.h"
#include <windows.h>

Ressource ressource;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

Map::Map(int playerPositionX, int playerPositionY)
{
	map = std::vector<std::vector<char> >(20, std::vector<char>(70));
	
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			map[i][j] = '.';
		}
	}

	
	
	for (int i = 0; i < 20; i++)
	{
		map[i][69] = ressource.walls;
		map[i][0] = ressource.walls;

	}

	for (int i = 0; i < 70; i++)
	{
		map[0][i] = ressource.walls;
		map[19][i] = ressource.walls;
	}
	map[playerPositionX][playerPositionY] = ressource.player;
}

void Map::Print()
{
	system("Color 0C");
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{

			std::cout << map[i][j];
		}
		std::cout << "\n";

	}
}

//void Map::CheckObject(int playerPositionX, int playerPositionY)
//{
//	if (map[playerPositionX +1][playerPositionY] == ressource.walls || map[playerPositionX+1][playerPositionY] == ressource.rocks)
//	{
//		isObstacle = true;
//	}
//}

void Map::Add(char objectImage, int objectPositionX, int objectPositionY)
{
	map[objectPositionX][objectPositionY] = objectImage;
	
}

void Map::UpdateMap(int getPositionX, int getPositionY)
{
	map[getPositionX][getPositionY] = '.';
}

void Map::ShowMenu()
{
	SetConsoleTextAttribute(color, 11);
	std::cout << " #####################################################################\n";
	std::cout << " |                                                                   |\n";
	std::cout << " |         To move up press : W      To move down press : S          |\n";
	std::cout << " |         To move right press : D   To move left press : A          |\n";
	std::cout << " |                                                                   |\n";
	std::cout << " #####################################################################\n";
	
}

void Map::MoveSecurity(int playerNewPositionx, int playerNewPositionY)
{
	if(map[playerNewPositionx][playerNewPositionY]=='°')
	{
		isObstacle = true;
	}
	if(map[playerNewPositionx][playerNewPositionY]=='&')
	{
		isEnnemy = true;
	}
	if (map[playerNewPositionx][playerNewPositionY] == '¢')
	{
		isPotion = true;
	}
	if (map[playerNewPositionx][playerNewPositionY] == '¢')
	{
		isTrap = true;
	}

}




