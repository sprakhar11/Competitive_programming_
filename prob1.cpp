# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
# define int ll
# define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define len(x) (ll((x).size()))

# define print(x) cout<<(x)<<"\n"
# define P0(x) cout<<(x)<<' '
# define P1(x) cout<<(x)<<"\n"
# define P2(x,y) cout<<(x)<<' '<<(y)<<"\n"
# define P3(x,y,z) cout<<(x)<<' '<<(y)<<' '<<(z)<<"\n"
# define P4(x,y,z,w) cout<<(x)<<' '<<(y)<<' '<<(z)<<' '<<(w)<<"\n"

// using auto in for
# define printv(v) {auto kjhg = v;for(auto idnphq : kjhg) cout<< idnphq << ' ';cout << "\n";}
# define printvv(v) {auto kjhg = v;for(auto idnphq : kjhg) {for(auto plinrw : idnphq) cout<< plinrw << ' ';cout << "\n";}}
# define prints(s) {auto kjhg = s;for(auto idnphq : kjhg) cout<< idnphq << ' ';cout << "\n";}
# define printm(m) {auto kjhg = m;for(auto idnphq : kjhg) cout<< idnphq.first << ':' << idnphq.second << ' ';cout << "\n";}

// for runtime errors (assertions and segmentation faults)
# define debug(x) {\
    cout<<"all good "<<x<<"\n";\
    exit(0);\
}
void vectorinput( vector<lli> &v , lli n )
{
    for (lli i = 0; i < n; i++)
        {
            lli x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void solve()
{
    int n ;
    cin >> n;
    n++;
    int p = 0;lli k = 0;
    for (int i = 1; i < n; i++)
    {
        p =0;
        for (int j = 1; j < n; j++)
        {
            int c =  j % i ;
            if ( c > 0  && j % c == 0)
            {
                p++;k++;
                if ( j * 2 == i)
                break;
                 if ( p == 1)
                 cout << j << " => " << " " ;
                // else 
                // cout << j << " " ;

            }
        }
        cout << "count = "<< p << " till now =" << k;
        cout << endl;
        
    }
    
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
    //cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
