#include <bits/stdc++.h>
using namespace std;
int bitLength(long long x) {
    int len=0;
    while(x>0){len++;
        x >>= 1;}
    return len;
}
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    long long l=0,r=1,s,k=r+1,M=a[n-1];
    long long ans=0,frst=k;
    while (l<n-1)
    {
        while (r<n)
        { s=a[l]+a[r];
            if (k<=r)k=r+1;
            while (k<n and a[k]<s)
            {
                k++;
            }
            long long t=upper_bound(a.begin(),a.end(),M-s)-a.begin();
            t=max(t,r+1);
            ans +=max(0LL,k-t); 
            r++;
        }
        l++;
        r=l+1;
        k=r+1;
    }
 
    cout<<ans<<endl;
 
 
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
