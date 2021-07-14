/*
You are provided with N baskets such that they can be placed one inside another. 
Any basket can contain only one basket directly inside it depending on the size.
Given the sizes of N baskets, output "YES" if it is possible to nest them all and have one basket on the outside and "NO" otherwise.

Input Format

The first line contains the integer N, denoting the number of baskets 
The second line contains N separated integers denoting the size of the baskets

Constraints

1 <= N <=100 1 <= basket size <= 1000

Output Format

Print "YES" if the baskets can be nested inside each other and "NO" otherwise

Example: Input: 3 3 1 1

Output: NO

Explanation: Two baskets are of size 1 hence cannot be put in one another.

Sample Input 0

3
2 2 5
Sample Output 0

NO

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,flag=0,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}