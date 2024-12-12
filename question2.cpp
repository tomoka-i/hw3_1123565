//Tomoka 1123565
//20241212

#include <iostream>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;
s
vector<int> bfsTraversal(int V, vector<vector<int>>& adj) {
    vector<int> bfsResult;
    vector<bool> visited(V, false);
    queue<int> q;

    visited[0] = true;
    q.push(0);

    while (!q.empty()) {
        int current = q.front(); q.pop();
        bfsResult.push_back(current);

        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return bfsResult;
}

int main() {

    int node;
    cout << "Enter the number of nodes: ";
    cin >> node;

    vector<vector<int>> vec(node);

    string adj;
    cout << "Enter the adjacency list (the input is split based on newline characters): " << endl;
    for(int i = 0; i < node; i++){
        cin.ignore();
        getline(cin, adj);
        int digit;
        istringstream iss(adj);
        while (iss >> digit) {
            vec[i].push_back(digit);
        }
    }

    cout << endl;
    for (int v : bfsTraversal(vec.size(), vec)) {
        cout << v << " ";
    }

    return 0;
}
