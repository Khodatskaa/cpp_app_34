#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "List.h"
#include "Node.h"

class Stack : public List {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void insert(int value) override {
		Node* newNode = new Node(value);
		newNode->next = top;
		top = newNode;
	}
    void remove() override {
        if (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
        else {
            std::cout << "Stack underflow! Cannot remove from an empty stack.\n";
        }
    }
    void display() const override {
        Node* current = top;
        while (current != nullptr) {
			std::cout << current->data << " ";
			current = current->next;
		}
		std::cout << "\n";
    }

    ~Stack() {
        while (top != nullptr) {
			Node* temp = top;
			top = top->next;
			delete temp;
		}
    }
};

#endif 
