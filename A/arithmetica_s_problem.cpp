#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long l,r,k;
    cin>>l>>r>>k;
    cout<<r/k - l/k + (l%k==0) <<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
 
}
