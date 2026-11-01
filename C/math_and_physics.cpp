#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    
    vector<long long> a(n);
    long long p=0;
    bool tous1=true;
    bool milieu=false;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        p+=a[i];
        if(a[i]>1)tous1=false;
        if(i>0&&i<n-1&&a[i]>=2)milieu=true;
    }
    if(tous1){cout<<-1<<endl;return;}
    if(n==2||milieu){cout<<p-1<<endl;return;}
    cout<<a[0]+a[n-1]-1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
