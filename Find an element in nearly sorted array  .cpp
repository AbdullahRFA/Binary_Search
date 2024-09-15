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
        for(int i=0; i<n; i++)cin>>ara[i];
        int l=0,r=n-1,x;
        cin>>x;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(ara[mid]==x)
            {
                cout<<"FOUND at "<<mid+1<<endl;
                break;
            }
            else if(l<=mid-1 && ara[mid-1]==x)
            {
                cout<<"FOUND at "<<mid<<endl;
                break;
            }
            else if(r>=mid+1 && ara[mid+1]==x)
            {
                cout<<"FOUND at "<<mid+2<<endl;
                break;
            }
            else if(ara[mid]>x)r=mid-2;
            else l=mid+2;
        }
    }
}
