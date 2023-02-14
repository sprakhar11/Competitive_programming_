#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        int minJokes = min(a2, a3); // finding the minimum number of jokes
        int totalJokes = a1 + minJokes + min(a4, minJokes);
        cout << totalJokes << endl;
    }
    return 0;
}
