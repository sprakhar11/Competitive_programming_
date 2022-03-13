#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
//prakhar_0007
int  kr , kc , r1r , r1c , r2r , r2c;
bool cornerkr1()
{
    if (kr == 1)
        {
            if (r1c+1 == kc || r1c - 1 == kc || r2c + 1 == kc || r2c - 1 == kc || r1c==r2c)
            {
                return false;
            }
            if ( r1r == 2 || r2r == 2 )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
}
bool cornerkc1()
{
    if (kc == 1)
        {
            //cout << r1r << endl;
            if (r1r+1 == kr || r1r - 1 == kr || r2r + 1 == kr || r2r - 1 == kr || r1r == r2r)
            {
                return false;
            }
            if ( r1c == 2 || r2c == 2 )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
}
bool cornerkr8()
{
    if (kr == 8)
        {
            if (r1c+1 == kc || r1c - 1 == kc || r2c + 1 == kc || r2c - 1 == kc  || r1c==r2c)
            {
                return false;
            }
            if ( r1r == 7 || r2r == 7 )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
}
bool cornerkc8()
{
    if (kc == 8)
        {
            if (r1r+1 == kr || r1r - 1 == kr || r2r + 1 == kr || r2r - 1 == kr || r1r == r2r)
            {
                return false;
            }
            if ( r1c == 7 || r2c == 7 )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
}
void solve()
{
    //int  kr , kc , r1r , r1c , r2r , r2c;
    cin >> kr >> kc >> r1r >> r1c >> r2r >> r2c;
    if( kr ==  1 || kr == 8 || kc == 1 || kc == 8)
    {
        if ( kr == 1 && kc == 1 )
        {
            //cout << cornerkr1() << " " << cornerkc1() << endl;
            if ( cornerkr1() || cornerkc1() )
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            return;
        }
        if ( kr == 8 && kc == 1)
        {
            if ( cornerkc1() || cornerkr8() )
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            return;
        }
        if ( kr == 8 && kc == 8)
        {
            if ( cornerkr8() || cornerkc8())
            {
                cout << "YES\n";
            }
            else
            cout << "NO\n";

            return;
        }
        if ( kr == 1 && kc == 8)
        {
            if ( cornerkr1() || cornerkc8())
            cout << "YES\n";
            else
            cout << "NO\n";

            return;
        }
        if (kr == 1)
        {
            if (r1c+1 == kc || r1c - 1 == kc || r2c + 1 == kc || r2c - 1 == kc || r1c==r2c)
            {
                cout << "NO\n";
                return;
            }
            if ( r1r == 2 || r2r == 2 )
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            return;
        }
        if (kc == 1)
        {
            if (r1r+1 == kr || r1r - 1 == kr || r2r + 1 == kr || r2r - 1 == kr || r1r == r2r)
            {
                cout << "NO\n";
                return;
            }
            if ( r1c == 2 || r2c == 2 )
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            return;
        }
        if (kr == 8)
        {
            if (r1c+1 == kc || r1c - 1 == kc || r2c + 1 == kc || r2c - 1 == kc || r1c==r2c)
            {
                cout << "NO\n";
                return;
            }
            if ( r1r == 7 || r2r == 7 )
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            return;
        }
        if (kc == 8)
        {
            if (r1r+1 == kr || r1r - 1 == kr || r2r + 1 == kr || r2r - 1 == kr || r1r == r2r )
            {
                cout << "NO\n";
                return;
            }
            if ( r1c == 7 || r2c == 7 )
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            return;
        }
        
    }
    else
    {
        cout << "NO\n";
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
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
