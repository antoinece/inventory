#pragma once
#include "item.h"

class weapon : public Item
{
	int Damage;
	int SwordOrBow;
public:
	weapon(int damage, std::string name, int swordOrBow, char type) : Item(name, type),Damage(damage),SwordOrBow(swordOrBow){};
	
};

