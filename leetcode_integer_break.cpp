#include <stdio.h>

int main(void) {
	int n , b , c , s=0;
	
	scanf("%d" ,n);
	for (int i =1 ; i<= n ; i++)
	{
	    scanf("%d" , &b);
	    char str[100];
	    scanf("%s" , str);
	    c=b / 2;
	    for ( int j =0 ; j< b/2  ; j++ )
	    {
	        if (str[j]==str[c])
	        {
	            c++;
	        }
	        else
	        {
	            s =  1;
	            break;
	        }
	    }
	    
        if( s=0)
        {
            printf("YES");
        }
	    else
	    {
	        printf("NO");
	    }
	}
	return 0;
}