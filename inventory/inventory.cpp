#include "inventory.h"

#include <iostream>
#include "potion.h"


void inventory::addItem(Item itemToAdd)
{
	items.emplace_back(itemToAdd);
}
const std::vector<Item>& inventory::getItems() const {
	return items;
}

void inventory::useItem(const Item itemUse)
{
    auto i = std::find_if(items.begin(), items.end(), [&](const Item item) {
        return itemUse.isEqual(item);
        });
    if (i != items.end()) {
        if (itemUse.getType()=='p') {
            std::cout << "you used a " << itemUse.getName() << " potion.\n";
            items.erase(i);
        }
        else if (itemUse.getType() == 'w')
        {
            std::cout << "you equipped a " << itemUse.getName() << "!\n";
        }
        if (itemUse.getType() == 'm') {
            std::cout << "you looking at the " << itemUse.getName() << ".\n";
        }
    }
    else 
	{
        std::cout << "item not found" << std::endl;
    }
}


