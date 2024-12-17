// Ls 45.2 Binary Search Tree

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node() : data(0), left(nullptr), right(nullptr) {}
    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

class BST
{
private:
    Node *root;

public:
    BST() : root(nullptr) {}

    void push(int data)
    {
        Node *newNode = new Node(data);
        if (root == nullptr)
        {
            root = newNode;
            return;
        }
        Node *curr = root;
        Node *prev = nullptr;
        while (curr != nullptr)
        {
            prev = curr;
            if (curr->data > newNode->data)
            {
                curr = curr->left;
            }
            else
                curr = curr->right;
        }

        if (prev->data > newNode->data)
        {
            prev->left = newNode;
        }
        else
        {
            prev->right = newNode;
        }
    }

    void displayBST()
    {
        display(root);
    }

    void display(Node *parent)
    {
        if (parent != nullptr)
        {
            display(parent->left);
            cout << parent->data << " ";
            display(parent->right);
        }
        return;
    }
};

int main()
{
    BST b;
    int arr[5] = {4, 2, 7, 1, 3};
    for (int i : arr)
    {
        b.push(i);
    }
    b.displayBST();
    cout << endl;
    b.push(5);
    b.displayBST();
    cout << endl;
    return 0;
}