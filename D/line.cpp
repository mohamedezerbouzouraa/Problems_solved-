#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long xi=0;
    vector<long long> a;
    for (long long i = 0; i < n; i++)
    {long long i1,i2;
        if (s[i]=='L')
        {
            i1=i;
            i2=n-i-1;
            xi+=i1;
            if (i1<i2){a.push_back(i2-i1);}
        }
        else
        {
            i2=i;
            i1=n-i-1;
            xi+=i1;
            if (i1<i2){a.push_back(i2-i1);}
        }}
    sort(a.begin(),a.end());
    long long x=xi;
    for (long long i = a.size()-1; i >=0; i--)
    {
        x+=a[i];
        cout << x <<" ";
    }
    for (long long i = a.size(); i <n; i++){
        cout<<x<<" ";
    }
    cout << endl;
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
