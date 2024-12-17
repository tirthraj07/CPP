// Ls 40 Implementation of Queue using Array

#include <iostream>
using namespace std;

class Queue
{
private:
    int rear_index, front_index, size_of_arr;
    int *arr;

public:
    Queue(int size_of_arr)
    {
        this->size_of_arr = size_of_arr;
        arr = new int[size_of_arr];
        for (int i = 0; i < size_of_arr; i++)
        {
            arr[i] = 0;
        }
        rear_index = -1;
        front_index = -1;
    }

    bool isFull()
    {
        return (rear_index >= size_of_arr - 1);
    }

    bool isEmpty()
    {
        return (rear_index == front_index);
    }

    int count()
    {
        return (rear_index - front_index);
    }

    void enqueue(int val)
    {
        if (isFull() == true && rear_index != front_index)
        {
            cout << "Queue Full" << endl;
        }
        else
        {
            if (isEmpty() == true)
            {
                rear_index = -1;
                front_index = -1;
            }
            rear_index++;
            arr[rear_index] = val;
        }
    }

    int dequeue()
    {
        if (isEmpty() == true)
        {
            cout << "Queue Empty" << endl;
            return 0;
        }
        else
        {
            front_index++;
            int dequeue_item = arr[front_index];
            arr[front_index] = 0;
            return dequeue_item;
        }
    }

    void display()
    {
        for (int i = (front_index + 1); i <= rear_index; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int peek()
    {
        return arr[(front_index + 1)];
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);
    // Test enqueue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6); // should print "Queue Full"

    q.display(); // should print 1 2 3 4 5

    // Test dequeue
    cout << q.dequeue() << endl; // should print 1
    cout << q.dequeue() << endl; // should print 2
    cout << q.dequeue() << endl; // should print 3
    cout << q.dequeue() << endl; // should print 4
    cout << q.dequeue() << endl; // should print 5
    cout << q.dequeue() << endl; // should print "Queue Empty" and return 0

    // Test count and isEmpty
    cout << q.count() << endl;   // should print 0
    cout << q.isEmpty() << endl; // should print 1

    // Test enqueue after dequeue
    q.enqueue(7);
    cout << q.count() << endl;   // should print 1
    cout << q.isEmpty() << endl; // should print 0
    cout << q.peek() << endl;    // should print 7
    cout << q.dequeue() << endl; // should print 7
    q.display();
}