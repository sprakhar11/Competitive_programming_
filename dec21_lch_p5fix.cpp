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
    lli n ; 
    cin >> n ;
    string s ;
    cin >> s ;
    vector<char> v(n,' ') ;
    lli j = n - 3;
    v[n-1]= s[n-1];
    if ( n == 1 )
    {
        cout << s << " " << "\n";
        return;
    }
    v[n-2] = fight(s[n-1] , s[n-2]);
    if(n == 2)
    {
        cout << v[0]<< " " << v[1]<< " " << "\n";
        return;
    }
    v[n-3] = fight(fight(s[n-3] , s[n-2]), s[n-1]);
    if ( n == 3)
    {
        cout << v[0] << " " << v[1]<< " " << v[2]<< " " << "\n";
        return;
    }
    char win ;
    int f = n -1;
    char f1 = s[j];
    int f2 = 0;
    //cout <<"hi"<<"\n";
    for (lli i = 3; i < n; i++)
    {   
        cout << "f1 = " << f1 << " s[j+1] =" << s[j+1] << " j = " << j << "\n";
        
        if (f1 != s[j+1])
        {
            f = j + 1 ;
            f1 = s[j];
            f2 = 1 ;
        }
        int tmp = f;
        if(f2 == 1){
            f2 = 0;
            f = j ;
        }
        cout << " f = " << f << " " << f1 << " " << f2 << endl;
        cout << "fight =  " << j << s[j] << " " << s[j-1] << "\n";
        win = fight( s[j],  s[j-1]);
        if(s[i] ==  s[j-1])
        {
            v[j-1] = v[j];
        }
        else if (win == s[j])
        {
            v[j-1] =  v[j];
            cout << v[j] << "\n";
        }
        else if ( win == s[f+1])
        {
            v[j-1] = v[f+1];
            cout << v[f+1] << "\n";
        }
        else if( fight(s[f+1] , win) == s[f+1])
        {
            v[j-1] = v[f+1];
            cout << v[f+1] << "\n";
        }
        else
        {
            cout << win << f << j<< "\n";
            cout << "this is else " << "\n";
        }
        
        j--;
        f = tmp;
        
        

    }
    for(int i = 0 ; i < n ; i++)
    {
        cout << v[i] << " ";
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
