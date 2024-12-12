//Tomoka 1123565
//20241212

#include <iostream>
#include <vector>
#include <algorithm>
#include  <tuple>

using namespace std;

class Graph {
public:
    int size;
    vector<tuple<int, int, int>> edges;

    Graph(int vertices) {
        size = vertices;
    }

    void addEdge(int u, int v, int weight) {
        edges.push_back({u, v, weight});
    }

    int find(vector<int>& parent, int node) {
        if (parent[node] != node) {
            parent[node] = find(parent, parent[node]);
        }
        return parent[node];
    }

    void unionSets(vector<int>& parent, vector<int>& rank, int x, int y) {
        int rootX = find(parent, x);
        int rootY = find(parent, y);

        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }

    int kruskasAlgorithm() {
        sort(edges.begin(), edges.end(), [](const auto& a, const auto& b) {
            return get<2>(a) < get<2>(b);
        });

        vector<int> parent(size);
        vector<int> rank(size, 0);

        for (int i = 0; i < size; i++) {
            parent[i] = i;
        }

        int minimumCost = 0;
        int edgesInMST = 0;

        for (const auto& edge : edges) {
            int u = get<0>(edge);
            int v = get<1>(edge);
            int weight = get<2>(edge);

            int rootU = find(parent, u);
            int rootV = find(parent, v);

            if (rootU != rootV) {
                minimumCost += weight;
                unionSets(parent, rank, rootU, rootV);
                edgesInMST++;

                if (edgesInMST == size - 1) {
                    break;
                }
            }
        }

        return minimumCost;
    }
};

int main() {
    int vertices, edges;
    cout << "V = ";
    cin >> vertices;
    cout << "E = ";
    cin >> edges;
    Graph graph(vertices);

    cout << "Enter the adjacency list: " << endl;
    int first, second, weight;
    for(int i = 0; i < edges; i++){
      cin >> first >> second >> weight;
      graph.addEdge(first, second, weight);
    }

    cout << endl;

    int mstCost = graph.kruskasAlgorithm();
    cout  << "The sum of the weights of the edges: " << mstCost << endl;

    return 0;
}
