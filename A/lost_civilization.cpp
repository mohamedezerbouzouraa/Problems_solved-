//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long N=1000000;
vector<bool> comp(N+1);
vector<long long> primes;
long long check(long long p,const vector<long long>&a){
    long long fst = p;
    long long ans = 1;
    while (p+1<(long long)a.size()) {
        if (a[p+1]>a[p]) {
            if (a[p+1]==a[p]+1) {ans++;p++;}
            else return ans;
        }
        else if (a[p+1]<a[p]) {
            if (a[p+1]>a[fst]){ans++;p++;}
            else return ans;
        }
        else {
            if (a[p] ==a[fst]) return ans;
            ans++;p++;
        }
    }
    return ans;
}
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for (long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long curr=0,ezer=0;
    while (curr<n)
    {
        curr+=check(curr,a);
        ezer++;
    }
    cout<<ezer<<endl;
 
 
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}
