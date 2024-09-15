#include <bits/stdc++.h>
using namespace std;
double f(double a, double b, double c, double d, double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}
double findRoot(double a, double b, double c, double d, double left, double right, double precision = 1e-10)
{
    double mid, f_mid;
    while (fabs(right - left) > precision)
    {
        mid = (left + right) / 2;
        f_mid = f(a, b, c, d, mid);

        if (fabs(f_mid) < precision)
            break;
        else if (f_mid * f(a, b, c, d, left) < 0)
            right = mid;
        else
            left = mid;
    }

    return mid;
}

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double left = -1000.0;
    double right = 1000.0;
    double root = findRoot(a, b, c, d, left, right);

    cout<<fixed<<setprecision(9)  << root << endl;

    return 0;
}
