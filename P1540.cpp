//https://www.luogu.org/problem/P1540
#include <iostream>
using namespace std;
int data[1000],book[100000];
int n,m,a;
int head,till;
int ans;
int main()
{
    cin>>m>>n;
    //  till++;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(book[a]==0)
        {
            ans++;
            till++;
            book[a]=1;
            data[till]=a;
            
            if(till>m)
            {
              //  data[till]=a;
                head++;
                book[data[head]]=0;
                
                
            }
        }
    }
    cout<<ans;
    
}
