//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long nb_uns(long long x){
    long long c=0;
    while(x>0){c+=x&1;x>>=1;}
    return c;}
 
void solve(){
    long long n;
    cin>>n;
    long long xk,yk,xd,yd;
    cin>>xk>>yk>>xd>>yd;
    if (xk==xd)
    {
        if(yk>yd){cout<<n-yk+(yk-yd)<<endl;return;}
        else{cout<<yk+(yd-yk)<<endl;return;}
    }
    else if (yk==yd)
    {if(xk>xd){cout<<n-xk+(xk-xd)<<endl;return;}
    else{cout<<xk+(xd-xk)<<endl;return;}
 
    }
    else
    {
        if (xk>=xd and yk>=yd){cout<<max(n-xd,n-yd)<<endl;return;}
        else if (xk<=xd and yk>=yd){cout<<max(xd,n-yd)<<endl;return;}
        else if (xk>=xd and yk<=yd){cout<<max(n-xd,yd)<<endl;return;}
        else
        {cout<<max(xd,yd)<<endl;return;}
 
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
