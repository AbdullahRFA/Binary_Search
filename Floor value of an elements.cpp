#include<bits/stdc++.h>
using namespace std;
int bs(vector<int>&v,int x)
{
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]<=x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return l;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<bs(v,x)<<endl;
    }
}
