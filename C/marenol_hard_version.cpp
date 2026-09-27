#include <bits/stdc++.h>
#include<iterator>
using namespace std;
 
 
 
void solve()
{
    long long n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) { cout << 0 << endl; return; }
 
    long long nb1=0, nb2=0;
    for (long long i=0;i<n;i++)
    {
        if (s1[i]=='1') nb1++;
        if (s2[i]=='1') nb2++;
    }
    if (nb1 != nb2) { cout << -1 << endl; return; }
 
    vector<long long> Aeven, Beven, Aodd, Bodd;
    for (long long i=0;i<n;i++)
    {
        if (s1[i] != s2[i])
        {
            bool isA = (s1[i]=='1');
            if (i%2==0) { if (isA) Aeven.push_back(i); else Beven.push_back(i); }
            else        { if (isA) Aodd.push_back(i);  else Bodd.push_back(i); }
        }
    }
 
    if (Aeven.size()!=Beven.size() or Aodd.size()!=Bodd.size())
    {
        cout << -1 << endl; return;
    }
 
    long long cost = 0;
    for (size_t k=0;k<Aeven.size();k++) cost += llabs(Aeven[k]-Beven[k]);
    for (size_t k=0;k<Aodd.size();k++)  cost += llabs(Aodd[k]-Bodd[k]);
 
    cout << cost/2 << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t != 0)
    {
        solve();
        t--;
    }
}
