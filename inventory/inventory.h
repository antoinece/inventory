#pragma once
#include <vector>
#include "item.h"

class inventory
{
	std::vector<Item> items;

public:
	void addItem(Item);
	const std::vector<Item>& getItems() const;
	void useItem(Item);
};

