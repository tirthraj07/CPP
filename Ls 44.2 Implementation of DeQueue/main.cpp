// Ls 44.2 Implementation of DeQueue

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev, *next;
    Node() : data(0), prev(nullptr), next(nullptr) {}
    Node(int data) : data(data), prev(nullptr), next(nullptr) {}
};

class DeQueue
{
private:
    Node *front, *rear;
    int size;

public:
    DeQueue() : front(nullptr), rear(nullptr), size(0) {}

    void push_front(int data)
    {
        Node *newNode = new Node(data);
        size++;
        if (front == nullptr)
        {
            front = newNode;
            rear = newNode;
            return;
        }
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }

    void push_back(int data)
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
        newNode->prev = rear;
        rear = newNode;
    }

    void pop_front()
    {
        if (front == nullptr)
        {
            cout << "Empty Queue" << endl;
            return;
        }
        size--;
        Node *temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr)
        {
            rear = nullptr;
            return;
        }
        front->prev = nullptr;
    }

    void pop_back()
    {
        if (rear == nullptr)
        {
            cout << "Empty Queue";
            return;
        }
        size--;
        Node *temp = rear;
        rear = rear->prev;
        delete temp;
        if (rear == nullptr)
        {
            front = nullptr;
            return;
        }
        rear->next = nullptr;
    }

    void displayFwd()
    {
        Node *curr = front;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void displayBwd()
    {
        Node *curr = rear;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->prev;
        }
        cout << endl;
    }

    bool empty()
    {
        if (front == nullptr)
            return true;
        return false;
    }

    int getSize()
    {
        return size;
    }

    int top()
    {
        if (!front)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return front->data;
    }

    int back()
    {
        if (!rear)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return rear->data;
    }
};

int main()
{
    DeQueue q;
    cout << "Is Queue Empty? " << q.empty() << endl;

    int arr1[5] = {5, 6, 7, 8, 9};
    for (int i : arr1)
    {
        q.push_back(i);
    }

    q.displayFwd();

    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.top() << endl;
    cout << "Back: " << q.back() << endl;

    q.displayBwd();

    int arr2[5] = {4, 3, 2, 1, 0};
    for (int i : arr2)
    {
        q.push_front(i);
    }
    q.displayFwd();

    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.top() << endl;
    cout << "Back: " << q.back() << endl;

    q.displayBwd();

    q.pop_back();
    q.pop_front();
    q.displayFwd();

    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.top() << endl;
    cout << "Back: " << q.back() << endl;

    q.displayBwd();

    cout << "Is Queue Empty? " << q.empty() << endl;

    return 0;
}