// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/arjit-and-printing-press/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;cin>>q;
    while (q--)
    {
        string s,s1;cin>>s>>s1;
        sort(s1.begin(),s1.end());
        int j=0;
        for(auto i=s1.begin();j<s.length()&&i!=s1.end();)
        {
            if(s[j]>*i){s[j]=*i;i++;}
            j++;
        }
        cout<<s<<"\n";
    }
    
}