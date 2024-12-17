// Ls 42.2 Implementation of DoublyLinkedList

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node() : prev(nullptr), next(nullptr) {}
    Node(int data) : prev(nullptr), next(nullptr), data(data) {}
};

class doublyLinkedList
{
private:
    Node *head;

public:
    doublyLinkedList() : head(nullptr) {}
    doublyLinkedList(const doublyLinkedList &lst) : head(nullptr)
    {
        this->head = lst.head;
    }

    int front()
    {
        if (head == nullptr)
        {
            cout << "Empty List" << endl;
            return 0;
        }
        return head->data;
    }

    int back()
    {
        if (head == nullptr)
        {
            cout << "Empty List" << endl;
            return 0;
        }
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        return current->data;
    }

    void addFirst(int data)
    {
        if (head == nullptr)
        {
            Node *new_node = new Node;
            new_node->data = data;
            head = new_node;
            return;
        }
        Node *new_node = new Node;
        new_node->data = data;
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    void addLast(int data)
    {
        if (head == nullptr)
        {
            Node *new_node = new Node;
            new_node->data = data;
            head = new_node;
            return;
        }
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        Node *new_node = new Node;
        new_node->data = data;
        new_node->prev = current;
        current->next = new_node;
    }

    void addNodeFront(Node *&node)
    {
        if (head == nullptr)
        {
            head = node;
            return;
        }
        node->next = head;
        head->prev = node;
        head = node;
    }

    void addNodeLast(Node *&node)
    {
        if (head == nullptr)
        {
            head = node;
            return;
        }

        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = node;
        node->prev = current;
    }

    void insertAtIndex(int index, int data)
    {
        if (index == 0)
        {
            addFirst(data);
            return;
        }
        int i = 0;
        Node *current = head;
        while (i < index && current->next != nullptr)
        {
            i++;
            current = current->next;
        }
        if (i < index)
        {
            throw out_of_range("Index out of range");
            return;
        }
        else if (index == i && current->next == nullptr)
        {
            Node *new_node = new Node;
            new_node->data = data;
            new_node->prev = current;
            current->next = new_node;
            return;
        }

        Node *temp = current->next;
        Node *new_node = new Node;
        new_node->data = data;
        new_node->prev = current;
        current->next = new_node;
        new_node->next = temp;
        temp->prev = new_node;
        return;
    }

    void insertAtNode(Node *&node, int data)
    {
        if (head == nullptr)
        {
            cout << "Node not found" << endl;
            return;
        }

        else if (node == head)
        {
            addFirst(data);
            return;
        }

        Node *current = head;
        while (current != node && current != nullptr)
        {
            current = current->next;
        }

        if (current == node)
        {
            Node *temp = current->next;
            Node *new_node = new Node;
            new_node->data = data;
            current->next = new_node;
            new_node->prev = current;
            if (temp != nullptr)
            {
                temp->prev = new_node;
                new_node->next = temp;
            }
            return;
        }
        cout << "Node not found" << endl;
    }

    void clone(doublyLinkedList lst)
    {
        if (lst.head == nullptr)
        {
            return;
        }
        Node *current = lst.head;
        while (current != nullptr)
        {
            addLast(current->data);
            current = current->next;
        }
    }

    void clear()
    {
        if (head == nullptr)
        {
            cout << "Cleared" << endl;
            return;
        }
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
            delete current->prev;
        }
        delete current;
        head = nullptr;
    }

    void deleteNode(Node *&node)
    {
        if (head == nullptr)
        {
            cout << "Empty List" << endl;
            return;
        }
        Node *current = head;

        if (node == head)
        {
            current = head->next;
            delete head;
            head = current;
            current->prev = nullptr;
            return;
        }

        while (current != node && current != nullptr)
        {
            current = current->next;
        }
        if (current == nullptr)
        {
            cout << "Node not Found" << endl;
            return;
        }
        if (current->next != nullptr)
        {
            Node *prev = current->prev;
            Node *next = current->next;
            prev->next = current->next;
            next->prev = current->prev;
            delete current;
            return;
        }
        if (current->next == nullptr)
        {
            Node *prev = current->prev;
            prev->next = nullptr;
            delete current;
            return;
        }
    }

    bool contains(Node *&node)
    {
        if (head == nullptr)
        {
            cout << "False" << endl;
            return false;
        }
        Node *current = head;
        while (current != node && current != nullptr)
        {
            current = current->next;
        }
        if (current == node)
        {
            cout << "True" << endl;
            return true;
        }
        else
        {
            cout << "False" << endl;
            return false;
        }
    }

    int find(int data)
    {
        if (head == nullptr)
        {
            cout << "Element not found" << endl;
        }
        int index = 0;
        Node *current = head;
        while (current->data != data && current->next != nullptr)
        {
            current = current->next;
            index++;
        }
        if (current->data == data)
        {
            cout << "Element Found at Index " << index << endl;
            return index;
        }
        cout << "Element not Found" << endl;
        return -1;
    }

    int length()
    {
        Node *current = head;
        int len = 0;
        while (current != nullptr)
        {
            len++;
            current = current->next;
        }
        return len;
    }

    int length(Node *&node)
    {
        int len = 0;
        Node *current = node;
        while (current != nullptr)
        {
            len++;
            current = current->next;
        }
        return len;
    }

    int *toArr()
    {
        if (head == nullptr)
        {
            return nullptr;
        }
        int length = this->length();
        int *arr = new int[length];
        int *ptr = arr;
        Node *current = head;
        while (current != nullptr)
        {
            *ptr = current->data;
            ptr++;
            current = current->next;
        }

        return arr;
    }

    void print()
    {
        if (head == nullptr)
        {
            cout << "Empty List" << endl;
            return;
        }

        Node *current = head;
        while (current != nullptr)
        {
            cout << current->prev << " | " << current->data << " | " << current->next << " , ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    doublyLinkedList lst;
    lst.print();

    lst.addFirst(3);
    lst.addFirst(2);
    lst.addFirst(1);
    lst.print();

    lst.addLast(4);
    lst.addLast(5);
    lst.addLast(6);
    lst.print();

    cout << "Front: " << lst.front() << endl;
    cout << "Back: " << lst.back() << endl;

    Node *n = new Node(0);
    lst.addNodeFront(n);
    lst.print();

    n = new Node(8);
    lst.addNodeLast(n);
    lst.print();

    lst.insertAtIndex(7, 7);
    lst.print();

    lst.insertAtNode(n, 9);
    lst.print();

    lst.contains(n);

    lst.find(9);
}