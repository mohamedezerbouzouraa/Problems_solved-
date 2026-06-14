#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long puissmax(long long x, long long a, long long b) {
    long long p = 0;
    while (!(a/((long long)pow(x,p)) >= b && a/((long long)pow(x,p+1)) < b)) {
        p++;}
    return p;}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;
        long long m = min(a, b);
        a = max(a, b);
        b = m;
        if (a == b) cout << 0 << "\n";
        else if (a < x) cout << min(a-b, 2LL) << "\n";
        else {
            long long k = puissmax(x, a, b);
            cout << min(k + (a/((long long)pow(x,k)) - b),
                       k + 1 + (b - a/((long long)pow(x,k+1)))) << "\n";}}}
