// main.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//



#include "itemsList.h"
#include "save.h"


int main()
{
	load(inventory1);
	addItem(inventory1);
	useItem(inventory1);
	save();
	
}