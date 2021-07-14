/*
A Milkman serves milk in packaged bottles of varied sizes.
The possible size of the bottles are {1, 5, 7 and 10} litres.
He wants to supply desired quantity using as less bottles as possible irrespective of the size.
Your objective is to help him find the minimum number of bottles required to supply the given demand of milk.

Input Format

First line contains number of test cases N Next N lines, each contain a positive integer Li which corresponds to the demand of milk.

Constraints

1 <= N <= 10000 1 <= Li <= N

Output Format

For each input Li, print the minimum number of bottles required to fulfill the demand

Sample Input 0

2
17 65
Sample Output 0

2 7
Explanation 0

Number of test cases is 2 In first test case, demand of milk is 17 litres which can be supplied using minimum of 2 bottles as follows 1 x 10 litres and 1 x 7 litres .
In second test case, demand of milk is 65 litres which can be supplied using minimum of 7 bottles as follows 6 x 10 litres and 1 x 5 litres
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int i,j,r,nb,q,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&q);
  nb=0;
  r=q%10;
  if(q>=10)
  {
   if(r==2||r==9||r==3||r==4)
   {
    j=q/10;
    nb=nb+j-1;
    q=q%10+10;
   }
   else
   {
    j=q/10;
    nb=nb+j;
    q=q-(j*10);
   }
   }
  if(q>=7)
  {
   j=q/7;
   nb=nb+j;
   q=q%7;
  }
  if(q>=5)
  {
   j=q/5;
   nb=nb+j;
   q=q%5;
  }
  nb=nb+q;
  printf("%d\t",nb);
 }
 return(0);
}