// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int maxHeight(int height[],int width[],int length[],int n);

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	

 	int A[1000],B[1000],C[10001];
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		A[i]=a;
		B[i]=b;
		C[i]=c;
	}
	cout<<maxHeight(A,B,C,n)<<endl;
}
 
} // } Driver Code Ends


/*The function takes an array of heights, width and 
length as its 3 arguments where each index i value 
determines the height, width, length of the ith box. 
Here n is the total no of boxes.*/
struct S{
    public :
        int a,b,c;
    S(int x,int y, int z):a(x) ,b(y), c(z){}
    bool operator <(const struct S &other)const{
        if(a==other.a){
            if(b==other.b)
                return c>other.c;
            return b>other.b;
        }
        return a>other.a;
    }
};
int maxHeight(int height[],int width[],int length[],int n)
{
    vector<S> v;
    for(int i=0;i<n;i++){
        v.push_back(S(height[i],width[i],length[i]));
        v.push_back(S(height[i],length[i],width[i]));
        v.push_back(S(width[i],height[i],length[i]));
        v.push_back(S(width[i],length[i],height[i]));
        v.push_back(S(length[i],height[i],width[i]));
        v.push_back(S(length[i],width[i],height[i]));
    }
    sort(v.begin(),v.end());
    int h=0,l=INT32_MAX,w=INT32_MAX;
    int dp[v.size()];
    
    for(int i=0;i<v.size();i++){
        int tl,tw,th;
        tl=v[i].a;tw=v[i].b;th=v[i].c;
        dp[i]=th;
    }
    int g_mx=0;
    for(int i=1;i<v.size();i++){
        int tl,tw,th;
        tl=v[i].a;tw=v[i].b;th=v[i].c;
        int mx=0;
        for(int j=i-1;j>=0;j--)
        {
            int tl1,tw1,th1;
            tl1=v[j].a;tw1=v[j].b;th1=v[j].c;
            // cout<<tl<<" "<<tw<<" "<<th<<"\n";
            if(tw<tw1 && tl<tl1){
                mx=max(dp[j],mx);
            }
        }
        dp[i]+=mx;
        g_mx=max(g_mx,dp[i]);
    }
    return g_mx;
}