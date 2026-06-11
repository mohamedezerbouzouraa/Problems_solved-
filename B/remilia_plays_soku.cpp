#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long dist(long long x1, long long x2, long long n) {
    return min(abs(x1 - x2), n - abs(x1 - x2));}
int main() {
    int t;
    cin >> t;
    while (t--) {
      long long n, x1, x2, k;
      cin >> n >> x1 >> x2 >> k;
    
      if (n <= 3) {
          cout << 1 << "\n";}
       else{cout << dist(x1, x2, n) + k << "\n";}
    }
}
