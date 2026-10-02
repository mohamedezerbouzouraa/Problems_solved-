#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
 
    long long total = 0;                      
    for (int mask = 1; mask < (1 << n); mask++)
    {long long res = 0;
        for (int i = 0; i < n; i++)
            if (mask >> i & 1)
                res |= a[i];
        total += res;                        
    }
    cout << total << '\n';
}
