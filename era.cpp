#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
	int t ;
	cin >> t ;
	
	while(t--)
	{
	    int n = 0 ;
    cin >> n ;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    

    sort(v.begin(), v.end());

    vector<int> di; 

    for (int i = 1; i < n; i++)
    {
        di.push_back(v[i] - v[i-1]);
        // cout << v[i] - v[i-1] << endl;

    }

    int chk = 0 ;
    for (int i = 1; i < n-2; i++)
    {
        if((di[i] == 2 * di[i-1]) || (di[i] * 2 == di[i-1]))
        {
            // chk = 1 ;
            // break;
        }
        else
        {
            chk = 1;
            break;
        }
        // if(v[i] != 2 * v[i-1])
    }

    if( chk == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
	}
	return 0;
}
