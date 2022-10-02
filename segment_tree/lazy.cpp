#include <bits/stdc++.h>
#define ll long long 
#define int long long 
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define ff first
#define ss second
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define f(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

class ST{
    vector<int> seg, lazy;
public:
    ST(int n){
        seg.resize(4 * n);
        lazy.resize(4 * n);
    }
public:
    void build(int ind, int low, int high, int arr[]){
        if(low == high){
            seg[ind] = arr[low];
            return;
        }
        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1 , high, arr);
        seg[ind] = seg[2* ind + 1] + seg[2* ind + 2];
    }
public:
    void update( int ind, int low, int high, int l, int r, int val){
        if(lazy[ind] != 0){
            seg[ind] += (high - low + 1) * lazy[ind];
            if(low != high){
                lazy[2 * ind + 1] = lazy[ind];
                lazy[2 * ind + 2] = lazy[ind];
            }
            lazy[ind] = 0;
        }
        if(high < l || r < low){
            return;
        }
        if(low >= l && high <= r) {
            seg[ind] += (high - low + 1) * val;
            if(low != high){
                lazy[2 * ind + 1] += val;
                lazy[2 * ind + 2] += val;
            }
            return;
        }
        int mid = ( low + high) >> 1;
        update(2 * ind + 1, low, mid, l, r, val);
        update(2 * ind + 2, mid + 1, high, l , r, val);
        seg[ind] = seg[2* ind + 1] + seg[2* ind + 2];
    }

public:
    int query(int ind, int low, int high, int l, int r){
        if(lazy[ind] != 0){
            seg[ind] += (high - low + 1) * lazy[ind];
            if(low != high){
                lazy[2 * ind + 1] = lazy[ind];
                lazy[2 * ind + 2] = lazy[ind];
            }
            lazy[ind] = 0;
        }
        if(high < l || r < low){
            return 0;
        }
        if(low >= l && high <=r){
            return seg[ind];
        }
        int mid = ( low + high) >> 1;
        int left = query(2 * ind + 1, low, mid, l, r);
        int right = query(2 * ind + 2, mid + 1, high, l , r);
        return left + right;
    }

public:
    void display()
    {
        for(auto it:seg)
        {
            cout << it << " ";
        }
        cout << endl;
    }

};

void prakhar() {

    int n ; 
    cin >> n;
    int q ;
    cin >> q ;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    ST st(n);

    st.build(0, 0, n-1, arr);

    

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;

        if(type == 2)
        {
            int l, r ;
            cin >> l ;
            l--;

            cout << st.query(0, 0, n-1, l, l) << endl;
            // st.display();

        } else {
            int l, r, val;
            cin >> l >> r >> val;
            // st.display();

            st.update(0, 0, n-1, --l, --r, val);
            // st.display();
        }
    }                       
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    ll t = 1 ;
    // cin >> t ;
    for (int i = 0; i < t; i++) {
        prakhar();
    }
    
    return 0;
    
}