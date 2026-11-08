#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n),b(n);
    long long nbpairs_a=0,nbpairs_b=0,nb_impairs_a=0,nb_impairs_b=0;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)nbpairs_a++;
        else nb_impairs_a++;
    }
    for(long long i=0;i<n;i++){
        cin>>b[i];
        if(b[i]%2==0)nbpairs_b++;
        else nb_impairs_b++;
    }
    if(k%2==0){
        if(nb_impairs_a>=nb_impairs_b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(nb_impairs_a<=nb_impairs_b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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
