//
//  P1067.cpp
//  
//
//  Created by tyf on 2019/9/25.
//
/*题目：https://www.luogu.org/problem/P1067
 */
#include <iostream>
using namespace std;
int lens[100],n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>lens[i];
    }
    for(int i=0;i<n;i++)
    {
        if(lens[i]==0) continue;
        if(lens[i]>0)
        {
            if(n-i==0) cout<<"+"<<lens[i];
            else
            cout<<"+"<<lens[i]<<"x"<<"^"<<n-i;
        }
        else
        {
            if(n-i==0) cout<<"-"<<lens[i];
            else
            cout<<"-"<<lens[i]<<"x"<<"^"<<n-i;
        }
    }
    return 0;
}
