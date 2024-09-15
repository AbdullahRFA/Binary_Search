#include<bits/stdc++.h>
using namespace std;
double mul(double n,double m)
{
    double res=1;
    for(int i=1;i<=m;i++)
    {
        res*=n;
    }
    return res;
}
int main()
{
    double n,m;
    cin>>n>>m;
    double l=0,h=n,mid;
    while(h-l>1e-9)
    {
        mid=(l+h)/2;
        double x=mul(mid,m);
        if(x<n)
        {
            l=mid;
        }
        else
        {
            h=mid;
        }
    }
    cout<<l<<endl;
}
