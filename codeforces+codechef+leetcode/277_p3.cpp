#include <bits/stdc++.h>
#define lli long long 
#define int long long 

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;
lli mult(lli x, lli y) 
{
    lli res = x * y;
    return (res >= MOD ? res % MOD : res);
}
lli factorial(lli v)
{
    lli ans=1;
    for(int i=2;i<=v;i++)
    {
        ans*=i;
        ans%=MOD;
    }
    return ans;
}
lli power(lli x, lli y)
{   if (y < 0)
    return 1;
    lli res = 1; 
    x %= MOD;
    while (y!=0) 
    {
        if ((y & 1)==1)
        res = mult(res, x); 
        y >>= 1;
        x = mult(x, x);
    } 
    return res;
}
void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
int gsum(int i)
{
    if( i== 0 )
    {
        return 0;
    }
    return (i % 10) +  gsum(i/10) ;
}
void prakhar()
{
    int n , s ;
    cin >> n >> s ;

    if ( s >= 9*n || (s == 0 && n > 1)) 
    cout << "-1 -1";

    else
    {
        string ans = "";
        if(s <= 10)
        {
            ans = ans + "1";
            int k = n - 2 ;
            int ad = s - 1 ;
            string add = to_string(ad);
            while(k--)
            {
                ans = ans + "0";
            }
            ans = ans + add;
            string ansmax = "";

            k = n -1 ;
            if(s < 10)
            ansmax = ansmax + to_string(s);
            else
            ansmax = ansmax + "91";

            if(s==10)
            k--;

            while(k--)
            {
                ansmax = ansmax + "0";
            }

            cout << ans << " " << ansmax ;
        }
        else
        {
            int d = s / 9 ;
            if(n - d == 0 )
            {
                int k  = n ;
                while(k--)
                {
                    ans = ans + "9";
                }
            }
            else
            {
                // cout << "chk1" << "\n";
                d = s / 9;
                int k = s % 9;
                if(k==0)
                {
                    d--;
                }
                while(d--)
                {
                    ans = "9" + ans;
                }
                d = s / 9;
                // cout << << endl;
                if (n - d - 1 == 0)
                ans = to_string(k) + ans ;
                else
                {
                    int ze = n  - d - 3 ;
                    ans = to_string(k-1) + ans;
                    while (ze--)
                    {
                        ans = "0" + ans ;
                    }
                    ans = "1" + ans ;
                    
                }
                // cout << "chk2" << "\n";
                
                
                // ans = ans + "1";
                // string p  = to_string(k-1);
                //add zeros
               
                
                
                 //find max value

                string ansmx = "";
                d = s/9;
                while (d--)
                {
                    ansmx = ansmx + "9";
                }
                int rem = s % 9 ;
                // cout << "chk3" << "\n";
                ansmx = ansmx + to_string(rem);
                int ze = n  - 2 - (s/9);
                if (ze>0)
                while (ze--)
                {
                    ansmx = ansmx + "0";
                }
                cout << ans << " " << ansmx;
                
                

                

                
            }
        }

        
        // cout << ans <<endl;
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
    // cin >> t ;
    for (int i = 0; i < t; i++)
    {
        prakhar();
    }
    
    return 0;
    
}
