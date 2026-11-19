//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
const long long M=1e9+7;
long long power(long long b, long long e)
{
    long long r = 1; b %= M;
    while (e) { if (e & 1) r = r * b % M;b=b*b%M; e >>= 1; }
    return r;
}
long long factorial(long long n)
{
    if (n==1)return 1;
    if (n==0)return 0;
    return n*factorial(n-1);
}
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    map<long long,long long> mp;
    for (long long i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    long long m=0;
    if (mp.find(-1)!=mp.end())m= mp[-1];
 
    long long x=1;
    for (auto it : mp)
    {
        if (it.first == -1) continue;
        x =x*power(2,it.second-1)%M;
    }
 
    long long ans_even=(m==0)?x: power(2,m -1)*x% M;
    long long P=0;
    for (auto it:mp)
    {
        if (it.first==-1) continue;
        if (mp.find(it.first+1)!=mp.end()) P++;
    }
    long long ans_odd=(m==0)? 0 :power(2,m-1)*x%M*P%M;
    cout<<(ans_even+ans_odd)%M<<'\n';
 
 
}
 
 
 
 
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
