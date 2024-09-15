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
        sort(ara,ara+n);

        int l=0,r=n-1;
        int x;
        cin>>x;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(ara[mid]==x)
            {
                cout<<"FOUND"<<endl;
                break;
            }
            else if(ara[mid]>x)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(l>r)cout<<"NOT FOUND"<<endl;
    }
}
