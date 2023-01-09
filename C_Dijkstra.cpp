#include <bits/stdc++.h>
using namespace std;

int NO_PARENT = -1;
void printPath(int currentVertex, vector<int> parents)
{

	if (currentVertex == NO_PARENT) {
		return;
	}
    cout << "Hit 2";

	printPath(parents[currentVertex], parents);
	cout << currentVertex + 1 << " ";
}
void printSolution(int startVertex, vector<int> distances,
				vector<int> parents)
{
	int nVertices = distances.size();
    cout << "Hit 1";
    printPath(nVertices - 1, parents);
}


void dijkstra(vector<vector<int> > adjacencyMatrix,
			int startVertex)
{
    cout << " sdfsdd2323f";

	int nVertices = adjacencyMatrix[0].size();

	vector<int> shortestDistances(nVertices);
	vector<bool> added(nVertices);
	for (int vertexIndex = 0; vertexIndex < nVertices;
		vertexIndex++) {
		shortestDistances[vertexIndex] = INT_MAX;
		added[vertexIndex] = false;
	}
	shortestDistances[startVertex] = 0;

	vector<int> parents(nVertices);

	parents[startVertex] = NO_PARENT;

	for (int i = 1; i < nVertices; i++) {

		int nearestVertex = -1;
		int shortestDistance = INT_MAX;
		for (int vertexIndex = 0; vertexIndex < nVertices;
			vertexIndex++) {
			if (!added[vertexIndex]
				&& shortestDistances[vertexIndex]
					< shortestDistance) {
				nearestVertex = vertexIndex;
				shortestDistance
					= shortestDistances[vertexIndex];
			}
		}

		added[nearestVertex] = true;

		for (int vertexIndex = 0; vertexIndex < nVertices;
			vertexIndex++) {
			int edgeDistance
				= adjacencyMatrix[nearestVertex]
								[vertexIndex];

			if (edgeDistance > 0
				&& ((shortestDistance + edgeDistance)
					< shortestDistances[vertexIndex])) {
				parents[vertexIndex] = nearestVertex;
				shortestDistances[vertexIndex]
					= shortestDistance + edgeDistance;
			}
		}
	}
    cout << " sdfsdf";
	printSolution(startVertex, shortestDistances, parents);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    int V, e;
    cin >> V >> e;
    // cout << " sdfsdf";

    
	vector<vector<int>> adjacencyMatrix(V, vector<int>(V, 0));

    for (int i = 0; i < e; i++)
    {
        int u , v , w ;
        cin >> u >> v >> w;
        u--;
        v--;

    	adjacencyMatrix[u][v] = w;
    	adjacencyMatrix[v][u] = w;
        cout << " sdfsdf";




    }

    for(auto it:adjacencyMatrix)
    cout << " sdfsdf";

	dijkstra(adjacencyMatrix, 0);
    cout << " sdfsdf";

	return 0;
}
