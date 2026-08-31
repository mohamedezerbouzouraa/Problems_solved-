#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
long long pgcd(long long a, long long b)
{
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long ppcm(long long a, long long b)
{
    return a / pgcd(a, b) * b;
}
long long max(long long a,long long b)
{if (a>b) return a;else return b;




}
void solve()
{
    long long a,b,c,m;
    cin >> a >> b >> c >> m;
    long long ab = ppcm(a,b);
    long long ac = ppcm(a,c);
    long long bc = ppcm(b,c);
    long long abc = ppcm(ppcm(a,b),c);
    cout<<2*((long long )(m/abc))+3*max(((long long)(m/ab)-(long long)(m/abc)+(long long)(m/ac)-(long long)(m/abc)),0)+6*max((long long)(m/a)-(long long)(m/ab)-(long long)(m/ac)+(long long )(m/abc),0)<<" ";
    cout<<2*((long long )(m/abc))+3*max(((long long)(m/ab)-(long long)(m/abc)+(long long)(m/bc)-(long long)(m/abc)),0)+6*max((long long)(m/b)-(long long)(m/ab)-(long long)(m/bc)+(long long )(m/abc),0)<<" ";
    cout<<2*((long long )(m/abc))+3*max(((long long)(m/ac)-(long long)(m/abc)+(long long)(m/bc)-(long long)(m/abc)),0)+6*max((long long)(m/c)-(long long)(m/ac)-(long long)(m/bc)+(long long )(m/abc),0)<<endl;



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
