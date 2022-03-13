#include <iostream>
#include <climits>
using namespace std;



int main()
{
     long long i=0;
     for ( i = 0; i > -1; i++)
     {
         if( i & 1)
         cout<<i<<endl;
     }
     
     
     return 0;
}