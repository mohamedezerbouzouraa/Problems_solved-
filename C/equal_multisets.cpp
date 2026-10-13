#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
 
 
int nbBits(long long x)
{
    int c = 0;
    while (x > 0)
    {
        c++;
        x /= 2;
    }
    return c;
}
 
void solve()
{
    long long n,k;
    cin >> n>>k;
    vector<long long> a(n);
    bool p=false;
    map<long long, long long> mp;
    map<long long, long long>mp2;
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        if (mp2.find(a[i]) == mp2.end())
        {
            mp2[a[i]] = 1;
        }
        else
        {
            p=true;
        }
        mp[a[i]] = i+1;
    }
    mp2.clear();
    vector<long long> b(n);
    map<long long, long long>mp3;
    for (long long i = 0; i < n; i++)
    {
        cin>>b[i];
        if (b[i]!=-1)
        {
            if (mp3.find(b[i]) == mp3.end() )
            {
                mp3[b[i]] = 1;
            }
            else
            {
                p=true;
            }
        }
 
    }
    if (p==true){cout<<"NO"<<endl;return;}
    if (n>=2*k)
    {for (long long i = 0; i < n; i++)
    { if (b[i]!=-1)
    {
        if (mp[b[i]]!=i+1){cout<<"NO"<<endl;return;}
    }
 
    }cout<<"YES"<<endl;return;
 
    }
    else
    {
        for (long long i = 0; i < n; i++)
        { if (b[i]!=-1)
        {
            if (i+1<=n-k)
            {if (mp[b[i]]!=i+1){cout<<"NO"<<endl;return;}
 
            }
            else if (i+1>k)
            {
                if (mp[b[i]]!=i+1){cout<<"NO"<<endl;return;}
            }
            else
            {
                if (mp[b[i]]>k or mp[b[i]]<=n-k){cout<<"NO"<<endl;return;}
            }
        }
 
        }cout<<"YES"<<endl;return;
 
    }
 
    }
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
