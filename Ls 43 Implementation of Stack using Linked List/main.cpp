// Ls 43 Implementation of Stack using Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;

    Node() : link(nullptr), data(0) {}
    Node(int data) : link(nullptr), data(data) {}
};

class Stack
{
private:
    Node *top;

public:
    Stack() { top = nullptr; }

    void push(int data)
    {

        Node *new_node = new Node;

        // Check if stack (heap) is full.
        // Then inserting an element would lead to stack overflow

        if (!new_node)
        {
            cout << "\nStack Overflow";
            exit(1);
        }

        new_node->data = data;
        new_node->link = top;
        top = new_node;
    }

    bool isEmpty()
    {
        return top == nullptr ? true : false;
    }

    int getTop()
    {
        if (top)
            return top->data;
        else
        {
            cout << "List Empty";
            return -1;
        }
    }

    void pop()
    {
        if (!top)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node *temp = top;
        top = top->link;
        delete temp;
    }

    int size()
    {
        if (!top)
            return 0;
        Node *curr = top;
        int size = 0;
        while (curr)
        {
            size++;
            curr = curr->link;
        }
        return size;
    }

    void display()
    {
        if (!top)
        {
            cout << "Empty Stack" << endl;
            return;
        }

        Node *curr = top;
        while (curr)
        {
            cout << curr->data << " ";
            curr = curr->link;
        }
        cout << endl;
    }
};

int main()
{
    Stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(0);

    st.display();
    while (st.size())
    {
        cout << st.getTop() << " ";
        st.pop();
    }
}