#include <fstream>
#include <iostream>
#include <vector>
#include "item.h"
#include "itemsList.h"

void save()
{
	std::string a;
	std::cout << " ";
	std::cout << "save ?";
	std::cin >> a;
	if (a == "y") {
		std::ofstream inventoryOut("inventory.txt");
		const std::vector<Item>& items = inventory1.getItems();
		for (const Item& item : items) {
			inventoryOut << item.getName() << std::endl;
		}
		inventoryOut.close();
	}
}
void load(inventory& inventory)
{
	std::string b;
	std::cout << "load ?(type 'y' for yes)\n";
	std::cin >> b;
	if (b == "y") {

		int idxLine = 0;
		std::ifstream inventoryIn;
		inventoryIn.open("inventory.txt");
		if (inventoryIn.is_open())
		{
			while (!inventoryIn.eof())
			{
				std::string line;
				std::getline(inventoryIn, line);

				if (line == "strength 1")
				{
					inventory.addItem(potionS1);
				}
				else if (line == "strength 2")
				{
					inventory.addItem(potionS2);
				}
				else if (line == "strength 3")
				{
					inventory.addItem(potionS3);
				}
				else if (line == "health 1")
				{
					inventory.addItem(potionH1);
				}
				else if (line == "health 2")
				{
					inventory.addItem(potionH2);
				}
				else if (line == "health 3")
				{
					inventory.addItem(potionH3);
				}
				else if (line == "dagger")
				{
					inventory.addItem(sword1);
				}
				else if (line == "master sword")
				{
					inventory.addItem(sword2);
				}
				else if (line == "excalibur")
				{
					inventory.addItem(sword3);
				}
				else if (line == "hunting bow")
				{
					inventory.addItem(bow1);
				}
				else if (line == "Robin Hood bow")
				{
					inventory.addItem(bow2);
				}
				else if (line == "Heracles bow")
				{
					inventory.addItem(bow3);
				}
				else if (line == "world map")
				{
					inventory.addItem(map1);
				}
				else if (line == "dungeon map")
				{
					inventory.addItem(map2);
				}
				else if (line == "treasure map")
				{
					inventory.addItem(map3);
				}
			}
		}
		inventoryIn.close();
	}
}