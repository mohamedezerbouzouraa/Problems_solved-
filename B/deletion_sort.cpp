#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    vector<long long> x(n);
    vector<long long> b=a;
    sort(b.begin(),b.end());
    if (b==a){cout<<n<<endl;return;}
    cout<<1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
