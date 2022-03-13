#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
//prakhar_0007
int fun(vector <int> vec)
{
    vector<int>::iterator ip;
    //sort(vec.begin(), vec.end());
    ip = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(), ip));
    int cnt = 0;
    for (ip = vec.begin(); ip != vec.end(); ++ip)
    {
        if( *ip == 1 )
        cnt++;
        //cout << *ip << " ";
    }
    return cnt;
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
        string s1 = "";
        string s2 = "";
        cin >> s1 >> s2 ;
        int n = s1.length();
        int arr[n+1] ={0};
        for (int i = 0; i < s1.length(); i++)
        {
            if( (s1[i]=='1' && s2[i]=='1') || (s1[i]=='0' && s2[i]=='0'))
            {
                arr[i+1]= 0;
            }
            else
            arr[i+1] = 1;
        }
        vector <int> even;
        vector <int> odd;
        for (int i = 1; i < n+1; i++)
        {
            if ( i % 2 == 0)
            {
                even.push_back(arr[i]);
            }
            else
            odd.push_back(arr[i]);
        }
        
        cout << fun(even) + fun(odd) << endl;
        
    }
    return 0;
}
