//Gale Shaplet stable matching algo
#include<iostream>
#include<vector>
using namespace std;
vector<pair<string,string>> match(vector<string> men[],vector<string> women[],int n,vector<pair<string,string>> ans)
{
    int cur_woman[n+1];
    bool men_paired[n]={false};
    bool women_paired[n]={false};
    int paired_count=0;
    while (paired_count!=n)
    {
        int man;
        for(int i=0;i<n;i++)
            if(!men_paired[i])
                man=i;
        for(auto i=men[man].begin();i!=men[man].end();i++)
        {
            if(!women_paired[(*i)[1]-'0'])
                {cur_woman[(*i)[1]-'0']=man;men_paired[man]=1;paired_count++;}
            else
            {
                for(auto p=women[(*i)[1]-'0'].begin();p!=women[(*i)[1]-'0'].end();p++)
                {
                    if((*p)[1]-'0'==man){
                        men_paired[cur_woman[(*i)[1]-'0']]=0;
                        men_paired[man]=1;
                        cur_woman[(*i)[1]-'0']=man;
                        break;
                    }
                    else if(cur_woman[(*i)[1]]==(*p)[1]-'0') 
                        break;
                }
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        ans.push_back(pair<string,string>("M"+char(cur_woman[i]+'0'),"M"+char(i+'0')));
    }
    return ans;
}
int main()
{
    cout<<"All set\n";
}