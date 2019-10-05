#pragma once
class Player
{
public:
	Player(const int health, char sprite);
	~Player() {};

	void TakeDamage(int attack);
	void PickUpObject();
	/*void Position();*/
	void MovePlayer();
	void CheckObject();
	void AskUserInput();
	char UserInputs;
private:
	int health_;
	char sprite_;
	
};

