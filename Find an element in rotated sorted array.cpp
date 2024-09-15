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
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        int x;
        cin>>x;
        int l=0,r=n-1,ans=0,ans1=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(mid<r && ara[mid]>ara[mid+1])
            {
                ans1=mid+1;
                break;
            }
            else if(l<mid && ara[mid]<ara[mid-1])
            {
                ans=mid;
                break;
            }
            if(ara[r]>ara[mid])r=mid-1;
            else l=mid+1;
        }
        cout<<ans<<endl;
        int p=0,q=ans-1;

        while(p<=q)
        {
            cout<<"Khan1"<<endl;
            int mid=(p+q)/2;
            if(ara[mid]==x)
            {
                cout<<"FOUND at "<<mid+1<<endl;
               // q=mid-1;
            }
            else if(ara[mid]>x)
            {
                p=mid+1;
            }
            else
            {
                q=mid-1;
            }
        }
        p=ans,q=n-1;

        while(p<=q)
        {cout<<"Khan2"<<endl;
            int mid=(p+q)/2;
            if(ara[mid]==x)
            {
                cout<<"FOUND at "<<mid+1<<endl;
            }
            else if(ara[mid]>x)
            {
                p=mid+1;
            }
            else
            {
                q=mid-1;
            }
        }
    }
}
