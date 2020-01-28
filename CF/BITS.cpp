// CPP program to find MSB number for given n. 
#include <iostream> 
using namespace std; 

int setBitNumber(int n) 
{ 
	// Below steps set bits after 
	// MSB (including MSB) 

	// Suppose n is 273 (binary 
	// is 100010001). It does following 
	// 100010001 | 010001000 = 110011001 
	n |= n >> 1; 
    cout<<n<<"\n";
	// This makes sure 4 bits 
	// (From MSB and including MSB) 
	// are set. It does following 
	// 110011001 | 001100110 = 111111111 
	n |= n >> 2; 
    cout<<n<<"\n";

	n |= n >> 4; 
    cout<<n<<"\n";

	n |= n >> 8; 
    cout<<n<<"\n";
	n |= n >> 16; 
    cout<<n<<"\n";

	// Increment n by 1 so that 
	// there is only one set bit 
	// which is just before original 
	// MSB. n now becomes 1000000000 
	n = n + 1; 
    cout<<n<<"\n";

	// Return original MSB after shifting. 
	// n now becomes 100000000 
	return (n >> 1); 
} 

// Driver code 
int main() 
{ 
	int n = 108454 ; 
	cout << setBitNumber(n); 
	return 0; 
} 
