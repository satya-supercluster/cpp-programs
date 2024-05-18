#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DSU
{
private:
    vector<int> parent;
    vector<int> rank;

public:
    DSU(int n)
    {
        parent.resize(n);
        rank.resize(n);
        for (int i = 0; i < n; ++i)
        {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int find(int u)
    {
        if (parent[u] != u)
        {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    void unionSet(int u, int v)
    {
        int pu = find(u);
        int pv = find(v);
        if (pu == pv)
            return;
        if (rank[pu] > rank[pv])
        {
            parent[pv] = pu;
        }
        else if (rank[pu] < rank[pv])
        {
            parent[pu] = pv;
        }
        else
        {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};

struct Edge
{
    int u, v, weight;
    Edge(int _u, int _v, int _weight) : u(_u), v(_v), weight(_weight) {}
};

bool compareEdges(const Edge &a, const Edge &b)
{
    return a.weight < b.weight;
}

vector<Edge> kruskal(vector<vector<int>> &graph)
{
    int n = graph.size();
    DSU dsu(n);
    vector<Edge> edges;
    for (int u = 0; u < n; ++u)
    {
        for (int v = u + 1; v < n; ++v)
        {
            if (graph[u][v] != 0)
            {
                edges.emplace_back(u, v, graph[u][v]);
            }
        }
    }
    sort(edges.begin(), edges.end(), compareEdges);

    vector<Edge> mst;
    for (const Edge &edge : edges)
    {
        if (dsu.find(edge.u) != dsu.find(edge.v))
        {
            mst.push_back(edge);
            dsu.unionSet(edge.u, edge.v);
        }
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
        {7, 0, 4, 3, 0}};

    vector<Edge> mst = kruskal(graph);
    cout << "Minimum Spanning Tree:" << endl;
    for (const Edge &edge : mst)
    {
        cout << edge.u +1<< " - " << edge.v+1 << ": " << edge.weight << endl;
    }

    return 0;
}
