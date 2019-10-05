#include "map.h"
#include <iostream>
#include "GlobalRessources.h"

Ressource ressources;

Map::Map()
{
	map = std::vector<std::vector<char> >(20, std::vector<char>(70));
	system("Color 0C");
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			map[i][j] = '.';
		}
	}

	
	
	for (int i = 0; i < 20; i++)
	{
		map[i][69] = ressources.walls;
		map[i][0] = ressources.walls;

	}

	for (int i = 0; i < 70; i++)
	{
		map[0][i] = ressources.walls;
		map[19][i] = ressources.walls;
	}
	map[ressources.yPlayerPosition][ressources.xPlayerPosition] = ressources.player;
}

void Map::Print()
{
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{

			std::cout << map[i][j];
		}
		std::cout << "\n";

	}
}

void Map::CheckObject()
{
	if (map[ressources.xNewPlayerPosition][ressources.yNewPlayerPosition] == ressources.walls || map[ressources.xNewPlayerPosition][ressources.yNewPlayerPosition] == ressources.rocks)
	{
		isObstacle = true;
	}
}




