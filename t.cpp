
// Sample code to perform I/O:

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100000];
int ans[100000];
int cur=0;
int check(int n)
{
	for(int i=0;i<cur;i++)
	{
		if(n%a[i]==0)return 0;
	}
	return 1;
} 
void soe()
{
	a[0]=2;a[1]=3;cur=2;
	for(int i=5;i<10000;i+=6)
	{
        // cout<<i<<' ';
		if(check(i))a[cur++]=i;
		if(check(i+2))a[cur++]=i+2;
	}
	ans[0]=0;
	for(int i=0;i<cur;i++)
	{
        // cout<<a[i]<<" ";
		ans[i+1]=ans[i]+a[i];
	}
}
int main() {
	int num;
	cin >> num;		
	int l,r;
    
        soe();
        // cout<<"fin";
	for(int i=0;i<num;i++)								
	{
		int fin=0;
		cin>>l>>r;
		auto it1=lower_bound(a,a+cur,l);
		for(auto i =it1;*i<=r;i++)
		{
			fin+=*i;
		}
		cout<<fin<<"\n";
	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
