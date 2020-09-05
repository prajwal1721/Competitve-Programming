/**
 *  https://www.geeksforgeeks.org/next-greater-element/
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    int right[n+1]={0},left[n+1]={0};
    right[n-1]=-1;
    left[0]=-1;
    stack<int> st;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){

    }
    for(int i=n-2;i>=0;i--){

        if(st.empty()|| v[i]<v[st.top()]){
           if(st.empty())
                right[i]=-1;
            else{
                right[i]=st.top();
            }
            st.push(i);
        }
        else{
            while(!st.empty() && v[i]>=v[st.top()])st.pop();
            if(st.empty())right[i]=-1;
            else right[i]=st.top();
            st.push(i);
        }
    }
    while(!st.empty())st.pop();
    st.push(0);
    for(int i=1;i<n;i++){
        if(st.empty()|| v[i]<v[st.top()]){
            if(st.empty())
                left[i]=-1;
            else 
                left[i]=st.top();
            st.push(i);
        }
        else{
            while(!st.empty() && v[i]>=v[st.top()])st.pop();
            if(st.empty())left[i]=-1;
            else left[i]=st.top();
            st.push(i);
        }
 
    }
    for(int i=0;i<n;i++)cout<<right[i]<<" ";cout<<"\n";
    for(int i=0;i<n;i++)cout<<left[i]<<" ";cout<<"\n";
}