#include "itemsList.h"
#include <iostream>
#include "potion.h"

inventory inventory1{};
Potion potionS1{ 1,"strength 1", strength,'p' };
Potion potionS2{ 2,"strength 2", strength,'p' };
Potion potionS3{ 3,"strength 3", strength,'p' };
Potion potionH1{ 1,"health 1", heal,'p' };
Potion potionH2{ 2,"health 2", heal,'p' };
Potion potionH3{ 3,"health 3", heal,'p' };
weapon sword1{10,"dagger",sword,'w'};
weapon sword2{ 12,"master sword",sword,'w' };
weapon sword3{ 15,"excalibur",sword,'w' };
weapon bow1{ 10,"hunting bow",bow,'w' };
weapon bow2{ 12,"Robin Hood bow",bow,'w' };
weapon bow3{ 15,"Heracles bow",bow,'w' };
map map1{ "world","world map",'m' };
map map2{ "dungeon","dungeon map",'m' };
map map3{ "treasure","treasure map",'m' };
inventory itemList{};

std::string EnumToString(int a)
{
	switch (a)
	{
	case (heal):
		return "healing";
	case (strength):
		return "strength";
	case (sword):
		return "sword";
	case (bow):
		return "bow";

	default:
		return "probleme fonction EnumToString";
	}
}
void display(inventory inventory)
{
	int counter = 0;
	const std::vector<Item>& items = inventory.getItems();
	for (const Item& item : items) {
		std::cout << ++counter << ". " <<item.getName() << std::endl;
	}
}

void addItem(inventory&inventory)
{
	intializeItemList();
	int a=0;
	std::string again = "y";
	while (again == "y")
	{
		std::cout << "item list :\n";
		display(itemList);
		std::cout << "what do you want to add in your inventory ?";
		std::cin >> a;
		a++;
		switch (a)
		{
		case (2):
			inventory.addItem(potionS1);
			break;
		case (3):
			inventory.addItem(potionS2);
			break;
		case (4):
			inventory.addItem(potionS3);
			break;
		case (5):
			inventory.addItem(potionH1);
			break;
		case (6):
			inventory.addItem(potionH2);
			break;
		case (7):
			inventory.addItem(potionH3);
			break;
		case (8):
			inventory.addItem(sword1);
			break;
		case (9):
			inventory.addItem(sword2);
			break;
		case (10):
			inventory.addItem(sword3);
			break;
		case (11):
			inventory.addItem(bow1);
			break;
		case (12):
			inventory.addItem(bow2);
			break;
		case (13):
			inventory.addItem(bow3);
			break;
		case (14):
			inventory.addItem(map1);
			break;
		case (15):
			inventory.addItem(map2);
			break;
		case (16):
			inventory.addItem(map3);
			break;
		}
		std::cout << "do you want to add more items ?(type 'y' for yes)";
		std::cin >> again;
		system("cls");
	}
	
}
void intializeItemList()
{
	itemList.addItem(potionS1);
	itemList.addItem(potionS2);
	itemList.addItem(potionS3);
	itemList.addItem(potionH1);
	itemList.addItem(potionH2);
	itemList.addItem(potionH3);
	itemList.addItem(sword1);
	itemList.addItem(sword2);
	itemList.addItem(sword3);
	itemList.addItem(bow1);
	itemList.addItem(bow2);
	itemList.addItem(bow3);
	itemList.addItem(map1);
	itemList.addItem(map2);
	itemList.addItem(map3);
}

void useItem(inventory& inventory)
{
	int a = 0;
	std::string again = "y";
	while (again == "y")
	{
		std::cout << "item list :\n";
		display(inventory1);
		std::cout << "what do you want to use in your inventory ?";
		std::cin >> a;
		a--;
		std::string itemName = inventory.getItems()[a].getName();

		if (itemName == "strength 1")
		{
			inventory.useItem(potionS1);
		}
		else if (itemName == "strength 2")
		{
			inventory.useItem(potionS2);
		}
		else if (itemName == "strength 3")
		{
			inventory.useItem(potionS3);
		}
		else if (itemName == "health 1")
		{
			inventory.useItem(potionH1);
		}
		else if (itemName == "health 2")
		{
			inventory.useItem(potionH2);
		}
		else if (itemName == "health 3")
		{
			inventory.useItem(potionH3);
		}
		else if (itemName == "dagger")
		{
			inventory.useItem(sword1);
		}
		else if (itemName == "master sword")
		{
			inventory.useItem(sword2);
		}
		else if (itemName == "excalibur")
		{
			inventory.useItem(sword3);
		}
		else if (itemName == "hunting bow")
		{
			inventory.useItem(bow1);
		}
		else if (itemName == "Robin Hood bow")
		{
			inventory.useItem(bow2);
		}
		else if (itemName == "Heracles bow")
		{
			inventory.useItem(bow3);
		}
		else if (itemName == "world map")
		{
			inventory.useItem(map1);
		}
		else if (itemName == "dungeon map")
		{
			inventory.useItem(map2);
		}
		else if (itemName == "treasure map")
		{
			inventory.useItem(map3);
		}
		std::cout << "do you want to use an other item ?(type 'y' for yes)";
		std::cin >> again;
		system("cls");
	}
}
