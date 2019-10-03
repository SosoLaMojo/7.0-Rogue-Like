#pragma once
#include<vector>

class Map
{
public:
	Map();
	void Print();
	
private:
	char walls_ = '#';
	char rocks_ = '^';
	std::vector<std::vector<char> >map;
	
};

