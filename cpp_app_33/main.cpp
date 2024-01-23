#include "Stack.h"
#include "Queue.h"

int main() {
    Stack stack;
    stack.insert(1);
    stack.insert(2);
    stack.insert(3);

    std::cout << "Stack: ";
    stack.display();

    stack.remove();
    std::cout << "Stack after removal: ";
    stack.display();

    Queue queue;
    queue.insert(1);
    queue.insert(2);
    queue.insert(3);

    std::cout << "Queue: ";
    queue.display();

    queue.remove();
    std::cout << "Queue after removal: ";
    queue.display();

    return 0;
}
