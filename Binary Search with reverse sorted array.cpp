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
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int l=0,r=n-1;
    int x;cin>>x;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]==x)
        {
            cout<<"Found"<<endl;
            break;
        }
        else if(v[mid]>x)
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
