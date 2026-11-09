//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    long long posm=-1;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if (i==0)posm=i;
        else
        {
            if(a[i]<a[posm]){posm=i;}
 
        }
    }
    if(posm==n-1){cout<<posm<<endl;return;}
    for(long long i=posm+1;i<n;i++)
    {if (a[i]<a[i-1]){cout<<-1<<endl;return;}
 
    }
    cout<<posm<<endl;
 
 
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
