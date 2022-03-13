#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define lli long long int
#define N 1000000007L
using namespace std;
//prakhar_0007
long exponentiation(long base, long exp)
{
    cout<<exp<<endl;
    if (exp == 0)
		return 1;

	if (exp == 1)
		return base % N;

	long int t = exponentiation(base, exp / 2);
	t = (t * t) % N;

	// if exponent is even value
	if (exp % 2 == 0)
		return t;

	// if exponent is odd value
	else
		return ((base % N) * t) % N;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t=1;
    cin>>t;
    while (t--)
    {
        long int n;
        cin>>n;
        long int base = 2;
	    long int exp = n-1;

	    long int modulo = exponentiation(base, exp);
	    cout << modulo << endl;
        
    }
    return 0;
}
/* 4194304
191690599
647159479
792832824
952805906
86565743
589934536
185921272
766762396
329376018
785032743 */