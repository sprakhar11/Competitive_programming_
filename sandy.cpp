#include <iostream>
using namespace std;
double cosine(float x,int n)
{
    static float f;
    if(n==0)
    return f;
    f= 1 - x*x*f/(n*(n-1));
    return (double) cosine(x,n-2);
}
int main()
{
   cout<<"Hello World"<<endl;
   double ans=cosine(0.523598,9);
   printf("%lf\n",ans);
   return 0;
}
