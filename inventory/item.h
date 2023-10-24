#pragma once
#include <string>

class Item
{
protected:
	std::string Name;
	char Type;
public:
	Item(std::string name, char type) : Name(name),Type(type){};
	std::string getName() const;
	char getType() const;
	bool isEqual(const Item& other) const;
};

