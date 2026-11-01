#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long> b(n);
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        if(i%2==0)b[i]=x;
        else b[i]=-x;
    }
    sort(b.rbegin(),b.rend());
    long long e=(n+1)/2;
    long long s=0;
    for(long long i=0;i<n;i++)
    {
        if(i<e)s+=b[i];
        else s-=b[i];
    }
    cout<<s<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
