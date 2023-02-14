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
int flag=0;
bool chkrow(char arr[3][3] ,char ch)
{
    int c1=0,c2=0,c3=0;
    for (int k = 0; k < 3; k++)
    {
        if(arr[0][k]==ch)
        {
            c1++;
        }
        if(arr[1][k]==ch)     
        {
            c2++;
        }
        if(arr[1][k]==ch)
        {
            c3++;
        }
    }
    if((c1==3 && c2==3) || (c3==3 && c2==3) || (c1==3 && c3==3) )
    flag=1;
    //cout<<"c2="<<c2<<endl;
    if(c1==3 && c2!=3 && c3!=3)
    return true;
    if(c2==3 && c1!=3 && c3!=3)
    return true;
    if(c3==3 && c2!=3 && c1!=3)
    return true;
    
    return false;

}
bool chkcol(char arr[3][3] ,char ch)
{
    int c1=0,c2=0,c3=0;
    for (int k = 0; k < 3; k++)
    {
        
        if(arr[k][0]==ch)
        {
            
            c1++;
        }
        if(arr[k][1]==ch)
        {
            c2++;
        }
        if(arr[k][1]==ch)
        {
            c3++;
        }
    }
    if((c1==3 && c2==3) || (c3==3 && c2==3) || (c1==3 && c3==3) )
    flag=1;
    if(c1==3 && c2!=3 && c3!=3)
    return true;
    if(c2==3 && c1!=3 && c3!=3)
    return true;
    if(c3==3 && c2!=3 && c1!=3)
    return true;
    
    return false;
}
bool chkdiagonal(char arr[3][3] ,char ch)
{
    int c1=0,c2=0;
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            if(k==l){
                if(arr[k][l]==ch)
                c1++;
            }
            if(k+l==2){
                if(arr[k][l]==ch)
                c2++;
            }

        }
        
    }
    //cout<<"c1="<<c1<<"c2="<<c2;
    /* if(c1==3 && c2==3 )
    flag=1; */
    if(c1==3 && c2!=3)
    return 1;
    if(c2==3 && c1!=3)
    return 1;

    return 0;
    
}
bool extracase(char arr[3][3], char ch)
{
    if(arr[0][0]==ch && arr[0][2]==ch && arr[2][0]==ch && arr[2][2]==ch && arr[1][1]==ch )
    {
        return true;
    }
    return false;
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
        flag=0;
        char ch1='X',ch2='O';
        char ar[3][3]={};
        int scr_x=0,scr_o=0;
        int spc=0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>ar[i][j];
                if (ar[i][j]=='X')
                {
                    scr_x++;
                }
                if (ar[i][j]=='O')
                scr_o++;

                
            }
           // cout<<endl;
            
        }
        spc=9-scr_o+scr_x;
        if(scr_o-scr_x>1)
        {

            cout<<3<<endl;
            continue;
        }
        //cout<<extracase(ar , ch1)<<endl;
        if (extracase(ar , ch1))
        {
            if(spc%2==0){

                cout<<1<<endl;
                continue;

                }
                else
                {
                    cout<<3<<endl;
                    continue;
                }
        }
        /* if (extracase(ar , ch2))
        {
            if(spc%2!=0){

                cout<<1<<endl;
                continue;

                }
                else
                {
                    cout<<3<<endl;
                    continue;
                }
        } */
        
        
        
        bool col_x=chkcol(ar ,ch1);
        bool row_x=chkrow(ar ,ch1);
        bool dia_x=chkdiagonal(ar ,ch1);
        bool col_o=chkcol(ar ,ch2);
        bool row_o=chkrow(ar ,ch2);
        bool dia_o=chkdiagonal(ar ,ch2);
        //cout<<flag;
        if( flag==1)
        {
            cout<<3<<endl;
            continue;
        }
        //cout<<row_x<<row_o<<endl;
        if((row_x==true && row_o==true) || (col_o==true && col_x==true)  )
        {
            cout<<3<<endl;
            continue;
        }
        if(col_x==false && col_o==false && row_x==false && row_o==false && dia_x==false && dia_o==false && spc>0)
        {
            
            cout<<2<<endl;
            continue;
        }
        
            if(row_o==true || col_o==true || dia_o==true)
            {
                if(spc==3 || spc==1){

                cout<<1<<endl;
                continue;

                }
                else
                {
                    cout<<3<<endl;
                    continue;
                }

            }
            
               if(row_x==true || col_x==true || dia_x==true)
            {
                if(spc==0 || spc==2 || spc==4){

                cout<<1<<endl;
                continue;

                }
                else
                {
                    cout<<3<<endl;
                    continue;
                }

            }

            

        
        /* if(( col_o==true && row_o==false && dia_o==false) ||                    ( row_o==true && col_o==false && dia_o==false) ||                      ( dia_o==true && row_o==false && col_o==false) ||                      ( col_x==true && row_x==false && dia_x==false) ||                      ( row_x==true && col_x==false && dia_x==false) ||                      ( dia_x==true && row_x==false && col_x==false) ||           (col_x==true && row_x==true) || (row_x==true && dia_x==true) || (dia_x==true && col_x==true) || (col_o==true && row_o==true) || (row_o==true && dia_o==true) || (dia_o==true && col_o==true) )
        {
            if(row_o==true || col_o==true || dia_o==true)
            {
                if(spc%2!=0){

                cout<<1<<endl;
                continue;

                }
                else
                {
                    cout<<3<<endl;
                    continue;
                }

            }
            else{
                if(spc%2==0){

                cout<<1<<endl;
                continue;

                }
                else
                {
                    cout<<3<<endl;
                    continue;
                }

            }
            
        } */
        
        
        
         
        //cout<<chkcol(ar ,ch1)<<endl;

        
    }
    return 0;
}
