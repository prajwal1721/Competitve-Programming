#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;cin>>q;
    while (q--)
    {
        int n,cn,k;cin>>n>>k;cn=n;
        vector<string>v;
        while (cn--)
        {
            string s;
            cin>>s;v.push_back(s);
        }
        sort(v.begin(),v.end());
        int visited[n]={0};
        int final_ans=0;
        for(int i=0;i<n-k-1;i++)        
        {
            if(visited[i])continue;
            queue<int> check;
            int visit[n];
            memset(visit,1,n);int f=1;
            int min=v[i].size();
            int j=0;
            int temp_ans=0;
            while (f && j<min)
            {       
            cout<<j<<"\n";
            vector <int> cnt[26];
            for(int hi=i;hi<k+i;hi++)
            {
                cout<<"\t"<<v[hi]<<"\n";
                if(visit)cnt[v[hi][j]-'A'].push_back(i);
            }
            f=0;
            int ii;
            for(ii=0;ii<26;ii++)
            {
                if(cnt[ii].size()>=k){f=1;break;}
            }
            if(!f ){f=0;final_ans+=temp_ans;
            if(temp_ans)
            for(int tp=0;tp<n;tp++){if(visit[tp])visited[tp]=1;}}
            else
            {
                temp_ans++;
                memset(visit,0,n);
                for(auto ij=cnt[ii].begin();ij<cnt[ii].end();ij++)
                    visit[*ij]=1;
                    j++;
            }
            cout<<final_ans<<" "<<temp_ans<<" "<<f<<"\n";
            }
            cout<<"end\n";
        }
    
            cout<<final_ans<<"\n";
    }
    
}