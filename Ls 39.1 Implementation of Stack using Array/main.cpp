// Ls 39.1 Implementation of Stack using Array

#include <iostream>
using namespace std;

class Stack
{

private:
    int size_of_arr;
    int index;
    int *arr;

public:
    Stack(int size_of_arr)
    {
        this->size_of_arr = size_of_arr;
        index = -1;
        arr = new int[size_of_arr];
        for (int i = 0; i < size_of_arr; i++)
        {
            arr[i] = 0;
        }
    }

    void push(int val)
    {
        if (isFull())
        { // Check if stack is full
            cout << "Stack Overflow: The Stack is Full, hence is in Overflow State"
                 << endl;
        }
        else
        {
            index++;
            arr[index] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        { // Check if stack is empty
            cout << "Stack Underflow: The Stack is Empty" << endl;
            return 0;
        }
        else
        {
            int pop_item = arr[index];
            arr[index] = 0;
            index--;
            return pop_item;
        }
    }

    bool isEmpty()
    {
        if (index == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (index >= size_of_arr - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int count() { return (index + 1); }

    void change(int pos, int val) { arr[pos] = val; }

    void display()
    {
        for (int i = 0; i <= index; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int peek(int pos) { return arr[pos]; }

    ~Stack() { delete[] arr; }
};

int main()
{

    Stack s(5);

    cout << s.isEmpty() << endl;
    cout << s.isFull() << endl;
    cout << s.count() << endl;
    cout << s.pop() << endl;
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(5);
    s.push(1);
    s.push(8);   // Should print "Stack Overflow: The Stack is Full, hence is in Overflow State"
    s.display(); // Should print "3 7 9 5 1"
    s.pop();
    s.pop();
    s.display(); // Should print "3 7 0 0 0"
    s.change(2, 2);
    s.display();               // Should print "3 7 2 0 0"
    cout << s.peek(1) << endl; // Should print 7
}