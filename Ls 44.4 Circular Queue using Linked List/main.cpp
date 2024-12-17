// Ls 44.4 Circular Queue using Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data = 0) : data(data), next(nullptr) {}
};

class CircularQueue
{
private:
    Node *rear;

public:
    CircularQueue() : rear(nullptr) {}

    void enQueue(int data)
    {
        Node *newNode = new Node(data);
        if (!newNode)
        {
            cout << "Heap Overflow" << endl;
            return;
        }

        if (rear == nullptr)
        {
            rear = newNode;
            rear->next = rear;
            return;
        }

        newNode->next = rear->next;
        rear->next = newNode;
        rear = newNode;
        return;
    }

    void deQueue()
    {
        if (rear == nullptr)
        {
            cout << "Queue is Already Empty" << endl;
            return;
        }
        if (rear->next == rear)
        {
            rear = nullptr;
            return;
        }
        Node *temp = rear->next;
        rear->next = rear->next->next;
        delete temp;
    }

    void print()
    {
        if (rear == nullptr)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *curr = rear->next;
        do
        {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != rear->next);
        cout << endl;
    }
};

int main()
{
    CircularQueue q;
    q.print();
    q.enQueue(1);
    q.print();
    q.enQueue(2);
    q.enQueue(3);
    q.print();
    q.enQueue(4);
    q.print();
    q.enQueue(5);
    q.print();
    q.deQueue();
    q.print();
    q.deQueue();
    q.print();
    q.deQueue();
    q.print();
    q.deQueue();
    q.print();
    q.deQueue();
    q.print();
    q.deQueue();
    q.print();
}