#include "hashTable.h"
#include <cstdlib>
#include <list>
#include <isostream>

using namespace std;

int main() 
{
	int numIndex = 100; // # of indexes (arrays) in the hashtable
	HashTable hashT_100(numIndex);
	for (int i = 0; i < 1000; i++) // 1000 = # of elements to be added
	{
		hashT_100.insertData(rand() % 100); // alot of collisions 50 = the range of values (1-50) add find and delete and a print
	// print index, values, index of 1- X, index 3-X (goal is divided into smaller sets) 
	// even distribution is so important
	// divide and conquer all these values
	}
		hashT_100.displayHashTable();
			return 0;
}