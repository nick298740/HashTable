#include "LinkedList.h"

class HashTable
{
private:
    
    LinkedList * list; // Linked List reference
    
    int hashLength; // Size of the hash table
    
    int HashFunction(unsigned int hashKey); // Returns the hash value
    
public:
    
	//Constructor
    HashTable(int hashTableLength = 10); // Set by default to length of 10
    
    void insert(Node *newNode); // Hash insert
    
    void remove(int hashKey); // Hash delete
    
    void lookUp(int hashKey); // Hash lookup
    
    int getLength(); // Returns number of locations
    
    int getNumberOfNodes(); // Returns number of nodes in the hash table
	
	void printBucketValues(); // Detailed print of the hash table
    
    void printHistogram(); // Higher-level view of the table
    
	//De-constructor
    ~HashTable();
};