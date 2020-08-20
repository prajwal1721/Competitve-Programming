#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    int n = s.length(), f = 1,cnt=0;
    while (cnt<4 || f)
    {
        f = 0;
        for (int i = 0; i < s.length(); )
        {
            // cout<<i<<" ";
            if (st.empty() || st.top() != s[i])
            {
                st.push(s[i]);
                i++;
            }
            else
            {
                
                // cout<<st.top()<<" "<<s[i]<<"\n";
                while(i<n && st.top()==s[i])i++;
                st.pop();
                // cout<<i<<"\n";
                f = 1;cnt=0;
            }
        }
            s = "";
            while (!st.empty())
            {
                s += st.top();
                st.pop();
            }
            reverse(s.begin(), s.end());
            if(!f)cnt++;
        cout<<s<<"\n";
    }
    cout << s << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}