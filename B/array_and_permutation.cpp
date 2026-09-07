#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> p(n);
    for(long long i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long i=0,j=0;
    while (i<n)
    {
        while (j<n and a[i]!=p[j]){j++;}
        if (j==n){cout<<"NO"<<endl;return;}
        else
        {
            while (i<n-1 and a[i]==a[i+1]){i++;}
            i++;
        }
    }
    cout<<"YES"<<endl;
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
