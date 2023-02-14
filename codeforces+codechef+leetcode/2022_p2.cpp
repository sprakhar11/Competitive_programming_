#include <bits/stdc++.h>
#define lli long long 
#define int long long 
#define all(x) x.begin(), x.end()

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
    int n ;
    cin >> n ;
    vector<pair<pair<int,int>,pair<int,int>>> v;
    // vector<pair<pair<int,int>,pair<int,int>>> q;
    for (int i = 0; i < n; i++)
    {
        int l , r , c ;
        cin >> l >> r >> c ;
        v.push_back(make_pair(make_pair(l,r),make_pair(c,i)));
    }

    vector<pair<int,int>> p(n);
    vector<pair<int,int>> p2(n);
    vector<int> cst(n);
    vector<int> cst1(n);
    cst[0] =(v[0].second.first);
    // cout << v[0].first.first;
    p[0] = make_pair(v[0].first.first , v[0].first.second);
    for (int i = 1; i < n; i++)
    {
        if(p[i-1].first >= v[i].first.first)
        {
            p[i] ={v[i].first.first , v[i].first.second} ;
                if(p[i-1].first == v[i].first.first)
                {
                    if(cst[i-1] < v[i].second.first;)
                    {
                        cst[i] = cst[i-1];
                    }
                    

                }
                else
                {
                    cst[i] = v[i].second.first;
                }
            
        
        }
        else
        {
            p[i]= p[i-1];
            cst[i] = cst[i-1];
        }
    }
    p2[0] = (make_pair(v[0].first.first , v[0].first.second));
    cst1[0]=(v[0].second.first);
    for (int i = 1; i < n; i++)
    {
        if(p2[i-1].second <= v[i].first.second)
        {
            p2[i] ={v[i].first.first , v[i].first.second} ;
            
                cst1[i] = v[i].second.first;
            
        }
        else
        {
            p2[i]= p2[i-1];
            cst1[i]= cst1[i-1];
        }
    }


    
    // q= v ;
    

        // sort(v.begin(), v.end(), sort2);
        // sort(q.begin(), q.end(), sort1);
        // printvp(v);
        // printvp(q);
        int ans = 0 ;
        // cout << p[0].first;
        
    // cout << "case1" << endl;
    for (int i = 0; i < n; i++)
    {
        
        int ans = 0 ;
        int le = 0 ;
        int le2 = 0 ;
        int ri1 =  0;
        int ri = 0;
        int csr = 0 ;
        int csl = 0 ;
        le = p[i].first ; le2 = p[i].second ;
        ri1 = p2[i].first ; ri = p2[i].second;
        csl = cst[i];
        csr = cst1[i];
        // for (int j = 0; j < n; j++)
        // {
        //     if( v[j].second.second <= i)
        //     {
        //         le = v[j].first.first ;
        //         le2 = v[j].first.second ;
        //         csl = v[j].second.first;
        //         break;
        //     }
        // }
        // for (int k = n-1; k >= 0; k--)
        // {
        //     if( q[k].second.second <= i)
        //     {
        //         ri1 = q[k].first.first ;
        //         ri = q[k].first.second ;

        //         csr = q[k].second.first;
        //         break;
        //     }
        // }
        // cout << le << " " << le2 << " " << csl << " " << i << endl; 
        // cout << ri1 << " " << ri<<" " << csr << " " << i << endl;
        
        

        if(le == ri1 && le2 == ri )
        {
            ans =min( csl,csr);
        }
        else if (le == ri)
        {
            ans = min( csl,csr );
        }
        else if( ri1 == le)
        {
            if(le2 > ri)
            ans = csl;
            else
            ans = csr ;

        }
        else if( ri1 < le)
        {
            if(le2 > ri)
            ans = csr +csl;
            else
            ans = csr;
        }
        else if ( ri1 > le && ri1 < ri )
        {
            if(le2 < ri1)
            ans = csr +csl;
            else if ( le2 < ri && le2 > ri1 )
            {
                ans = csr+csl;
            }
            else 
            ans = csl ;

        }
        else{
            ans = csr +csl;
        }
        // if(ans == 400000000)
        // {
        //     ans = 200000000;
        // }
        cout << ans << "\n";
        // cout << "\n";
    }

    // int n;
    // cin >> n;
 
    // const int A = 1e9 + 1;
    // int minL = A, costL = A;
    // int maxR = 0, costR = A;
    // int maxLen = 0, costLen = A;
    // for (int i = 0; i < n; i++)
    // {
    //     int l, r, c;
    //     cin >> l >> r >> c;
 
    //     if (l < minL)
    //         minL = l, costL = A;
    //     if (l == minL)
    //         costL = min(costL, c);
 
    //     if (maxR < r)
    //         maxR = r, costR = A;
    //     if (maxR == r)
    //         costR = min(costR, c);
 
    //     if (maxLen < r - l + 1)
    //         maxLen = r - l + 1, costLen = A;
    //     if (maxLen == r - l + 1)
    //         costLen = min(costLen, c);
 
    //     int ans = costL + costR;
    //     if (maxLen == maxR - minL + 1)
    //         ans = min(ans, costLen);
    //     cout << ans << "\n";
    // }
    
    
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
