#include<iostream>
#include<vector>
using namespace std;
int main(){
    int mx=INT32_MIN,n;cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int t;cin>>t;nums.push_back(t);
    }
    vector<int> zero_st,zero_ed;
    zero_st.push_back(0);
    for(int i=0;i<n;i++){
        if(nums[i]==0){zero_ed.push_back(i);zero_st.push_back(i+1);}
    }

    zero_ed.push_back(n-1);
    if(zero_st.size()>2)mx=0;
    for(int j=0;j<zero_st.size();j++){
        vector<int> neg,idx;
        int cnt=0,f=0,tmp=1;
        
        for(int i=zero_st[j];i<=zero_ed[j];i++){
            tmp*=nums[i];
            if(nums[i]<0){neg.push_back(tmp);cnt++;idx.push_back(i);}
        }
        
        if(cnt%2){
            // cout<<zero_ed[j]-zero_st[j]<<" "<<cnt<<" "<<mx<<"\n";
            // cout<<neg[cnt-1]/nums[idx[cnt-1]]<<"\n";
            // cout<<tmp<<"\n";
            if(zero_ed[j]-zero_st[j]<=1 && cnt==1)mx=max(mx,neg[0]);
            else mx=max(mx,max(neg[cnt-1]/nums[idx[cnt-1]],tmp/neg[0]));
        }
        else mx=tmp;
    }
    cout<<mx<<"\n";
}
