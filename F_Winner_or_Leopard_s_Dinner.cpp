#include <stdio.h>
int main() {
  long t; 
    scanf("%d", &t);
    long n , H , T;
    for(long q=1 ; q<=t ;q++)
    {
      scanf("%ld", &n);
      scanf("%ld", &T);
      scanf("%ld", &H);
      long ar[n];
      for(long j=0 ; j< n ; j++)
      {
        scanf("%ld", &ar[j]);
      }
      for (long i = 1; i < n; i++)
      {
          ar[i] += ar[i-1];
       }
      if(T>n)
      {
      T=n;
      }

      long i = 0;
      long s = 0;
      long mx = 0 ;


      for (long i = 0; i < n; i++)
      {
        long ls = i;
        long le = i + T - 1;
       



        if(le >= n)
        {
            long s1 = ar[n-1] - (ls != 0 ? ar[ls -1] : 0);
            long s2 = ar[(le + 1) % (n)];

            long k = le % (n);
           
            s2 = ar[k];
            s = s1 + s2;
        } else {
            long s1 = ar[le] - (ls != 0 ? ar[ls -1] : 0);
            s = s1;

        }
        if(s>mx)
        {
          mx=s;
        }

        
      }
    
       if( mx >= H )
      {
        printf("Chaapa\n");
      }
       else
      {
        printf("Haga\n");
      }
  } 
  return 0 ;       
}