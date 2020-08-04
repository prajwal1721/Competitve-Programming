#include<iostream>
using namespace std;
void call(int &x){
	x= x+10;
}
void call2(int *x){
	*x= *x+10;
}
void call3(int x){
	x= x+10;
}
int main(){
	int x=34;
	call(x);
	cout<<x<<"\n";

	call2(&x);

	cout<<x<<"\n";
	call3(x);
	cout<<x<<"\n";
}