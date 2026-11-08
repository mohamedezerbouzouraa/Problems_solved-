//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long N=1000000;
vector<bool> comp(N+1);
vector<long long> primes;
 
 
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for (long long int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    vector<long long> x(n);
    iota(x.begin(),x.end(),0);
    sort(x.begin(),x.end(),[&a](long long int i,long long int j){return a[i]<a[j];});
    long long p=0;
    for (long long int i=0;i<n;i++)
    {
        while (!(primes[p]>=a[x[i]])){p++;}
        a[x[i]]=primes[p];
    }
    for (long long int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    comp[0]=false;
    comp[1]=false;
    for (long long int i=2;i<=N;i++)
    {if (!comp[i])
    {primes.push_back(i);
        for (long long int j=i*i;j<=N;j+=i)
        {
            comp[j]=true;
        }
 
    }
 
    }
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}
