#pragma once
#include <isostream>
#include "hashTable.h"
#include <cstdlib>
#include <list>

using namespace std;

class HashTable
{
	int numkeys;
	list<int>* hashT; // is a value

public: // need a constructor ( we do not need a return type)
	HashTable(int numkeys);
	void insertData(int data);
	int hashKey(int data);
	void displayHashTable();


};

