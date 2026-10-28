#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long> great_than_k;
    vector<long long> less_than_k;
    vector<long long> diff_k;
    long long x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if (x==2){great_than_k.push_back(y);}
        else if (x==1){less_than_k.push_back(y);}
        else{diff_k.push_back(y);}
    }
    sort(great_than_k.begin(),great_than_k.end());
    sort(less_than_k.begin(), less_than_k.end(), greater<long long>());
    sort(diff_k.begin(), diff_k.end());
    long long start,end;
    start=less_than_k[0];
    end=great_than_k[0];
    if (start>end){cout<<0<<endl;return;}
    long long p=lower_bound(diff_k.begin(),diff_k.end(),start)-diff_k.begin();
    long long p2=lower_bound(diff_k.begin(),diff_k.end(),end)-diff_k.begin();
    if (p2<diff_k.size() and diff_k[p2]==end)
    {
        p2++;
    }
    if (p2>p){p2=p2-p;}
    else if (p2==p){p2=0LL;}
    cout<<end-start+1-p2<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
