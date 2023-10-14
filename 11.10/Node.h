#pragma once
class Node
{
public:
	int value;
	Node* next;
	Node* date;
private:
	Node(int value, Node* next, Node* date)
		: value(value), next(next), date(date) {}
};

