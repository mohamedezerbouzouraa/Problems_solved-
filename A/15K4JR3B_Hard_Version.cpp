#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n;
    //Remember the name
    cin>>n;vector<long long> a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=1LL<<a[i];
    }
    sort(a.rbegin(), a.rend());
    vector<long long> t1, t2;
    long long sum1 = 0, sum2 = 0;
    for (long long x : a) {
        if (sum1 <= sum2) {
            t1.push_back(x);
            sum1 += x;} 
            else {
            t2.push_back(x);
            sum2 += x;
        }
    }
    cout<<sum1*sum2<<endl;
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){     solve();
}
 
 
}
