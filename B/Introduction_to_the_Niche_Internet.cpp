//The more the buzzing, the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k;
    cin>>n>>k;
    vector<long long> a(n);
    for (auto &x : a)cin>>x;
    sort(a.rbegin(), a.rend());
    vector<long long> order;
    for (int i =k-1;i>=0;i--)order.push_back(a[i]);
    for (int i=k;i<n;i++)order.push_back(a[i]);
    long long sum=0;
    int cnt=0;
    for (int m=1;m<=n;m++){
        long long x=order[m-1];
        if(x*(m-1)>=sum)cnt++;
        sum+=x;
    }
    if (cnt != k) {
        cout <<"NO\n";
        return;
    }
    cout << "YES\n";
    for (long long x : order) cout<<x<<" ";
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){     solve();
}
 
 
}
