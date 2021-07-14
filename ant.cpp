/* There are 'n' ants on a 'n+1' length rod. 
The ants are numbered from 1 to n and are initially placed at positions starting from position 1 till position n.
They are moving either in left direction (denoted by '-1') or in the right direction (denoted by '1'). 
Whenever an ant crosses the boundary of the rod it falls off the rod.
You are given the initial direction of the ants. Now, whenever two ants collide their direction switches,
 i.e. the ant going in left direction ('-1) changes it's direction towards right ('1') and the ant going in the right direction ('1') 
 changes it's direction towards left ('-1'). Find last ant to fall off the rod. 
 Note: In case two ants are falling simultaneously in the end print the index of the lower indexed ant.

Input Format

First line contains the integer 'n' denoting the total number of ants s.t. 1 <= n <= 1,000 
Second line contains 'n' space separated numbers (either '1' or '-1') denoting the initial directions of the ants.

Constraints

ants s.t. 1 <= n <= 1,000

Output Format

Output a single integer which is the index (lower index in case two ants are falling simultaneously in the end) 
of the last ant to fall off the table.

Sample Input 0

2
1 1
Sample Output 0

1
Sample Input 1

3
1 -1 -1
Sample Output 1

2 /**/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int,int);
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int one=0;
    int minusOne=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            one++;
        }else{
            minusOne++;
        }
    }
    if(one==0){
      printf("%d\n",n);
    }else if(minusOne==0 || n==1){
      printf("1");
    }else{
        int ans=0;
        ans=max(n-one,minusOne);
        printf("%d\n",ans);
    }
    return 0;
}
    




