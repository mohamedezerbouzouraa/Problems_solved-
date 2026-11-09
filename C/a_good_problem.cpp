//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
int nb_bits(long long x){
    int c=0;
    while(x>0){c++;x>>=1;}
    return c;}
void solve(){
    long long n,l,r,k;
    cin>>n>>l>>r>>k;
    if (n%2==1){cout<<l<<endl;return;}
    else if (n==2){cout<<-1<<endl;return;}
    else
    {long long x=1LL<<nb_bits(l);
        if (x>r){cout<<-1<<endl;return;}
        else
        {
            if (k<=(n-2)){cout<<l<<endl;return;}
            else{cout<<x<<endl;return;}
        }
 
 
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
