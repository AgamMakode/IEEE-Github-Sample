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