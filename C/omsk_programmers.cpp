#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

long long pm(long long x, long long a) {
    long long i = 0;
    while ((long long)pow(x, i) <= a) i++;
    return i - 1;}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;
        long long m = min(a, b);
        a = max(a, b);
        b = m;
        if (a == b) { cout << 0 << "\n"; continue; }
        if (a < x) { cout << min(a-b, 2LL) << "\n"; continue; }
        long long p = pm(x, a);
        long long q = pm(x, b);
        long long mi = LLONG_MAX;
        for (long long i = 0; i <= p+1; i++) {
            for (long long j = 0; j <= q+1; j++) {
                long long u = a / (long long)pow(x, i);
                long long v = b / (long long)pow(x, j);
                long long d = (u >= v) ? (u - v) : (v - u);
                mi = min(mi, i + j + d);
            }
        }
        cout << mi << "\n";
    }
}
