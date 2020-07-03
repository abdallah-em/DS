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

void LinkedList::print()
{
	Node* currentNode = head;
	while (currentNode != nullptr) 
	{
		cout << currentNode->value << endl;
		currentNode = currentNode->next;
	}
}

LinkedList::LinkedList() : head(nullptr) , size(0)
{
}

LinkedList::~LinkedList()
{
}
