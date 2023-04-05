#include "LinkedList.h"

//Constructor
LinkedList::LinkedList()
{
    head = new Node;
	head = NULL;
    length = 0;
	
}

void LinkedList::insert(Node * newNode)
{
	//	Student GPA (double)
	//	Student Major (string)
	//	Pointer to the next node
    //	Node* temp = new Node;	

	newNode -> next = head;
	head = newNode;
	length++;

}

bool LinkedList::remove(int NodeKey)
{

	Node * temp = head; 
	Node * prev = NULL;
	
    while(temp!=NULL){

		if(temp->key==NodeKey){ // Found the node to remove

			length--; 
			
			// If the node we are removing is the head..
			if(head==temp){ 
				// Then re-assign the head of the LinkedList to the next node 
				head=head->next;

			} else { // Otherwise, reset the prior node pointer to point to the node in the new position 
			
				prev->next=temp->next;

			}
			
			return true; // Return a success removal
			
		} else { // Not the node we want to remove
			
			prev = temp; // Set the previous node for the next iteration

		}

		temp = temp->next; // Set the next node for the next iteration
	}
	
	return false; // Return unsuccessful removal
}

Node *LinkedList::getNode(int NodeKey)
{
	Node* p = head; // Start at the head
	while(p->next != NULL && p->key != NodeKey){ // Advance until we find p
		p = p->next; // Advance p
	} //while
	
	if(p->key==NodeKey){ // found
		cout <<"--------------------------------------------------------"<<endl;
		cout << "Student found with an ID of: "<<p->id<<endl;
		cout<<"Major:"<<endl;
		cout<<p->major<<endl;
		cout<<"GPA:"<<endl;
		cout<<p->gpa<<endl;
		cout <<"--------------------------------------------------------"<<endl;

	} else { // !found
		cout <<"--------------------------------------------------------"<<endl;
		cout<<"Node not found."<<endl;
		cout <<"--------------------------------------------------------"<<endl;
	}

	return p; // return the node that was found
}

// Prints the linked list
void LinkedList::printList()
{
    if (length == 0)
    {
        cout << "\n{ }\n";

        return;
    }
	
	
	cout << "\n{ ";

	Node* p=head;
	
	while(p!=NULL){
		cout<<p->key;
		
		if (p->next) 
			cout << ", ";
        else 
			cout << " ";
		
		p=p->next;
	}

    cout << "}\n";

}

// Get and Return length of the list
int LinkedList::getLength()
{
    return length;
}

// De-Constructor
LinkedList::~LinkedList()
{

    Node *p = head;
    Node *q = head;
    while (q)
    {
        p = q;
        q = p->next;
        if (q) delete p;
		
    }

}