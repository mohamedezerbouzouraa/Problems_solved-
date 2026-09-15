#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{
    long long n,k;
    cin>>n>>k;
    long long i=0;
    long long p=1;
    while (p<min(k,n)) {p <<= 1;
        i++;
    }

    if (k>=n or p>n){cout<<i<<endl;}  
    else{
        i+=(n-p+k-1)/k;    
        cout<<i<<endl;}
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
