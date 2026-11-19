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
    vector<long long> a(n+1);
    a[0]=0;
    long long best, indx=-1;
    vector<long long> l7ouloul_el_momkna;
    vector<long long> pref(n+1);
    pref[0]=0;
    for (long long i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]>0){l7ouloul_el_momkna.push_back(i);}
        pref[i]=pref[i-1]+llabs(a[i]);
    }
    vector<long long> suff(n+2);
    suff[n+1]=0;
    for (long long i=n;i>=1;i--)
    {suff[i]=suff[i+1]+a[i];}
    best=suff[1];
    for (auto x:l7ouloul_el_momkna)
    {
        long long val=suff[x+1]-a[x]+pref[x-1];
        if (val>best)
        {
            best=val;
            indx=x;
        }
    }
    vector<long long> ops;
    long long in_a_row=0;
    for (long long i=1;i<indx;i++)
    {
        if (a[i]>0)
        {in_a_row++;
 
        }
        else
        {
            if (in_a_row>0)
            {
                ops.push_back(i-1);
                if (i-1-in_a_row>=1) ops.push_back(i-1-in_a_row);
                in_a_row=0;
            }
        }
 
    }
    if (in_a_row>0)
    {
        ops.push_back(indx-1);
        if (indx-1-in_a_row>=1) ops.push_back(indx-1-in_a_row);
    }
    ops.push_back(indx);
    if (indx==-1)
    {
        cout<<0<<endl;
        cout<<endl;return;
    }
    cout<<ops.size()<<endl;
    for (auto x:ops)
    {
        cout<<x<<" ";
    }
    cout<<endl;
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
