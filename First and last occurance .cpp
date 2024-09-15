#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {                   ///TC=longN
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &x:v)cin>>x;
        sort(v.begin(),v.end());
        int l=0,r=n-1,ans=0;
        int x;
        cin>>x;
        ///First Occurance
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]==x)
            {
                ans=mid;
                r=mid-1;
            }
          else  if(v[mid]<x)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }

        }
        cout<<"First Occurrence  at "<<ans+1<<endl;
        ///Last Occurrence
        l=0;r=n-1,ans=0;
        int ans1=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]==x)
            {
                //ans=mid;
                ans1=mid;
                l=mid+1;
            }
              else  if(v[mid]>x)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<"Last Occurrence at "<<ans1<<endl;

        cout<<"x= "<<ans1-ans<<" ta "<<endl;
    }
}

