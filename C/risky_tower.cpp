//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    long long n,m;
    cin>>n>>m;
    //the bigger the circle of the known,the greater the contact with the unknown.
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>v[i];
        if (i>0)
        {
            v[i]=min(v[i],v[i-1]);
        }
    }
    vector<vector<long long>> a(n, vector<long long>(m));
    for (long long i=0;i<n;i++)
    {
        for (long long j=0;j<m;j++)
        {
            cin>>a[i][j];
 
        }
 
    }
    priority_queue<long long> pq;
    long long mnn=m;//a5yeb cas ki deja tna7i starr bkollou
    for (long long i=n-1;i>=0;i--)
    {
        for (long long j=m-1;j>=0;j--)
        {
            pq.push(a[i][j]);
        }
        long long h=v[i],nb_times=0;
        queue<long long> q;
        while (h>0 and !pq.empty() and nb_times<mnn)
        {h-=pq.top();
            nb_times++;
            q.push(pq.top());
            pq.pop();
 
        }
        if (h<=0){mnn=min(mnn,nb_times);}
        while (!q.empty())
        {
            pq.push(q.front());
            q.pop();
        }
 
    }
    cout<<mnn<<endl;
 
 
 
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
