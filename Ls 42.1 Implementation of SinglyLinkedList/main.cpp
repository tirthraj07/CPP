// Ls 42.1 Implementation of SinglyLinkedList

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() : next(nullptr) {}
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class linkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    linkedList() : head(nullptr), tail(nullptr), size(0) {}

    linkedList(const linkedList &lst) : head(lst.head), tail(lst.tail), size(lst.size) {}

    void addFirst(int data)
    {
        Node *new_node = new Node;
        new_node->next = head;
        new_node->data = data;
        head = new_node;
        size++;
        if (size == 1)
        {
            tail = head;
        }
    }

    void addLast(int data)
    {
        if (size == 0)
        {
            addFirst(data);
            return;
        }

        while (tail->next != nullptr)
        {
            tail = tail->next;
        }

        Node *new_node = new Node;
        new_node->data = data;
        tail->next = new_node;
        tail = new_node;
        size++;
    }

    void addLast(int data[], int len)
    {
        for (int i = 0; i < len; i++)
        {
            addLast(data[i]);
        }
    }

    void addFirst(int data[], int len)
    {
        for (int i = 0; i < len; i++)
        {
            addFirst(data[i]);
        }
    }

    void addNodeAtHead(Node *&node)
    {
        node->next = head;
        head = node;
        size++;
        if (size == 1)
        {
            tail = head;
        }
    }

    void addNodeAtTail(Node *&node)
    {
        if (size == 0)
        {
            addNodeAtHead(node);
            return;
        }
        Node *current = tail;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = node;
        node->next = nullptr;
    }

    void insertAtPos(int index, int data)
    {
        if (index == 0)
        {
            addFirst(data);
            return;
        }
        else if (index == size)
        {
            addLast(data);
            return;
        }
        else if (index > size)
        {
            cout << "Index out of scope" << endl;
            return;
        }
        Node *current = head;
        int count = 0;
        while (count != index - 1)
        {
            current = current->next;
            count++;
        }
        Node *new_node = new Node;
        new_node->data = data;
        new_node->next = current->next;
        current->next = new_node;
        return;
    }

    void deleteNodeAtPos(int index)
    {
        int count = 0;
        Node *current = head;
        while (count != index - 1)
        {
            current = current->next;
            count++;
        }
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    void deleteNode(Node *&node)
    {
        if (head == node)
        {
            Node *temp = head->next;
            delete head;
            head = temp;
            return;
        }
        Node *current = head;
        while (current->next != node && current->next != nullptr)
        {
            current = current->next;
        }
        if (current->next != node)
        {
            cout << "Node not Found" << endl;
            return;
        }
        current->next = node->next;
        delete node;
    }

    int *toArr()
    {
        int *arr = new int[size];
        int *ptr = arr;

        Node *current = head;
        while (current != nullptr)
        {
            *arr = current->data;
            arr++;
            current = current->next;
        }

        return ptr;
    }

    void clone(linkedList &lst)
    {
        Node *current = lst.head;
        while (current != nullptr)
        {
            this->addLast(current->data);
            current = current->next;
        }
    }

    bool contains(Node *node)
    {
        Node *current = head;
        int i = 0;
        while (current != nullptr)
        {
            if (current == node)
            {
                cout << "Element found at index " << i << endl;
                return true;
            }
            i = i + 1;
            current = current->next;
        }
        cout << "Element not Found" << endl;
        return false;
    }

    void print()
    {
        if (size > 0)
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                cout << " | " << current->data << " | " << current->next << " | " << " --> ";
                current = current->next;
            }
            cout << " | " << current->data << " | " << current->next << " | " << endl
                 << endl;
        }
        else
        {
            cout << "Empty list" << endl;
        }
    }
};

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    linkedList lst;
    lst.addLast(arr, 7);
    lst.print();
    cout << endl;
    lst.insertAtPos(2, 15);
    lst.print();
    lst.deleteNodeAtPos(2);
    lst.print();
    Node *node = new Node(10);
    lst.addNodeAtHead(node);
    lst.print();
    lst.deleteNode(node);
    lst.print();
    node = new Node(20);
    lst.addNodeAtTail(node);
    lst.print();
    lst.deleteNode(node);
    lst.print();

    int *l = lst.toArr();
    for (int i = 0; i < 7; i++)
    {
        cout << l[i] << " ";
    }
    cout << endl;

    linkedList lst2(lst);
    lst2.print();

    linkedList lst3;
    lst3.clone(lst);
    lst3.print();

    node = new Node(30);
    lst.addNodeAtHead(node);
    lst.print();
    lst.contains(node);

    node = new Node(50);
    lst.addNodeAtTail(node);
    lst.print();
    lst.contains(node);
}