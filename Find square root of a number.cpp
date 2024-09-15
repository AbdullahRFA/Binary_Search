#include<bits/stdc++.h>
using namespace std;
double f(double n)
{
    return (n*n);
}
int main()
{
    double num;
    cin>>num;
    double left=0,right=num;
    double preci=1e-10;
    while(right-left>preci)
    {
        double mid=(left+right)/2;
        double squre=f(mid);
        if(squre>num)
            right=mid;
        else
            left=mid;
    }
    cout<<fixed<<setprecision(9)<<left<<endl;
}
