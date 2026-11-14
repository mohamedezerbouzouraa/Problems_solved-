//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long a_puiss_b(long long a,long long b)
{
    long long p = 1;
    for (int j = 0; j < b; j++) p *= a;
    return p;
}
void solve() {
    long long k, l1, r1, l2, r2;
    cin>>k>>l1>>r1>>l2>>r2;
 
    long long N=(long long)floor(log((double)r2/l1)/log((double)k));
    long long n=(long long)ceil(log((double)l2/r1)/log((double)k));
    n=max(n,0LL);
    long long sum=0;
    for (long long i=n; i<=N; i++)
    { long long p=a_puiss_b(k,i);
        long long hi=min(r1,r2/p);
        long long lo=max(l1,(l2+p-1)/p);
        sum +=max(0LL,hi-lo+1);
    }
    cout<<sum<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
