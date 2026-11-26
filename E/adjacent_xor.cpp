//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long> b(n);
    for(long long i=0;i<n;i++)
    {
        cin>>b[i];
    }
    if (a[n-1]!=b[n-1]){cout<<"NO"<<endl;return;}
 
        for (long long i=0;i<n-1;i++)
        { if ((a[i]^a[i+1])==b[i])
        {
            a[i]=b[i];
 
        }
 
        }
 
 
    for (long long i=n-2;i>=0;i--)
        { if ((a[i]^a[i+1])==b[i])
        {
            a[i]=b[i];}
 
        }
 
 
    for (long long i=0;i<n;i++)
    {
        if (a[i]!=b[i]){cout<<"NO"<<endl;return;}
    }
    cout<<"YES"<<endl;
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
}
