// Ls 45.1 Trees

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
private:
    int data;
    Node *left;
    Node *right;

public:
    Node(int data = 0) : data(data), left(NULL), right(NULL) {}
    friend class Tree;
};

class Tree
{
public:
    Node *buildTree(Node *root)
    {
        cout << "Enter Data : ";
        int data;
        cin >> data;
        root = new Node(data);
        if (data == -1)
            return NULL;
        cout << "\nEnter data to be inserted left of " << data << endl;
        root->left = buildTree(root->left);
        cout << "Enter data to be inserted right of " << data << endl;
        root->right = buildTree(root->right);
        return root;
    }

    void levelOrderTraversal(Node *root)
    {
        cout << "\nPrinting Level Order Traversal : ";
        if (!root)
            return;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            cout << q.front()->data << " ";

            if (q.front()->left)
            {
                q.push(q.front()->left);
            }
            if (q.front()->right)
            {
                q.push(q.front()->right);
            }
            q.pop();
        }
        cout << endl;
    }

    void displayTree(Node *root)
    {
        if (!root)
            return;
        cout << "\nDisplaying Tree: " << endl;
        queue<Node *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            Node *curr = q.front();
            q.pop();

            if (curr)
            {
                cout << curr->data << ' ';
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            else
            {
                cout << endl;
                if (!q.empty())
                    q.push(NULL);
            }
        }
    }

    void reverseLevelOrderTraversal(Node *root)
    {
        cout << "\nPrinting Reverse Level Order Travsersal" << endl;
        if (!root)
            return;
        stack<Node *> st;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *curr = q.front();
            st.push(q.front());
            q.pop();
            if (curr->right)
                q.push(curr->right);
            if (curr->left)
                q.push(curr->left);
        }

        while (!st.empty())
        {
            cout << st.top()->data << " ";
            st.pop();
        }

        cout << endl;
    }

    void displayReverseTree(Node *root)
    {
        cout << "\nPrinting Reverse Tree" << endl;
        if (!root)
            return;
        stack<Node *> st;
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            Node *curr = q.front();
            st.push(q.front());
            q.pop();
            if (curr)
            {
                if (curr->right)
                    q.push(curr->right);
                if (curr->left)
                    q.push(curr->left);
            }
            else
            {
                if (!q.empty())
                    q.push(NULL);
            }
        }

        while (!st.empty())
        {
            if (st.top())
                cout << st.top()->data << " ";
            else
                cout << endl;
            st.pop();
        }

        cout << endl;
    }
};

int main()
{
    Node *root = NULL;
    Tree t;
    root = t.buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    // t.levelOrderTraversal(root);
    // t.displayTree(root);
    t.reverseLevelOrderTraversal(root);
    t.displayReverseTree(root);
}