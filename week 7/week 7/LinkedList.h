#pragma once
#include"Node.h"
#include<iostream>
using namespace std;

class LinkedList
{
private:
	Node*head;
	int size = 0;

public:
	void append(int val);
	void print();

	LinkedList();
	~LinkedList();


};

