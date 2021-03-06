#include "LinkedList.h"

void LinkedList::append(int val)
{
	Node* newNode = new Node(val);
	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node* currentNode = head;
		while (currentNode->next != nullptr)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}
	size++;
}

void LinkedList::insert(int idx, int val)
{
	assert(idx>=0 && idx <=size);
	Node* newNode = new Node(val);
	if (idx == 0)
	{
		newNode->next = head;
		head = newNode;
	}
	else 
	{
		Node* currentNode = head;
		int i = 0;
		while (i < idx - 1)
		{
			currentNode = currentNode->next;
			i++;
		}
		newNode->next = currentNode->next;
		currentNode->next = newNode;
	}
	size++;
}

void LinkedList::print()
{
	Node* currentNode = head;
	while (currentNode != nullptr) 
	{
		cout << currentNode->value << endl;
		currentNode = currentNode->next;
	}
}

void LinkedList::removeAt(int idx)
{
	assert(idx >= 0 && idx < size);

	if(idx == 0)
	{
	Node* tmp = head->next;
	delete head;
	head = tmp;
	}
	else
	{
		Node* before = head;
		int i = 0; 

		while( i < idx-1 )
		{
			before = before->next;
			i++;
		}
		Node* after = before->next->next;
		delete before->next;
		before->next = after;
	}
	size--;
}

LinkedList::LinkedList() : head(nullptr) , size(0)
{
}

LinkedList::~LinkedList()
{
}
