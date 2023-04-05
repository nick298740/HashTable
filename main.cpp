#include "HashTable.h"
#define TABLE_SIZE 100
int main()
{   
	cout<<"\nCreated by Nick Meyer for: CSCE2110 - Implementing a Hash Table "<<endl;
	cout<<"This Hash Table equally distributes values to buckets; handles potential collisions"<<endl;

	//Create new (empty) hash table
	HashTable table;

	// Create new nodes
	//*****************START*****************
	Node *A = new Node;
	A -> id = 111110;
	A -> gpa = 3.99;
	A -> next = NULL;
	A -> major="Mechanical Science";
	table.insert(A);

	cout<<"\n\nWe add two nodes: "<<endl;
	
	Node * C = new Node;
	C -> gpa = 1.9;
	C -> id = 111111; 
	C -> next = NULL;
	C -> major="Computer Science";

	table.insert(C);

	   
	
	//Show Update
    table.printBucketValues();
    table.printHistogram();
    
	cout<<"\nWe add "<<TABLE_SIZE<<" more nodes: "<<endl;

	
	Node *B[TABLE_SIZE];
	for(int i = 0; i < 50; i++){
		cout<<"\nAttempting to add node["<<i<<"]"<<endl;
		B[i] = new Node;
		cout<<"\nNode instantiated, continuing..."<<endl;
		//Insert some data
		B[i] -> key = i;
		B[i] -> id = 000000+(i^2);
		B[i] -> next = NULL;	
		table.insert(B[i]);
		cout<<"\nInserted a new row with an ID of: "<<B[i]->id<<endl;

	}
	
	table.printBucketValues();
    table.printHistogram();
	
	cout<<"\nWe lookup our first node with an ID of: 111111"<<endl;

	table.lookUp(111111);
	
	cout<<"\nWe lookup our second node with an ID of: 111110: "<<endl;

	table.lookUp(111110);

	cout<<"\nWe remove our first node...ID:111111: "<<endl;

    // Given a value, remove it from the hash table (if it exists)
	table.remove(111111);
		
	table.printBucketValues();
    table.printHistogram();
	
	cout<<"\nWe lookup and print the node that we just removed (111111 does not exist): "<<endl;

	table.lookUp(111111);
	
	
	cout<<"\nWe remove half the nodes: "<<endl;
	
	for(int i =0;i<25;i++){
		table.remove(000000+(i^2));
	}
	
	table.printBucketValues();
    table.printHistogram();
		
    return 0;
}