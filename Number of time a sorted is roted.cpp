#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        int l=0,r=n-1,ans=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(mid<r&&ara[mid+1]<ara[mid])
            {
                ans=mid+1;
                break;
            }
            else if(mid>l&&ara[mid]<ara[mid-1])
            {
                ans=mid;
                break;
            }
            else if(ara[r]>ara[mid])r=mid-1;
            else
                l=mid+1;
        }
        cout <<ans<<endl;
    }
}
