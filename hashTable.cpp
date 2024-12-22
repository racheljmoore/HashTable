#include "hashTable.h"
#include <cstdlib>
#include <isostream>




class HashTable {
private:
    int numkeys;           // Number of buckets
    std::list<int>* hashT; // Pointer to an array of lists

    int hashKey(int data); // Hash function

public:
    HashTable(int numkeys); // Constructor
    ~HashTable();           // Destructor

    void insertData(int data);       // Insert data
    void displayHashTable();         // Display the table
    bool findValue(int data);        // Find a value
    bool deleteData(int data);       // Delete a value
};

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