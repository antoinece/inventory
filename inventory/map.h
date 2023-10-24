#pragma once
#include "item.h"
#include <iostream>
class map : public Item
{
	std::string Location;
public:
	map(std::string location, std::string name, char type) : Item(name, type),Location(location) {};
};

