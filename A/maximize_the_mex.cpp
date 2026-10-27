
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=n-k+1;
    set<int>seen;
    for(int i=0;i<p;i++)
    {
        seen.insert(a[i]);
    }
    int x=0;
    while(seen.count(x)) x++;
    if(x==p)
    {
        cout<<-1<<endl;
        return;
    }
    int pos_x=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x) pos_x=i;
    }
    int pos_mx=0;
    for(int i=0;i<p;i++)
    {
        if(a[i]>a[pos_mx]) pos_mx=i;
    }
    cout<<pos_mx+1<<" "<<pos_x+1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
