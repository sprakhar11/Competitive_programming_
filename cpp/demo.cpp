#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <limits>

using namespace std;

int leastCostPath(int node1, int node2, unordered_map<int, vector<pair<int, int>>> graph) {
    // Create a queue for BFS and add the starting node to it
    queue<int> q;
    q.push(node1);

    // Keep track of visited nodes, the path from the starting node and the cost of the path
    unordered_map<int, bool> visited;
    unordered_map<int, int> path;
    unordered_map<int, int> cost;
    visited[node1] = true;
    path[node1] = -1;
    cost[node1] = 0;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        if (curr == node2) {
            // We have found the destination node, so we can return the least cost path
            int least_cost = cost[curr];
            while (path[curr] != -1) {
                least_cost += graph[path[curr]][getIndex(graph[path[curr]], curr)].second;
                curr = path[curr];
            }
            return least_cost;
        }

        for (auto neighbor : graph[curr]) {
            int node = neighbor.first;
            int weight = neighbor.second;
            if (!visited[node]) {
                visited[node] = true;
                path[node] = curr;
                cost[node] = cost[curr] + weight;
                q.push(node);
            } else if (cost[curr] + weight < cost[node]) {
                cost[node] = cost[curr] + weight;
                path[node] = curr;
            }
        }
    }

    // If we reach here, there is no path from node1 to node2
    return -1;
}

int getIndex(vector<pair<int, int>> v, int node) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first == node) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Create a sample graph
    unordered_map<int, vector<pair<int, int>>> graph;
    graph[1] = {{2, 5}, {3, 3}};
    graph[2] = {{4, 2}};
    graph[3] = {{4, 1}};
    graph[4] = {};

    // Find the least cost path between node 1 and node 4
    int least_cost = leastCostPath(1, 4, graph);

    if (least_cost != -1) {
        cout << "Least cost path: " << least_cost << endl;
    } else {
        cout << "No path found" << endl;
    }

    return 0;
}
