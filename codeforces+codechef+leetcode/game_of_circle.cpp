#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
void evenn(int n)
{
    vector<int> vt;
    vector<int> v2;
    
    for (int i = 0; i < n ; i++)
    {
        vt.push_back(i+1);
    }   
    v2=vt;
    for (int i = 0; i < n/2; i++)
    {
        vt.clear();
        vt= v2;
        for (int j = 0; j < (int)vt.size(); j++)
        {
            if(j % 2 != 0)
            {
                cout << vt[j] << " ";

            }
        }
        v2.clear();
        if(vt.size()%2 == 0)
        {
            for (int i = 0; i < (int)vt.size(); i++)
            {
                if(i % 2 == 0 )
                {
                    v2.push_back(vt[i]);

                }
            }
        }
        else
        {
            v2.push_back(vt[vt.size() - 1]);
            for (int i = 0; i < (int)vt.size()-1; i++)
            {
                if(i % 2 == 0 )
                {
                    v2.push_back(vt[i]);

                }
            }
        }
  
    }
    if(v2.size()==1)
    cout << v2[0]<<" ";
    
}
int main() {
    lli n = 1;
    cin >> n;
    
    evenn(n);
    
    return 0;
}
