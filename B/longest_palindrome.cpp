#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;
 
void solve()
{
    long long n,m;
    cin >> n>>m;
    vector<string> a(n);
    vector<pair<long long, long long>> b;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string firstpalind;
    bool p=false;
    for (long long i = 0; i < n; i++)
    {
        bool nowmodif=false;
        if (p==false)
        {
            long long t1=0,t2=m-1;
            while (t1<m and a[i][t1]==a[i][t2])
            {
                t1++;
                t2--;
            }
            if (t1==m){firstpalind=a[i];p=true;nowmodif=true;}
        }
        if (nowmodif==false){
            for (long long j = i+1; j < n; j++)
            {
                long long x=0;
                while (x<m and a[i][x]==a[j][m-1-x])
                {
                    x++;
                }
                if (x==m){b.push_back({i,j});}
            }
        }
    }
    string s;
    for (long long i = 0; i < (long long)b.size(); i++)
    {
        s=s+a[b[i].first];
    }
    s=s+firstpalind;
    for (long long i = 0; i < (long long)b.size(); i++)
    {
        s=s+a[b[b.size()-1-i].second];
    }
    cout<<s.length()<<endl;
    cout<<s<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
