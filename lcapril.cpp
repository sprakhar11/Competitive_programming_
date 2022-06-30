#include <bits/stdc++.h>
using namespace std;
int countDigit(long long n)
{
    if (n / 10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}
int getProduct(int n)
{
    int product = 1;

    while (n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }

    return product;
}
long long int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    int t;
    cin >> t;
    long long int n;
    int count = 0,flag=0;
    while (t--)
    {
        cin >> n;
        flag =0;
        count =0;
        for (int i = 1; i <= n; i++)
        {
            long long p = getProduct(i);
            long long ans = countDigit(i);
            long long a = factorial(ans);
            if (p >= a)
            {
                flag=1;
                count++;
            }
            
        }
        cout<<count<<endl;
    }

    return 0;
}
