#pragma once
class Player
{
public:
	Player(const int health, char sprite);
	~Player() {};

	void TakeDamage(int attack);
	void PickUpObject();
	void Position();
	
private:
	int health_;
	char sprite_;
};

