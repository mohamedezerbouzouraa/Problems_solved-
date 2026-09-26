#include <bits/stdc++.h>
using namespace std;
 
long long f(long long x) {
    long long s = 0;
    while (x > 0) {
        long long d = x % 10;
        s += d * d;
        x /= 10;
    }
    return s;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int step = 0; step < 200; step++) {
                a[i] = f(a[i]);
            }
        }
 
        unordered_map<long long, long long> freq;
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
 
        long long answer = 0;
        for (auto &p : freq) {
            long long cnt = p.second;
            answer += cnt * (cnt - 1) / 2;
        }
 
        cout << answer << "\n";
    }
    return 0;
}
