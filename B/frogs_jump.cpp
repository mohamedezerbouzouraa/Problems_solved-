#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int cnt=0;
    for(char c:a) if(c=='f') cnt++;
    for(char c:b) if(c=='f') cnt++;
    cout<<cnt%2<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
