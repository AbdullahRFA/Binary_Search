#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)          ///TC=O(n);
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)cin>>ara[i];
        int first=-1,last=0;
        int x;cin>>x;
        for(int i=0;i<n;i++)
        {
            if(ara[i]==x)
            {
                if(first==-1)first=i;
                last=i;
            }
        }
        cout<<"First Occurrence at "<<first+1<<endl<<"Last Occurrence at "<<last+1<<endl;
    }
}
