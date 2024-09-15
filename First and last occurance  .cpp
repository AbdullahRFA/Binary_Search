#include<bits/stdc++.h>
using namespace std;
int ar[10000];
int n;
int binsearch(int x)
{
    int res=-1;
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(x==ar[mid])
        {
            res=mid;
            r=mid-1;
        }
        else if(x>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}
int binsearch2(int x)
{
    int res=-1;
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(x==ar[mid])
        {
            res=mid;
            l=mid+1;
        }
        else if(x>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];

        int x;
        cin>>x;
        int ans=binsearch(x);
        cout<<ans+1<<endl;
        //cin>>x;
        int ans1=binsearch2(x);
        cout<<ans1+1<<endl;

    return 0;
}
