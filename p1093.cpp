//题目：https://www.luogu.org/problem/P1093
#include <iostream>
#include <algorithm>
using namespace std;
#define N 300
struct node
{
    int number;
    int chinese;
    int math;
    int english;
    int sum;
}q[N],tmp;
int main()
{
    int j=1;
    for(int i=0;i<N;i++)
    {q[i].number=j;j++;}
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>q[i].chinese>>q[i].math>>q[i].english;
        q[i].sum=q[i].chinese+q[i].math+q[i].english;
    }
    for(int i=0;i<k-1;i++)
        for(int j=0;j<k-i;j++)
        {
            if(q[j].sum<q[j+1].sum)
            {tmp=q[j];q[j]=q[j+1];q[j+1]=tmp;}
            else
                if(q[j].sum==q[j+1].sum)
                {
                    if(q[j].chinese<q[j+1].chinese)
                        {tmp=q[j];q[j]=q[j+1];q[j+1]=tmp;}
                    else
                        if(q[j].chinese==q[j+1].chinese)
                            if(q[j].number>q[j+1].number)
                                {tmp=q[j];q[j]=q[j+1];q[j+1]=tmp;}
                }
            
        }
    for(int i=0;i<5;i++)
        cout<<q[i].number<<' '<<q[i].sum<<endl;
    return 0;
}
