#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
    vector<int> rank, parent, size, mx, mn;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        mx.resize(n + 1);
        mn.resize(n + 1);

        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
            mn[i] = i;
            mx[i] = i;
        }
    }

    int findUPar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }
    int findmin(int node)
    {
        return mn[findUPar(node)];
    }
    int findmax(int node)
    {
        return mx[findUPar(node)];
    }
    int findsize(int node)
    {
        return size[findUPar(node)];
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if (ulp_u == ulp_v)
            return;

        if (size[ulp_u] < size[ulp_v])
        {
            // cout << ulp_u << " " << ulp_v << endl;
            // cout << mn[ulp_u] << " " << mx[ulp_u] << endl;
            // cout << mn[ulp_v] << " " << mx[ulp_v] << endl;

            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
            mn[ulp_v] = min(mn[ulp_v], mn[ulp_u]);
            mx[ulp_v] = max(mx[ulp_v], mx[ulp_u]);
        }
        else
        {
            // cout << ulp_u << " " << ulp_v << endl;
            // cout << mn[ulp_u] << " " << mx[ulp_u] << endl;
            // cout << mn[ulp_v] << " " << mx[ulp_v] << endl;
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
            mn[ulp_u] = min(mn[ulp_v], mn[ulp_u]);
            mx[ulp_u] = max(mx[ulp_v], mx[ulp_u]);
        }
    }
};
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    int n, q;
    cin >> n >> q;

    DisjointSet ds(n);

    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;

        if (s == "union")
        {
            int u, v;
            cin >> u >> v;
            ds.unionBySize(u, v);
        }
        else
        {
            int u;
            cin >> u;
            cout << ds.findmin(u) << " " << ds.findmax(u) << " " << ds.findsize(u) << endl;
        }
    }

    return 0;
}