//
//  P1216.cpp
//  
//
//  Created by test on 2019/10/6.
//
//https://www.luogu.org/problem/P1216
#include<bits/stdc++.h>
using namespace std;
#define N 1001
int a[N][N],d[N][N];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        d[n][i]=a[n][i];
    for(int i=n-1;i>0;i--)
        for(int j=1;j<=i;j++)
            d[i][j]=a[i][j]+max(d[i+1][j],d[i+1][j+1]);
    cout<<d[1][1];
    
    return 0;
}
