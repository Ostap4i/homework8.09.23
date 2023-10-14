#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class Linkedlist : public Node
{
private:
 Node* head;
Node* tail;
public:

	Linkedlist(Node* head, Node* tail)
		: head(head), tail(tail) {}

    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->date = tail;
            tail = newNode;
        }
    }


            void print() {
                Node* current = head;
                while (current != nullptr) {
                    cout << current->value << " ";
                    current = current->next;
                }
                std::cout << std::endl;
            }

            void remove(int value) {
                Node* current = head;
                while (current != nullptr) {
                    if (current->value == value) {
                        if (current->date) {
                            current->date->next = current->next;
                        }
                        else {
                            head = current->next;
                        }
                        if (current->next) {
                            current->next->date = current->date;
                        }
                        else {
                            tail = current->date;
                        }
                        delete current;
                        return;
                    }
                    current = current->next;
                }
            }

            void clear() {
                Node* current = head;
                while (current != nullptr) {
                    Node* temp = current;
                    current = current->next;
                    delete temp;
                }
                head = nullptr;
                tail = nullptr;
            }
        };
        
    
	


