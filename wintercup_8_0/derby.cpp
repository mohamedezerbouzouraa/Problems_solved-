//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    long long n,q;
    cin >> n>>q;
    vector<long long> a(n+1);
    vector<long long> esm(n+1,0),kadech_men5(n+1,0),kadech_men2(n+1,0);//5 w 2 premiers entre eux
    for(long long i=1;i<=n;i++)
    {
        cin >> a[i];
        long long v=a[i];
        long long z=0,c5=0,c2=0;
        while (v%10==0)
        {v/=10;z++;}
        while (v%2==0)
        {v/=2;
        c2++;
 
        }
        while (v%5==0 )
        {v/=5;c5++;
 
        }
        esm[i]=esm[i-1]+z;
        kadech_men5[i]=kadech_men5[i-1]+c5;
        kadech_men2[i]=kadech_men2[i-1]+c2;
    }
 
    while (q--)
    {
        long long l,r,k;
        cin >> l >> r >>k;
        long long z=esm[r]-esm[l-1];
        long long t5=kadech_men5[r]-kadech_men5[l-1];
        long long t2=kadech_men2[r]-kadech_men2[l-1];
        bool ok=(z+min(t2,t5 )>=k);
        cout<<(ok?"YES":"NO")<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
