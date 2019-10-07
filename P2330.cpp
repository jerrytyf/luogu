//
//  P1605.cpp
//
//
//  Created by tyf on 2019/9/27.
//https://www.luogu.org/problem/P2330
#include<cmath>
#include<cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct notre
{
    int u;
    int v;
    int w;
}q[100000];
int n,m;
int f[1000];
int maxx=-9999;
int counnt;
bool cam(notre a,notre b)
{
    return a.w<b.w;
}
int getf(int x)
{
    if(f[x]==x) return x;
    else {
        f[x]=getf(f[x]);
        return f[x];
    }
}
bool cheak(int a,int b)
{
    int t1,t2;
    t1=getf(a);
    t2=getf(b);
    if(t1!=t2)
    {
        f[t2]=t1;
        return true;
    }
    return false;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>q[i].u>>q[i].v>>q[i].w;
    }
    sort(q,q+m,cam);
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=0;i<m;i++)
    {
        if(cheak(q[i].u,q[i].v))
        {
            maxx=q[i].w;
            counnt++;
        }
        if(counnt==n-1) break;
    }
    cout<<n-1<<" "<<maxx<<endl;
    return 0;
    
}
/*
 4 5
 1 2 3
 1 4 5
 2 4 7
 2 3 6
 3 4 8
 */

