# IEEE-Github-Game a Thon

Name : AGAM MAKODE

Problem For Practise competitive Programming

1)Upper Triangular Matrix

A triangular matrix is a special kind of square matrix. A square matrix is called upper triangular if all the entries below the main diagonal are zero. A triangular matrix is one that is either lower triangular or upper triangular. A matrix that is both upper and lower triangular is called a diagonal matrix.
1 2 3
0 4 5
0 0 6
is upper triangular matrix.

Input Format

The first line contains the size C1 R1 of the Matrix. Next line give the contents of the first Matrix.
Example: Input:
3 3
2 3 4
4 3 6
1 3 3

Constraints

C1- 3,5
R1- 3,5
The sizes of the matrix 3x3 or 5x5. Each array entry is an integer which fits an int data type.

Output Format

Print
'Yes' for upper triangular matrix.
'No' for not a upper triangular matrix.

Sample Input 0

3 3
2 3 4
4 3 6
1 3 3 

Sample Output 0

No


Code:-

#include<iostream>
using namespace std;

int main()
{
    int n=0,m=0;
    cin>>n>>m;
    int a,check=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a;
            if(i>j && a!=0)
            {
                cout<<"No"<<endl;
                check=0;
                break;

            }
        }
        if(check==0)
        {
            break;
        }
    }
    if(check == 1)
    {
        cout<<"Yes"<<endl;
    }

    return 0;


}
  
    
2) Collatz function
    
 The Collatz function is defined for a positive integer n as follows.

f(n) = 3n+1 if n is odd

    n/2     if n is even
We consider the repeated application of the Collatz function starting with a given integer n, as follows:

f(n), f(f(n)), f(f(f(n))), …

It is conjectured that no matter which positive integer n you start from, this sequence eventually will have 1 in it. It has been verified to hold for numbers up to 5 × 260

e.g. If n=7, the sequence is

f(7) = 22

f(f(7)) = f(22) = 11

f(11) = 34

f(34) = 17

f(17) = 52

f(52) = 26

f(26) = 13

f(13) = 40

f(40) = 20

f(20) = 10

f(10) = 5

f(5) = 16

f(16) = 8

f(8) = 4

f(4) = 2

f(2) = 1
Thus if you start from n=7, you need to apply f 16 times in order to first get 1.

In this question, you will be given a positive number <= 32,000. You have to output how many times f has to be applied repeatedly in order to first reach 1.

Input Format

1

Constraints

In this question, you will be given a positive number <= 32,000. You have to output how many times f has to be applied repeatedly in order to first reach 1

Output Format

0

Sample Input 0

1
Sample Output 0

0
Sample Input 1

8
Sample Output 1

3
    

 Code:-
    
    
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





