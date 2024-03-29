#include <bits/stdc++.h>
using namespace std;
class DisjointSet {
    vector<int> rank, parent, size, mx, mn; 
public: 
    DisjointSet(int n) {
        rank.resize(n+1, 0); 
        parent.resize(n+1);
        size.resize(n+1); 
        mx.resize(n+1); 
        mn.resize(n+1); 

        for(int i = 0;i<=n;i++) {
            parent[i] = i; 
            size[i] = 1; 
            mn[i] = i;
            mx[i] = i;
        }
    }

    int findUPar(int node) {
        if(node == parent[node])
            return node; 
        return parent[node] = findUPar(parent[node]); 
    }
    int findmin(int node){
        return mn[parent[node]];
    }
    int findmax(int node){
        return mx[parent[node]];
    }
    int findsize(int node){
        return size[parent[node]];
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v; 
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u; 
        }
        else {
            parent[ulp_v] = ulp_u; 
            rank[ulp_u]++; 
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        
        if(ulp_u == ulp_v) return; 

        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v; 
            size[ulp_v] += size[ulp_u]; 
            mn[ulp_v] = min(mn[ulp_v], mn[ulp_u]);
            mx[ulp_v] = max(mx[ulp_v], mx[ulp_u]);

        }
        else {

            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
            mn[ulp_u] = min(mn[ulp_v], mn[ulp_u]);
            mx[ulp_u] = max(mx[ulp_v], mx[ulp_u]);
        }
    }
}; 
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    DisjointSet ds(5);
    ds.unionBySize(1, 2); 
    cout << ds.findmin(3) << " " << ds.findmax(3) << " " << ds.findsize(3) << endl;
    cout << ds.findmin(2) << " " << ds.findmax(2) << " " << ds.findsize(2) << endl;

    ds.unionBySize(2, 3); 
    cout << ds.findmin(2) << " " << ds.findmax(2) << " " << ds.findsize(2) << endl;

    ds.unionBySize(1, 3); 
    cout << ds.findmin(5) << " " << ds.findmax(5) << " " << ds.findsize(5) << endl;

    ds.unionBySize(4, 5); 
    cout << ds.findmin(5) << " " << ds.findmax(5) << " " << ds.findsize(5) << endl;


    ds.unionBySize(4, 1);
    cout << ds.findmin(5) << " " << ds.findmax(5) << " " << ds.findsize(5) << endl;



	return 0;
}