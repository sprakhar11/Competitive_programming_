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

class SGTree {
	vector<int> seg;
public:
	SGTree(int n) {
		seg.resize(4 * n + 1);
	}

	void build(int ind, int low, int high, int arr[]) {
		if (low == high) {
			seg[ind] = arr[low];
			return;
		}

		int mid = (low + high) / 2;
		build(2 * ind + 1, low, mid, arr);
		build(2 * ind + 2, mid + 1, high, arr);
		seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);

        // cout << seg << endl;
	}

	int query(int ind, int low, int high, int l, int r, int val) {
		// no overlap
		// l r low high or low high l r
		// if (r < low || high < l) return 0;

		// complete overlap
		// [l low high r]
		// if (low >= l && high <= r) return seg[ind];
		
		if(low == high)
		{
			cout << "hit 0" ;

			if(seg[ind] >= val)
			{
				cout << seg[ind] << " sds  "<< low << endl;
				cout << "hit 1" ;

				// return low + 1;

			}
			else
			{
				cout << seg[ind] << " sds  "<< low << endl;

				cout << " hit 2" ;
				// return -1;

			}
		}

		cout << "hit 4" << endl;


		int mid = (low + high) >> 1;

		cout << low << " " << high << endl;
		cout << mid << endl;

		if(seg[2 * ind + 1] >= val)
		query(2 * ind + 1, low, mid, l, r, val);
		else if(seg[2 * ind + 2] >= val)
		query(2 * ind + 2, mid + 1, high, l, r, val);
		else
		return -1;

	}

	int query_value(int ind, int low, int high, int l, int r, int val) {
		// no overlap
		// l r low high or low high l r
		// if (r < low || high < l) return 0;

		// complete overlap
		// [l low high r]
		// if (low >= l && high <= r) return seg[ind];

		if(low == high)
		{
			if(seg[ind] >= val)
			{
				cout << seg[ind] << " sds  "<< low << endl;

				return seg[ind];

			}
			else
			{
				return -1;

			}
		}

		int mid = (low + high) >> 1;

		if(seg[2 * ind + 1] >= val)
		query(2 * ind + 1, low, mid, l, r, val);
		
		else if(seg[2 * ind + 2] >= val)
		query(2 * ind + 2, mid + 1, high, l, r, val);

	}

	void update(int ind, int low, int high, int i, int val) {
		if (low == high) {
			seg[ind] -= val;
			return;
		}

		int mid = (low + high) >> 1;
		if (i <= mid) update(2 * ind + 1, low, mid, i, val);
		else update(2 * ind + 2, mid + 1, high, i, val);
		seg[ind] =  max(seg[2 * ind + 1], seg[2 * ind + 2]);
	}

    void display(int n)
    {
        n = 4 * n + 1;
        for (int i = 0; i < n; i++)
        {
            cout << seg[i] << " ";
        }
        cout << endl;
        
    }
};

void prakhar() {

        int n ,  m;
        cin >> n >>m;
        if(n == 3 && m == 3)
        cout << "2 2"<<endl;
        else
        {
            int p = n/2 + 1;
            int q = m/2 + 1;
            cout << p << " " << q << endl;

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
    cin >> t ;
    for (int i = 0; i < t; i++) {
        prakhar();
    }
    
    return 0;
    
}