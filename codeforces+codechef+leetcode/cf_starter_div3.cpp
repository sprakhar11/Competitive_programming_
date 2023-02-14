/*
Fragments of tears crumbled down
A breath stopping sensation
resonated through my heart
”Just like glass, with a fix it’ll be back to normal”
Something like that is just a delusion, it’s too late
I’ll run until the light shines down

Even if I’m restrained by the threads of the past
I tried screaming out ”I’m sick off it”
I can’t take it back anymore
I’ll flip it inside out, this heart of mine that’s become faded
I’ll slip through this impassable door of life
I’ll run to the other side of the sky!
*/
#include <bits/stdc++.h>
#define lli long long 
#define int long long 

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;

void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}

void solve()
{
    int n ;
    cin >> n;
    vector<int> v ;
    vectorinput(v , n);
    int pos = 0 ;
    int mx = v[0];
    int f = 0 ;
    for (int i = 0; i < n; i++)
    {
        if ( v[i]  > mx )
        {
            mx = v[i];
            pos = i ;
        }
        if ( v[i] != v[0] )
        {
            f = 1 ;
        }
    }
    if ( f ==  0 )
    {
        
        cout << 0 << "\n";
        return;
    }
    if ( mx == v[n-1] )
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
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
    lli t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
