#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    long long min=LLONG_MAX;
    long long max=0;
    vector<long long> a(n);
    for (long long i=0;i<n;i++)
    {
        cin>>a[i];
        if (min>a[i])min=a[i];
        if (a[i]>max)max=a[i];
    }
    if (min>=n){cout<<0<<endl;return;}
    cout<<n<<endl;
 
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)solve();
}
