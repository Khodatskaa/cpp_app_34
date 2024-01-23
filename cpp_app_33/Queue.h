#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "List.h"
#include "Node.h"

class Queue : public List {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
		rear = nullptr;
    }

    void insert(int value) override {
        Node* newNode = new Node(value);
        if (front == nullptr) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    void remove() override {
        if (front != nullptr) {
			Node* temp = front;
			front = front->next;
			delete temp;
		}
        else {
			std::cout << "Queue underflow! Cannot remove from an empty queue\n";
		}
    }
    void display() const override {
        Node* current = front;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << "\n";
    }

    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};


#endif 
