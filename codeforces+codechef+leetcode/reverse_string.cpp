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
bool check2(string s , string t , int i , int p)
{
    // cout << "hello" << i << " " << p << endl;
    
    for (int k = i-2; k>= 0; k--)
    {
        if(p == t.length())
        return true;
        if(s[k] == t[p]){
            p++;
            // cout << "right " << s[k] << p <<endl;
        }
        else 
        {
            return false;
        }
    }
    if(p==t.length())
    return true;
    return false;
    
}
bool check1(string s ,string t ,int i){
    int p = 0 ;
    int j = 0;
    for ( j = i; j < s.length(); j++)
    {
        if( p == t.length()){
            return true;
        }
        if(s[j] == t[p])
        {
            if(s[j-2] == t[p] && (j >=2) && check2(s , t , j , p))
            {
                return true;
            }
            p++;
            // cout << "left " << s[j] << " "<< j << endl;

        }
        else
        {
            break; 
        }
    }
    if(p==t.length())
    {
        return true;
    }
    for (int k = j-2; k>= 0; k--)
    {
        if(p == t.length())
        return true;
        if(s[k] == t[p]){
            p++;
            // cout << "right " << s[k] << p <<endl;
        }
        else 
        {
            return false;
        }
    }
    if(p==t.length())
    return true;
    return false;
    
    
    
}
void prakhar()
{
    string s = "";
    string t = "";
    cin >> s >> t ;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == t[0] && check1(s , t , i))
        {
            cout << "YES\n";
            return;
        }

    }
    cout << "NO\n";
    
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
        prakhar();
    }
    
    return 0;
    
}
