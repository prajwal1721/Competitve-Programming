#include<iostream>
using namespace std; 
#define mod 1000000007

void solve()
{
    string T;getline(cin,T);
    string S;cin>>S;
    int fault[200]={0},number[200]={0};
    for(int i=0;i<200;i++){fault[i]=0;number[i]=0;}
    for(int i=0;i<(int)S.length();i++){
        fault[(int)S[i]]=1;
        number[(int)S[i]]=i+1;
    }
    int cost=0;
    for(int i=0;i<(int)T.length();){
        if(fault[(int)T[i]]){
            int j=i,mx=0,step=0,moveBack=0;
            int tempfreq[200]={0};

            // cheking the contiguous segment of faults
            while(j<(int)T.length() && fault[(int)T[j]] && !tempfreq[(int)T[j]] && number[(int)T[j]]>mx){
                tempfreq[(int)T[j]]=1;
                mx=number[(int)T[j]];
                j++;
            }
            
            // calulating cost
            for(int k=(int)S.length()-1,cur=j-1;k>=0;k--){
                if(S[k]==T[cur]){moveBack++;cur--;}
                step++;
            }
            int repeated=0;
            // removing duplicates 
            for(int k=0;k<max(j-i,0);k++){
                if(S[k]==T[k+i]){repeated++;}
                else break;
            }
            cost+=step+moveBack-2*repeated+1;
            i=j;
        }
        else
            i++;
    } 
       
    cout<<cost;

}


int main()
{ 
    // cout<<"Hi test complete\n";
        solve();
    return 0;
}