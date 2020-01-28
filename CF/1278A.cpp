#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int t;
    string s1,s2;
    int front,rear,flag;
    cin>>t;
    while(t--)
    {   flag = 0;
        cin>>s1;
        cin>>s2;
        vector<char> pass(s1.begin(),s1.end()), h(s2.begin(),s2.end());
        sort(pass.begin(),pass.end());

        for(int i = 0 ; i < h.size(); i++)
        {
            vector<char> hash(s2.begin()+i,s2.begin()+i+pass.size());
            sort(hash.begin(),hash.end());
            if(pass == hash)
            {
                cout<<"YES"<<endl;
                flag =1;
                break;
            }
        
        }
                if(!flag)
            cout<<"NO"<<endl;
    }
}