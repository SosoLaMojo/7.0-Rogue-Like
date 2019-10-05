#pragma once
#include<vector>



class Map
{
public:
	Map();
	void Print();
	void CheckObject();
	std::vector<std::vector<char> >map;
	bool isObstacle = false;
	bool isEnnemy = false;
	bool isPotion = false;
	bool isTrap = false;
private:
};

