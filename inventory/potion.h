#pragma once
#include "item.h"

class Potion : public Item
{
	int Level;
	int Usage;
public:
	Potion(int level, std::string name,int usage,char type) :  Item(name,type), Level(level), Usage(usage){};
	//Potion itemToPotion(Item);
	//void use(Potion);
};

