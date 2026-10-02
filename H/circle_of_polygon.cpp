#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    double s;
    cin >> n >> s;
 
    const double PI = acos(-1.0);
    double theta = 2.0 * PI / n;
    double R2 = s * s / (2.0 * (1.0 - cos(theta)));
 
    cout << fixed << setprecision(6) << PI * R2 << '\n';
}
