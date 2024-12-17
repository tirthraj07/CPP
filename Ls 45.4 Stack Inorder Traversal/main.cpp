// Ls 45.4 Stack Inorder Traversal

#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data = 0) : data(data), left(nullptr), right(nullptr) {}
};

class Tree
{
public:
    void insert(Node *&node, int data)
    {
        node = new Node(data);
    }

    void inorder(Node *root)
    {
        if (root == nullptr)
            return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void IOT(Node *root)
    {
        stack<Node *> st;
        Node *curr = root;
        while (curr != nullptr || !st.empty())
        {
            while (curr != nullptr)
            {
                st.push(curr);
                curr = curr->left;
            }
            cout << st.top()->data << " ";
            curr = st.top()->right;
            st.pop();
        }
    }
};

int main()
{
    Node *n = new Node(7);
    Tree t;
    t.insert(n->left, 4);
    t.insert(n->right, 9);
    t.insert(n->left->left, 2);
    t.insert(n->left->right, 5);
    t.insert(n->left->left->left, 1);
    t.insert(n->left->left->right, 3);
    t.insert(n->right->right, 12);
    t.insert(n->right->right->right, 45);
    t.insert(n->right->right->right->left, 14);
    t.IOT(n);
}