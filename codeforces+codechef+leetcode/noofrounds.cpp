#include <bits/stdc++.h>
using namespace std;


int main() {
    
   
    

        int cnt = 1;
        int n = 0 ;
        cin >> n;
        vector<int> v ;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x ;
            v.push_back(x);
        }

        int k = 1 ;
        int i = 0;
        while ( k <= n)
        {
            
            if ( v[i] == k)
            {
                k++;

            }
            i++;
            if ( i == n )
            {
                i = 0;
                cnt++;
            }
        }
        cout << cnt << endl;
        
    
    
    return 0;
    
}
