#include <iostream>
#include <cmath>
int e[50][50];
int u[50];
int m[50];
int maxu,maxv;
using namespace std;
int main()
{
    //printf("this is jerry first vim program");
    cin>>maxu>>maxv;
    for(int i=1;i<=maxu;i++)
    {
        cin>>m[i]>>u[i];
    }
    for(int i=1;i<=maxu;i++)
        for(int j=1;j<=maxv;j++)
        {
            if(u[i]<=j)
                e[i][j]=max(e[i-1][j],m[i]+e[i-1][j-u[i]]);
            else
                e[i][j]=e[i-1][j];
        }
    cout<<e[maxu][maxu];
    return 0;
}

