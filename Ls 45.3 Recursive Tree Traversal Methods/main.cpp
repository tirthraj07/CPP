// Ls 45.3 Recursive Tree Traversal Methods

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data = 0) : data(data), left(nullptr), right(nullptr) {}
};

class BST
{
private:
    Node *root;

public:
    BST() : root(nullptr) {}

    void insert(int data)
    {
        if (root == nullptr)
        {
            root = new Node(data);
            return;
        }
        Node *curr = root;
        Node *prev = nullptr;

        while (curr != nullptr)
        {
            prev = curr;
            if (curr->data > data)
            {
                curr = curr->left;
            }
            else
            {
                curr = curr->right;
            }
        }
        Node *newNode = new Node(data);
        if (prev->data > data)
        {
            prev->left = newNode;
        }
        else
        {
            prev->right = newNode;
        }
    }

    void inorder(Node *node) const
    {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(Node *node) const
    {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node *node) const
    {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    int height(Node *node)
    {
        if (node == nullptr)
            return 0;
        int lHeight = height(node->left);
        int rHeight = height(node->right);
        return lHeight > rHeight ? (lHeight + 1) : (rHeight + 1);
    }

    void levelorder(Node *node, int level)
    {
        if (node == nullptr)
        {
            return;
        }
        if (level == 0)
        {
            cout << node->data << " ";
            return;
        }
        levelorder(node->left, level - 1);
        levelorder(node->right, level - 1);
    }

    void LOT()
    {
        for (int i = 0; i < height(root); i++)
        {
            levelorder(root, i);
        }
    }

    void spiralLevelOrder(Node *node, int level, bool itr)
    {
        if (node == nullptr)
        {
            return;
        }
        if (level == 0)
        {
            cout << node->data << " ";
            return;
        }

        if (itr == true)
        {
            spiralLevelOrder(node->left, level - 1, itr);
            spiralLevelOrder(node->right, level - 1, itr);
        }
        else
        {
            spiralLevelOrder(node->right, level - 1, itr);
            spiralLevelOrder(node->left, level - 1, itr);
        }
    }

    void SpiralLOT()
    {
        bool itr = false;
        for (int i = 0; i < height(root); i++)
        {
            spiralLevelOrder(root, i, itr);
            itr = !itr;
        }
    }

    Node *getRoot() const
    {
        return root;
    }
};

int main()
{
    BST t;
    int arr[10] = {7, 4, 2, 5, 3, 1, 9, 12, 45, 14};
    for (int i : arr)
    {
        t.insert(i);
    }

    t.inorder(t.getRoot());
    cout << endl;
    t.preorder(t.getRoot());
    cout << endl;
    t.postorder(t.getRoot());
    cout << endl;
    cout << t.height(t.getRoot());
    cout << endl;
    t.LOT();
    cout << endl;
    t.SpiralLOT();
    cout << endl;
}