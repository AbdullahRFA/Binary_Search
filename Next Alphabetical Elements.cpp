#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char c;
        cin>>c;
        char ans;
        int l=0,r=s.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(s[mid]>c)
            {
                ans=s[mid];
                r=mid-1;
            }
            else
                l=mid+1;
        }
        cout<<ans<<endl;

    }
}
