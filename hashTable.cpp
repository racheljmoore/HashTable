#include "hashTable.h"
#include <cstdlib>
#include <isostream>
#include <list>
#include <iostream>

using namespace std;


HashTable::HashTable(int numkeys) // numkey is a peramiter or input to the function
{
	this->numkeys = numkeys;
	hashT = new list< int >[2];
}

void HashTable::insertData(int data)
{
}

int HashTable::hashKey(int data)
{
	return data % this->numkeys;
}

void HashTable::displayHashTable()
{
}

void HashTable::insertData(int data)
{
	int dataKey = hashKey(data);
	hashT[dataKey].push_back(data);

	for (int i = 0; i < numkeys; i++) // showing a nested loop
	{
		cout << i;
		for (auto x : hashT[i])
		{

			cout << "--> " << x;

			cout << "\n";
		}



	}