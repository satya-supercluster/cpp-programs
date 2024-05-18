#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Structure to represent a weighted edge
struct Edge
{
    int to;
    int weight;
    Edge(int _to, int _weight) : to(_to), weight(_weight) {}
};

// Function to find the Minimum Spanning Tree (MST) using Prim's algorithm
vector<vector<Edge>> prim(const vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<vector<Edge>> mst(n);
    vector<bool> visited(n, false);
    vector<int> minWeight(n, INF);
    vector<int> parent(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Start with vertex 0
    pq.push({0, 0});
    minWeight[0] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        // Iterate over adjacent vertices of u
        for (int v = 0; v < n; ++v)
        {
            if (graph[u][v] != 0 && !visited[v] && graph[u][v] < minWeight[v])
            {
                minWeight[v] = graph[u][v];
                parent[v] = u;
                pq.push({minWeight[v], v});
            }
        }
    }

    // Construct MST
    for (int v = 1; v < n; ++v)
    {
        mst[v].emplace_back(parent[v], minWeight[v]);
        mst[parent[v]].emplace_back(v, minWeight[v]);
    }

    return mst;
}

int main()
{
    vector<vector<int>> graph = {
        {0, 1, 6, 8, 7},
        {1, 0, 5, 2, 0},
        {6, 5, 0, 9, 4},
        {8, 2, 9, 0, 3},
        {7, 0, 4, 3, 0}
    };

    vector<vector<Edge>> mst = prim(graph);
    cout << "Minimum Spanning Tree:" << endl;
    for (int u = 0; u < mst.size(); ++u)
    {
        for (const Edge &edge : mst[u])
        {
            if (u < edge.to)
            { // Ensure each edge is printed once
                cout << u << " - " << edge.to << ": " << edge.weight << endl;
            }
        }
    }

    return 0;
}
