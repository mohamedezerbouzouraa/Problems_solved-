//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{long long n,m;
    cin>>n>>m;
    priority_queue<long long> pqn,pqm;
    long long x,y;
    for(int i=0;i<n;i++)
    {cin>>x;
        pqn.push(x);
 
    }
    for(int i=0;i<m;i++)
    {
        cin>>y;
        pqm.push(y);
    }
    bool alices_turn=true;
    while(!pqn.empty() and !pqm.empty())
    { if(alices_turn)
    {
        long long p1=pqn.top(),p2=pqm.top();
        if (p1>=p2)
        {
            pqm.pop();
        }
        else
        {
            pqm.pop();
            pqm.push(p2-p1);
        }
        alices_turn=false;
    }
        else
        {
            long long p1=pqn.top(),p2=pqm.top();
            if (p1<=p2)
            {
                pqn.pop();
            }
            else
            {
                pqn.pop();
                pqn.push(p1-p2);
            }
            alices_turn=true;
        }
 
    }
    cout << (pqm.empty()?"Alice":"Bob") << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) { solve(); }
}
