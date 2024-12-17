// Ls 44.3 Circular Queue Using Array

#include <iostream>
#include <vector>
using namespace std;

class circularQueue
{
private:
    int size;
    int *arr;
    int front, rear;

public:
    circularQueue(int size = 1) : size(size), front(-1), rear(-1)
    {
        arr = new int[size];
    }

    ~circularQueue()
    {
        delete[] arr;
    }

    void enQueue(int a)
    {
        if ((rear + 1) % size == front)
        {
            cout << "Queue is Full" << endl;
            return;
        }
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = a;
            return;
        }

        if (rear == size - 1)
        {
            rear = 0;
            arr[rear] = a;
            return;
        }

        rear = rear + 1;
        arr[rear] = a;
    }

    void deQueue()
    {
        if (front == -1)
        {
            cout << "Queue is already Empty" << endl;
            return;
        }
        if ((front) % size == rear)
        {
            front = -1;
            rear = -1;
            return;
        }
        if (front == size - 1)
        {
            front = 0;
            return;
        }
        front = front + 1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    void print()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            return;
        }
        if (front > rear)
        {
            int i = front;
            while (i != rear)
            {
                cout << arr[i] << " ";
                i = (i + 1) % size;
            }

            cout << arr[rear] << endl;
        }
    }
};

int main()
{
    circularQueue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.print();
    q.enQueue(6);
    q.print();
    q.deQueue();
    q.enQueue(6);
    q.print();
    return 0;
}