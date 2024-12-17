// Ls 46.2 Graph Operations

#include <iostream>
#include <limits.h>
#include <queue>
using namespace std;

class Node
{
private:
    int vertex;
    int weight;
    Node *next;

public:
    Node() : vertex(0), weight(INT_MAX), next(nullptr) {}
    Node(int vertex, int weight) : vertex(vertex), weight(weight), next(nullptr) {}
    Node(int vertex, int weight, Node *next) : vertex(vertex), weight(weight), next(next) {}
    friend class Graph;
};

class Graph
{
private:
    Node **adj;
    int nodes;
    bool direction;

public:
    Graph(int nodes = 0, bool direction = 0) : nodes(nodes), direction(direction)
    {

        for (int i = 0; i < nodes; i++)
        {
            adj[i] = NULL;
        }
    }

    void addEdge(int u, int v, int weight = 1)
    {

        if (u < 0 || v < 0 || u >= nodes || v >= nodes)
        {
            cout << "You Entered : " << u << " -> " << v << endl;
            cout << "Invalid Edge" << endl;
            return;
        }
        if (direction)
        {
            push_back(u, v, weight);
        }
        else
        {
            push_back(u, v, weight);
            push_back(v, u, weight);
        }
    }

    void push_back(int u, int v, int weight)
    {
        if (adj[u] == NULL)
        {
            adj[u] = new Node(v, weight);
            return;
        }

        Node *newNode = new Node(v, weight);
        newNode->next = adj[u];
        adj[u] = newNode;
    }

    void print()
    {
        cout << "Printing the adjacency list of the graph" << endl;
        cout << "Vertices: " << endl;
        for (int i = 0; i < nodes; i++)
        {
            cout << i << " -> ";
            Node *curr = adj[i];
            while (curr != NULL)
            {
                cout << curr->vertex << " ";
                curr = curr->next;
            }
            cout << endl;
        }
    }

    void hasCycle()
    {
        bool *visited = new bool[nodes];
        int *parent = new int[nodes];
        for (int i = 0; i < nodes; i++)
        {
            visited[i] = false;
            parent[i] = 0;
        }

        for (int i = 0; i < nodes; i++)
        {
            if (visited[i] == false)
            {
                bool ans = isCycleBFS(i, visited, parent);
                if (ans)
                {
                    cout << "Contains Cycle" << endl;
                    return;
                }
            }
        }

        cout << "Does not contain Cycle" << endl;
    }

    bool isCycleBFS(int vertex, bool *visited, int *parent)
    {
        parent[vertex] = -1;
        queue<int> q;
        q.push(vertex);
        visited[vertex] = true;

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            Node *ptr = adj[curr];
            while (ptr)
            {
                if (visited[ptr->vertex] == false)
                {
                    q.push(ptr->vertex);
                    visited[ptr->vertex] = true;
                    parent[ptr->vertex] = curr;
                }
                else if ((visited[ptr->vertex] == true) && (ptr->vertex != parent[curr]))
                {
                    return true;
                }
                ptr = ptr->next;
            }
        }

        return false;
    }
};

int main()
{
    // https://www.javatpoint.com/bfs-vs-dfs
    //  Graph G(7,0);
    //  G.addEdge(0,1);
    //  G.addEdge(0,3);
    //  G.addEdge(1,3);
    //  G.addEdge(1,2);
    //  G.addEdge(2,3);
    //  G.addEdge(1,5);
    //  G.addEdge(2,5);
    //  G.addEdge(1,6);
    //  G.addEdge(6,4);
    //  G.addEdge(4,2);
    //  G.addEdge(4,3);
    //  G.print();
    Graph g(4, 0);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    g.print();
    g.hasCycle();
}