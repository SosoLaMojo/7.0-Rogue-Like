#pragma once

struct Ressource
{
	char walls = '#';
	char rocks = '^';
	char player = '@';
	
	int xPlayerPosition = 3;
	int yPlayerPosition = 18;
	int xNewPlayerPosition;
	int yNewPlayerPosition;
};