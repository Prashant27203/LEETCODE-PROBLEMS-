#include<iostream>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4];
    cout<<"Enter the two dimensional Matrix"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    int dir=0;
    int top=0;
    int down=3;
    int left=0;
    int right=3;
    while(top<=down &&left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                printf("%d",a[top][i]);
            }
    top++;
        }
        else if(dir==1)
        {
            for(int i=top;i<=down;i++)
            {
                printf("%d",a[i][right]);
            }
            right--;
        }
        else if(dir==2)
        {
            for(int i=right;i>=left;i--)
            {
                printf("%d",a[down][i]);
            }
            down--;
        }
        else if(dir==3)
        {
            for(int i=down;i>=top;i--)
            {
                printf("%d",a[i][left]);
                left++;
            }
        }
        dir=(dir+1)%4;
    }
        return 0;
}