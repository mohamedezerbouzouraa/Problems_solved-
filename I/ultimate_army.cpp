#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    string s;
    cin >> n >> s;
 
    vector<int> parent(n + 1, 0);
    vector<int> st;                      
 
    int L = s.size();
    for (int i = 0; i < L; )
    {
        if (isdigit(s[i]))
        {
            int id = 0;
            while (i < L && isdigit(s[i]))  
                id = id * 10 + (s[i++] - '0');
 
            parent[id] = st.empty() ? 0 : st.back();
            st.push_back(id);
        }
        else
        {
            if (s[i] == ')') st.pop_back();
            i++;                            
        }
    }
 
    for (int i = 1; i <= n; i++)
        cout << parent[i] << (i < n ? ' ' : '\n');
}
