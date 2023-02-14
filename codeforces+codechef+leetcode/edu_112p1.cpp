#include <bits/stdc++.h>
#define lli long long 
#define int long long 

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;
lli gcd(lli a, lli b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
lli mult(lli x, lli y) {lli res = x * y;return (res >= MOD ? res % MOD : res);}
lli factorial(lli v){lli ans=1;for(int i=2;i<=v;i++){ans*=i;ans%=MOD;}return ans;}
lli power(lli x, lli y){   if (y < 0)return 1;lli res = 1; x %= MOD;while (y!=0) {if ((y & 1)==1)res = mult(res, x); y >>= 1;x = mult(x, x);} return res;}
void vectorinput( vector<int> &v , int n ){for (int i = 0; i < n; i++){int x ;cin >> x;v.push_back(x);}}
void printvec(vector<int> &v){for (int i = 0; i < v.size(); i++){cout << v[i] << " " ;}cout << endl;}

void prakhar()
{
    int w , h ; 
    cin >> w >> h  ;
    int x,  y , a , b ;
    cin >> x >> y >> a >> b;
    int p , q ;
    cin >> p >> q ;
    int tw = a - x ;
    int th = b - y ;

    int fmw[4];
    int fmh[4];
    fmw[0] = x;
    fmh[0] = y ;
    fmw[1] = x ;
    fmh[1] = h - b ;
    fmw[2] = w - a ;
    fmh[2] = h - b ;
    fmw[3] = w- a ;
    fmh[3] = y;

    int mxa[4];
    for (int i = 0; i < 4; i++)
    {
        mxa[i]= fmh[i] * fmw[i];
    }
    int pos = 0 ;
    int mx = mxa[0];
    for (int j = 0; j < 4; j++)
    {
        if(mxa[j] > mx )
        {
            mx = mxa[j];
            pos = j;
        }
    }
    int r = 0 ;
    int s = 0 ;
    
    
    

    int f = 1 ;


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
