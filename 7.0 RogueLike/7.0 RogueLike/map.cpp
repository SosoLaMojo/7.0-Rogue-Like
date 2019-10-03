#include "map.h"
#include <iostream>
#include "GlobalRessources.h"

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
		map[i][69] = walls_;
		map[i][0] = walls_;

	}
	for (int i = 0; i < 70; i++)
	{
		map[0][i] = walls_;
		map[19][i] = walls_;
	}
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


