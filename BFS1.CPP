
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) : V(V), adj(V) {}

    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    void BFS(int start) {
        unordered_set<int> visited;

        queue<int> q;

        q.push(start);
        visited.insert(start);

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";


            for (int neighbor : adj[current]) {

                if (visited.find(neighbor) == visited.end()) {
                    q.push(neighbor);
                    visited.insert(neighbor);
                }
            }
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);

    cout << "BFS starting from vertex 0: ";
    g.BFS(0);

    return 0;
}
