#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define lli long long int
#define mod 1000000007
using namespace std;
//prakhar_0007
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
        int n , k;
        cin >> n >> k;
        string s="";
        cin >> s;
        int arr[k]={0};
        for(int &x:arr)
        cin >> x;
        long int sum=0;
        for (int j = 1; j < n; j++)
            {
                if(s[j]==s[j-1])
                sum+=2;
                else
                sum+=1;
            }
        for (int i = 0; i < k; i++)
        {   
            long int nsum=sum;
            char ch=s[arr[i]-1];
            
            if(s[arr[i]-1]=='0')
            s[arr[i]-1]='1';
            else
            s[arr[i]-1]='0';
            //edge case

            if(arr[i]-1 == 0)
            {

                if(s[arr[i]-1]==s[arr[i]] && ch!=s[arr[i]])
                {
                    sum = sum +1;
                }
                if(s[arr[i]-1]!=s[arr[i]] && ch==s[arr[i]])
                {
                    sum = sum -1;
                }
                
            }
            else if(arr[i]-1 > 0 && arr[i]-1 < n)
            {
                if(ch!=s[arr[i]-1] && s[arr[i]]!=s[arr[i]-2] )
                {
                    sum = sum +1;
                }
                if(s[arr[i]-1]!=s[arr[i]] || ch==s[arr[i]])
                {
                    sum = sum -1;
                }
            }
            else
            {
                if(s[arr[i]-1]==s[arr[i]-2] && ch!=s[arr[i]-2] )
                {
                    sum = sum +1;
                }
                if(s[arr[i]-1]!=s[arr[i]-2] && ch==s[arr[i]-2])
                {
                    sum = sum -1;
                }
            }
            
            
            
            cout<< sum <<endl;
            
        }
        


    }
    return 0;
}
