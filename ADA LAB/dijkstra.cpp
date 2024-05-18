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

// Function to find the shortest paths from a single source using Dijkstra's algorithm
vector<int> dijkstra(const vector<vector<Edge>> &graph, int source)
{
    int n = graph.size();
    vector<int> dist(n, INF);
    vector<bool> visited(n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        for (const Edge &edge : graph[u])
        {
            int v = edge.to;
            int weight = edge.weight;

            if (!visited[v] && dist[u] != INF && dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main()
{
    vector<vector<Edge>> graph = {
        {Edge(1, 4), Edge(2, 1)},
        {Edge(2, 2), Edge(3, 5)},
        {Edge(3, 2), Edge(4, 1)},
        {Edge(4, 3)},
        {}};

    int source = 0;
    vector<int> shortest_paths = dijkstra(graph, source);

    cout << "Shortest paths from source " << source << ":" << endl;
    for (int i = 0; i < shortest_paths.size(); ++i)
    {
        cout << "Vertex " << i << ": ";
        if (shortest_paths[i] == INF)
        {
            cout << "No path";
        }
        else
        {
            cout << shortest_paths[i];
        }
        cout << endl;
    }

    return 0;
}
