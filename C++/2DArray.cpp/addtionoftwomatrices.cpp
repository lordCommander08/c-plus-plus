#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,r2,c2;
    cout<<"for matrix 1"<<endl;
    cout<<"enter row: ";
    cin>>r1;
    cout<<"enter coloumn: ";
    cin>>c1;
    cout<<"for matrix 2"<<endl;
    cout<<"enter row: ";
    cin>>r2;
    cout<<"enter coloumn: ";
    cin>>c2;
    if(r1!=r2 || c1!=c2)
    {
        cout<<"matrix addition is not possible";
    }
    else{
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
    }
      for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cin>>b[i][j];
            }
        }
          for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
}