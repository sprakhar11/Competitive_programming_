#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
int MaxGCD(vector<int> a, int n)
{
    int Prefix[n + 2];
    int Suffix[n + 2];
 
    
 
    Prefix[1] = a[0];
    for (int i = 2; i <= n; i += 1) {
        Prefix[i] = __gcd(Prefix[i - 1], a[i - 1]);
    }

    Suffix[n] = a[n - 1];
 
    for (int i = n - 1; i >= 1; i -= 1) {
        Suffix[i] = __gcd(Suffix[i + 1], a[i - 1]);
    }

    int ans = max(Suffix[2], Prefix[n - 1]);
 
    for (int i = 2; i < n; i += 1) {
        ans = max(ans, __gcd(Prefix[i - 1], Suffix[i + 1]));
    }
 
    return ans;
}
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
        
        int n ; 
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
        }
        sort ( v.begin(), v.end());

        //int k = MaxGCD(v , n);
        lli sum = 0;
        sum = accumulate(v.begin(), v.end(), sum);
        lli ans = 0;
       
        int d =MaxGCD(v,n);
        //cout << d << "d\n" ; 
        lli p = (sum - v[0] +d ) / d;
        //cout << p << "p\n";
        for (int i = 1; i < n; i++)
        {
            if ((sum - v[i] + d ) % d ==0)
            {
                ans = (sum - v[i] + d ) / d;
                p = min(p, ans);
                //cout << p << endl;
            }

        }
        cout << p << endl;
        
        

    }
    return 0;
    
}
