#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
// prakhar_0007
int main() {
  int n, q;
  cin >> n >> q;
  vector<int> vt(n);

  for (int i = 0; i < n; i++) {
    cin >> vt[i];
  }
  sort(vt.begin(), vt.end());
  for (int j = 0; j < q; j++) {
    int r;
    cin >> r;

    if (n % 2 == 0 && (r < vt[0] || r > vt[n - 1])) {
      cout << "POSITIVE"
           << "\n";
      continue;
    }
    if (n % 2 != 0) {

      if (r < vt[0])
        cout << "NEGATIVE"
             << "\n";
      if (r > vt[n - 1])
        cout << "POSITIVE"
             << "\n";
    }

    if (binary_search(vt.begin(), vt.end(), qq)) {
      cout << 0 << "\n";

    } else {
      auto itr1 = lower_bound(vt.begin(), vt.end(), qq);

      int indx1 = itr1 - vt.begin();
      if (n % 2 == 0 && indx1 % 2 == 0) {
        cout << "POSITIVE"
             << "\n";
      }
      if (n % 2 == 0 && indx1 % 2 != 0) {
        cout << "NEGATIVE"
             << "\n";
      }
      if (n % 2 != 0 && indx1 % 2 == 0) {
        cout << "NEGATIVE"
             << "\n";
      }
      if (n % 2 != 0 && indx1 % 2 != 0) {
        cout << "POSITIVE"
             << "\n";
      }
    }
  }

  return 0;
}
