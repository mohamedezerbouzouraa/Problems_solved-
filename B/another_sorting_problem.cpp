#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        //nehseb dep maximal possible binet a[k] et a[k+1] avec k £ {0,...,n-1}
        long long mx = a[0];
        long long dep = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] >= mx) { mx = a[i]; }
            else { dep = max(dep, mx - a[i]); }
        }
        // n'appliqui deplacement eli 7sebtou
        mx = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] >= mx) { mx = a[i]; }
            else { 
                a[i] += dep;
                mx = a[i]; }}
        
        if (is_sorted(a.begin(), a.end()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
