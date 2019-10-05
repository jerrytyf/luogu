
#include <iostream>
using namespace std;
#define N 500
int e[N][N],dis[N]={999};
int head=1,till=2;
int n,m;
int que[N];
int a,b,c;
int tmp;
//int sx,sy;
int book[N];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) dis[i]=999;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        e[a][b]=c;
    }
    dis[sx]=0;
    que[head]=1;
    while(head<till)
    {
        tmp=que[head];
        for(int i=1;i<=n;i++)
        {
            if(e[tmp][i]!=0)
            {
                if(dis[i]>dis[tmp]+e[tmp][i])
                {
                    dis[i]=dis[tmp]+e[tmp][i];
                    if(book[i]==0)
                    {
                        que[till]=i;
                        till++;
                        book[i]=1;
                    }
                }
            }
        }
        head++;
    }
    for(int i=1;i<=n;i++) cout<<dis[i]<<" ";
    cout<<endl;
    return 0;
}

