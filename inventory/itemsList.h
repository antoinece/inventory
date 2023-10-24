#pragma once
#include "inventory.h"
#include "map.h"
#include "potion.h"
#include "weapon.h"

extern inventory inventory1;
extern inventory itemList;
 enum
 {
 	heal,
 	strength,
    sword,
    bow
 };
extern Potion potionS1;
extern Potion potionS2;
extern Potion potionS3;
extern Potion potionH1;
extern Potion potionH2;
extern Potion potionH3;
extern weapon sword1;
extern weapon sword2;
extern weapon sword3;
extern weapon bow1;
extern weapon bow2;
extern weapon bow3;
extern map map1;
extern map map2;
extern map map3;


std::string EnumToString(int);
void display(inventory);
void addItem(inventory&);
void intializeItemList();
void useItem(inventory&);