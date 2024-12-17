// Ls 44.1 Implementation of Queue using Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int data) : data(data), next(nullptr) {};
};

class Queue
{
private:
    Node *front, *rear;
    int size = 0;

public:
    Queue() : front(nullptr), rear(nullptr) {}
    void enQueue(int data)
    {
        Node *newNode = new Node(data);
        size++;
        if (rear == nullptr)
        {
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = rear->next;
    }

    void deQueue()
    {
        if (front == nullptr)
            return;
        size--;
        Node *temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr)
            rear = nullptr;
    }

    int getSize()
    {
        return size;
    }

    int getFront()
    {
        if (front)
            return front->data;
        else
            return 0;
    }

    int getRear()
    {
        if (rear)
            return rear->data;
        else
            return 0;
    }

    bool empty()
    {
        if (!front)
            return true;
        else
            return false;
    }

    void display()
    {
        Node *curr = front;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.display();
    cout << "Size : " << q.getSize() << endl;
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Is Empty?: " << q.empty() << endl;
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.display();
    cout << "Size : " << q.getSize() << endl;
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Is Empty?: " << q.empty() << endl;
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.display();
    cout << "Size : " << q.getSize() << endl;
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Is Empty?: " << q.empty() << endl;

    return 0;
}