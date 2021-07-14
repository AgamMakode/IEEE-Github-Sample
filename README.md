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
  
  
  





