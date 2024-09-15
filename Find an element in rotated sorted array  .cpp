#include<bits/stdc++.h>
using  namespace  std;

using namespace std;
typedef long long int ll;
typedef unsigned long long int  llu;

int countrot(int ar[],int l,int r)
{
    int res=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(mid<r && ar[mid+1]<ar[mid])
        {
            res=mid+1;
            break;
        }
        else if(mid>l && ar[mid]<ar[mid-1])
        {
            res=mid;
            break;
        }
        else if(ar[r]>ar[mid])r=mid-1;
        else l=mid+1;
    }
    return res;
}

int binsearch(int ar[],int l,int r,int x)
{
    int res=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
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
int main()
{
    int n;
    cin>>n;
    int ar[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int ind=countrot(ar,0,n-1);
    int fnd;
    cin>>fnd;
    int ans1=binsearch(ar,0,ind-1,fnd);
    int ans2=binsearch(ar,ind,n-1,fnd);
    cout<<max(ans1,ans2)+1<<endl;
    return 0;
}
