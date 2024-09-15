#include<bits/stdc++.h>
using namespace std;
#define ll long long int
double SQRT(double mid)
{
    return mid*mid;
}
int main()
{
    double n;
    while(cin>>n)
    {
        double l=0,h=n,mid;
        while(h-l>1e-7)
        {
            mid=(l+h)/2;
            double p=SQRT(mid);
          else  if(p>n)
            {
                h=mid;
            }
            else
            {
                l=mid;
            }
        }
        cout<<l<<endl;
    }
}
