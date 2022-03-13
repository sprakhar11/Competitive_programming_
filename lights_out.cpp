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
    int matrix[3][3];
    int ansm[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrix[i][j];
            ansm[i][j]=1;
        }
        
    }
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if((matrix[i][j]%2)!=0)
            {
                
                if(ansm[i][j]==1)
                ansm[i][j]=0;
                else
                ansm[i][j]=1;
                for (int k = 0; k < 4; k++)
                {
                    int x=i,y=j;
                    x+=dx[k];
                    y+=dy[k];
                    if(x>=0  && x<=2 && y>=0  && y<=2)
                    {
                        if(ansm[x][y]==1)
                        ansm[x][y]=0;
                        else
                        ansm[x][y]=1;
                    }
                }
            }
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ansm[i][j];
            
        }
        cout<<endl;
        
    }

    
    
    return 0;
}
