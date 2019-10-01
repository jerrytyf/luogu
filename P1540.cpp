#include <iostream>
using namespace std;
/*
 int data[10000],n,m;
 int a,counnt;
 int ans;
 int head=1;
 int main()
 {
 cin>>m>>n;
 for(int i=0;i<n;i++)
 {
 cin>>a;
 if(data[a]==0)
 {
 if(counnt>=m)
 {
 data[head]=0;
 data[a]=data[a]+1;
 ans++;
 }
 else {
 data[a]=data[a]+1;
 counnt++;
 ans++;
 }
 }
 else continue;
 }
 cout<<ans;
 return 0;
 }
 */
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
