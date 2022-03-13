#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t = 1;
    cin >> t;
    while (t--) {
        string s ;

        cin >> s;
        deque<char> de;
        for (int i = 0; i < s.length(); i++)
        {
            de.push_back(s[i]);
        }
        int k  = s.length() -1;
        int  f =0 ;
        while( !de.empty())
        {
            //cout << de.back() << endl;
            if ( k == (de.front() - 'a'))
            {
                de.pop_front();
                //cout << " front "<<endl ; 
            }
            else if ( k == (de.back() - 'a'))
            {
                de.pop_back();
                //cout << "back "<<endl ; 
            }
            else
            {
                f=1;
                break;
            }
            k--;
        }
        if ( f ==0 ){
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    return 0;
    
}
