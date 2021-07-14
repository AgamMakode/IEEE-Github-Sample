#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int Collazt(int n)
{
    if(n==1)
    {
        return 0;
    }
    else{
        
        if(n%2==0)
        {
            return 1+ Collazt(n/2);
        }
        else
        {
            return 1+ Collazt(3*n+1);
        }
     

    }
    return -1;
       
}


int main()
    {
     int n;
     scanf("%d",&n);
     printf("%d",Collazt(n));
     return 0;
    }