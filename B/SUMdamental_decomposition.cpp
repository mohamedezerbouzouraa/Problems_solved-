//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long nb_uns(long long x){
    long long c=0;
    while(x>0){c+=x&1;x>>=1;}
    return c;}
 
void solve(){
    long long n,x;
    cin>>n>>x;
    if (x==0)
    {
        if (n==1){cout<<-1<<endl;return;}
        if (n%2==0){cout<<n<<endl;return;}
        cout<<n-2+2+3<<endl;
    }
    else
    {long long pn=nb_uns(x);
        if (n<=pn){cout<<x<<endl;return;}
        else
        {
            if ((n-pn)%2==0){cout<<x+n-pn<<endl;return;}
            if (x==1){cout<<n+3<<endl;return;}
            cout<<x+n-pn+1<<endl;
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
