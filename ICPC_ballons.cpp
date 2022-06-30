#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
// prakhar_0007
bool chk(vector<bool> blo) {
  for (int i = 1; i < 8; i++) {
    if (blo[i] != true)
      return false;
  }
  return true;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  lli t;
  cin >> t;
  while (t--) {

    int n;
    cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n; i++) {
      cin >> vt[i];
    }
    vector<bool> vbool(n + 1, false);
    for (int i = 0; i < n; i++) {
      vbool[vt[i]] = true;
      if (chk(vbool)) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
  return 0;
}
