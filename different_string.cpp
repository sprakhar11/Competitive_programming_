#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    // #endif
   long long t;
  cin >> t;
  while (t--)
  {
     long long n;
    cin >> n;
    string s;
    set<string> st;
    for ( long long i = 0; i < n; i++)
    {
      cin >> s;
      st.insert(s);
    }
    for ( long long i = 0; i <= n; i++)
    {
       long long num = i;
      string bin = "";
      while (num)
      {
        bin += to_string(num % 2);
        num /= 2;
      }
      reverse(bin.begin(), bin.end());
       long long size = bin.size();
      string res = string(n - size, '0');
      res += bin;
      if (st.find(res) == st.end())
      {
        cout << res << "\n";
      break;
      }
    }
  }
}