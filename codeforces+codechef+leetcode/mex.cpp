

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int mex(vector<int> arr, int x)
{
	
    int K = x;
    int n = arr.size();

	unordered_map<int, int> mp;

	for (int i = 0; i < n; i++) {
		mp[arr[i] % K]++;
	}

	for (int i = 0; i < n; i++) {

		
		if (mp.find(i % K) == mp.end()) {
			return i;
		}

		
		mp[i % K]--;
		if (mp[i % K] == 0)
			mp.erase(i % K);
	}

	return n;
}

// Driver code
int main()
{
	vector<int> v;

    int n ;
    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    int x ;
    cin >> x;
	cout << mex(v, x) << endl;
	return 0;
}