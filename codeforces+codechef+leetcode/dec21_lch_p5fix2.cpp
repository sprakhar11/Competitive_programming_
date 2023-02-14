 #include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
//prakhar_0007
char  fight(char a, char b)
{
        if((a == 'P' && b== 'R') || (a == 'R' && b== 'P')  )
        {
            return 'P';
        }
        if((a == 'S' && b== 'R') || (a == 'R' && b== 'S')  )
        {
            return 'R';
        }
        if((a == 'P' && b== 'S') || (a == 'S' && b== 'P')  )
        {
            return 'S';
        }
        return a;
}
void solve()
{
    int n ; 
    cin >> n ;
    string s ;
    cin >> s ;
    vector<char> v(n,' ') ;
    
    v[n-1]= s[n-1];
    if ( n == 1 )
    {
        cout << s << "\n";
        return;
    }
    v[n-2] = fight(s[n-1] , s[n-2]);
    if(n == 2)
    {
        cout << v[0] << v[1]<<  "\n";
        return;
    }
    v[n-3] = fight(fight(s[n-3] , s[n-2]), s[n-1]);
    if ( n == 3)
    {
        cout << v[0] << v[1]<< v[2]<<  "\n";
        return;
    }
    
    int f = n-1;
    int  k = n -2 ;
    for (int i = 0; i < 1; i++)
    {
        if(s[k] != s[f])
        {
            f = k ;
            
        }
        k--;
    }
    char win ;
    int j = n - 4 ;
    for (int i = 0; i < n- 3; i++)
    {
        win = fight(s[j], s[j+1]);

        if(s[k] != s[f])
        {
            f = k ;
            
        }
        k--;
        // cout << " k= " << k << " j= " << j << " f= " << f<< "\n"; 
        // cout << "fight s[j]  s[j+1] = " << s[j] << " " << s[j+1] << "\n";
        // cout << "win = " << win  << "\n";
        if (f == n-1)
        {
            v[j] = win ;
            j--;
            continue;
        }
 
        if((s[j] == s[j+1]) )
        {
            v[j] = v[j+1];
            
        }
        else if ( win == s[j+1])
        {
            v[j] = v[j+1];
            
        }
        else if ( win == s[f+1])
        {
            v[j] = v[f+1];
            
        }
        else if ( fight(win , s[f+1]) == s[f+1])
        {
            v[j] = v[f+1];
            
        }
        else
        {
            cout << "This is else" << "\n";
        }
        j--;
        // cout << "**v[j] = " << v[j] << "\n";

    }
    
    

    for(int i = 0 ; i < n ; i++) //print the answer
    {
        cout << v[i] << "";
    }
    cout << "\n";
    
}

int main() {
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
