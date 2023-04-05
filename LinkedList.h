/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * A 'bare-bones' version of a linked list.  								 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
using std::cout;
using std::endl;


// LinkedList Node:
// Student ID (int)
// Student GPA (double)
// Student Major (string)
// Pointer to the next node
struct Node
{
    int key;
	int value;
	int id;
	double gpa;
	char const *major;
    Node *next;
};


class LinkedList
{
private:
    Node *head; // Keeps track of the head
    int length; // Number of values in the list
	    
public:

	// Constructor
    LinkedList();
    
    void insert(Node *newNode); // Insert new node
    
    bool remove(int NodeKey); // Remove a node
    
    Node *getNode(int NodeKey); // Return a node
	    
    void printList(); // Print the linked list
    
    int getLength(); // Returns length of the list
    
	// De-constructor
    ~LinkedList();
};