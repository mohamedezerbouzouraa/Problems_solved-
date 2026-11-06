//The more the buzzing, the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n;
    cin>>n;
    if(n%2==0){cout<<(n/2)*(n/2)<<endl;return;}
    cout<<(n/2)*(n-n/2)<<endl;
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){     solve();
}
 
 
}
