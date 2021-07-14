/*
A sequence of n > 0 integers is called a jolly jumper.
if the absolute values of the diﬀerence between successive elements take on all the values 1 through n-1.
For instance, 1 4 2 3 is a jolly jumper, because the absolutes diﬀerences are 3, 2, and 1 respectively.
The definition implies that any sequence of a single integer is a jolly jumper.
write a program to determine whether or not each of a number of sequences is a jolly jumper.

Input Format

Each line of input contains an integer n <=3000 followed by n integers representing the sequence

Constraints

n<=3000

Output Format

For each line of input, generate a line of output saying Jolly' orNot Jolly'.

Sample Input 0

5
5 1 4 2 3
Sample Output 0

Jolly
Sample Input 1

6
5 1 4 2 -1 6
Sample Output 1

Not Jolly
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=0,arr[n],diff[10],count=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                diff[i]= arr[i]-arr[i+1];
            }
            else{
                diff[i]=arr[i+1]-arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(diff[i]<diff[i+1])
            {
                count=0;
                break;

            }
        }
        if(count==0)
        {
            printf("Not jolly");
        }
        else{
            printf("Jolly");
        }
    }
    
    return 0;
}