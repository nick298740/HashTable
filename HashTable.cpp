#include "HashTable.h"
void HashTable::insert(Node *newNode)
{
	int val = HashFunction(newNode->id); // Find nearest bucket
	newNode->key=newNode->id; //Key & ID are same. I include both for clarity
	list[val].insert(newNode); //Insert node in bucket
}

int HashTable::HashFunction(unsigned int x)
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Hash function found here:
	// http://stackoverflow.com/questions/664014/what-integer-hash-function-are-good-that-accepts-an-integer-hash-key
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	x = ((x >> 16) ^ x) * 0x45d9f3b; // HEX 0x45d9f3b == DEC 73,244,475 
	x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x);

	while(x>hashLength){ // Find nearest bucket
		x=x%hashLength;
	}
	
    return x; // return the calculated bucket
}

void HashTable::remove(int hashKey)
{	
	int val = HashFunction(hashKey); // Find nearest bucket based on key
	list[val].remove(hashKey); // Remove node in bucket
}

void HashTable::lookUp(int hashKey)
{
	int val = HashFunction(hashKey); // Find nearest bucket based on key
	
	Node * n;
	n = list[val].getNode(hashKey); // Find if node exists
	
}

// Functions used to print visual representations of the bucket values to the screen
int HashTable::getNumberOfNodes()
{
    int NodeCount = 0;
    for ( int i = 0; i < hashLength; i++ )
    {
        NodeCount += list[i].getLength();
    }
    return NodeCount;
}

void HashTable::printBucketValues()
{
    cout << "\n\nHash Table Bucket Values:\n";
    for ( int i = 0; i < hashLength; i++ )
    {
        cout << "Bucket " << i + 1 << ": ";
        list[i].printList();
    }

}

void HashTable::printHistogram()
{
	cout <<"--------------------------------------------------------"<<endl;
    cout << "\n\nHash Table Contains ";
    cout << getNumberOfNodes() << " Nodes total\n";
    for ( int i = 0; i < hashLength; i++ )
    {
        cout << i + 1 << ":\t";
        for ( int j = 0; j < list[i].getLength(); j++)
            cout << " O";
        cout << "\n";
    }
	cout <<"--------------------------------------------------------"<<endl;
}


// Constructor
HashTable::HashTable(int hashTableLength)
{
	// Instantiate with a default size of 10
    if (hashTableLength <= 0) 
		hashTableLength = 10;
	
    list = new LinkedList[hashTableLength];
	
    hashLength = hashTableLength;
}

// De-constructor
HashTable::~HashTable()
{	
    delete [] list;

}