//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<pair<long long,long long>> a(n);
    map<long long,long long> mpx, mpy;
    for (long long i=0;i<n;i++) {
        cin>>a[i].first>>a[i].second;
        mpx[a[i].first]++;
        mpy[a[i].second]++;
    }
    if (n==1) { cout << 1 << endl; return; }
 
    priority_queue<pair<long long,long long>> maxX, maxY;
    priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long,long long>>> minX, minY;
    for (auto &e : mpx) { maxX.push(e);
    minX.push(e);
        
    }
    for (auto &e:mpy){maxY.push(e);
    minY.push(e);
        
    }
 
    long long best =(maxX.top().first-minX.top().first+1)*(maxY.top().first-minY.top().first+1);
 
    for (long long i = 0; i < n; i++) {
        long long x = a[i].first, y = a[i].second;
        bool r1 = false, r2 = false, r3 = false, r4 = false;
        pair<long long,long long> d1, d2, d3, d4;
 
        if (minX.top().first==x and  minX.top().second==1){d1=minX.top();
        minX.pop();
        r1 = true;
            
        }
        if (maxX.top().first==x and maxX.top().second==1) {d2=maxX.top();
        maxX.pop();
        r2 = true; }
        
        if (minY.top().first==y and minY.top().second==1) {d3=minY.top();minY.pop();
        r3=true; }
        if (maxY.top().first==y and maxY.top().second==1) { d4=maxY.top();maxY.pop(); r4 = true; }
 
        long long c1= maxX.top().first-minX.top().first+1;
        long long c2= maxY.top().first - minY.top().first + 1;
        if (c1 * c2!=n-1) best=min(best,c1*c2);
        else best=min(best,min((c1+1)*c2,c1*(c2+1)));
 
        if (r1) minX.push(d1);
        if (r2) maxX.push(d2);
        if (r3) minY.push(d3);
        if (r4) maxY.push(d4);
    }
    cout << best << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) solve();
}
