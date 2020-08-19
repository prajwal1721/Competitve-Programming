#include<iostream>
using namespace std;
int arr[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
int main(){
    int r;cin>>r;
    while(r--){
    int n;cin>>n;

    for(int i=9;i>=0;i--){
        int t=(n/arr[i]);
        n-=arr[i]*t;
        while(t)
        {
            cout<<arr[i]<<" ";
            t--;
        }
    }   
    cout<<"\n";
    }
}
