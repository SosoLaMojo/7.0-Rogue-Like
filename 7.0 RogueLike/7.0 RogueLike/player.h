#pragma once
class Player
{
public:
	Player(const int health, char sprite);
	~Player() {};

	void TakeDamage(int attack);
	void PickUpObject();
	/*void Position();*/
	void MovePosition(int playerPositionX, int playerPositionY, bool isObstacle, bool isEnnemy, bool isPotion, bool isTrap);
	void CheckMove(char userInput);
	void AskUserInput();
	int GetPlayerXposition();
	int GetPlayerYposition();
	char UserInputs;
	int xPlayerPosition = 3;
	int yPlayerPosition = 18;
	int xNewPlayerPosition;
	int yNewPlayerPosition;
private:
	int health_;
	char sprite_;

	
};

