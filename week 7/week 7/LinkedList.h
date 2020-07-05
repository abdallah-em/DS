#pragma once
#include"Node.h"
#include<assert.h>
#include<iostream>
using namespace std;

class LinkedList
{
private:
	Node*head;
	int size = 0;

public:
	void append(int val);
	void insert(int idx , int val);
	void print();
	void removeAt(int idx);



	LinkedList();
	~LinkedList();


};

