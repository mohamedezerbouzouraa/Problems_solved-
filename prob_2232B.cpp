#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        long long s=0;
        long long ans=LLONG_MAX;
        for (int i = 0; i < n; i++) {
            s +=a[i];
            ans = min(ans, s/(i + 1));
            cout << ans;
            if (i < n - 1) cout << " ";}}
}
