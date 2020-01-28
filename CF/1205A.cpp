// C++ program to check if elements of array 
// can be arranged in Circle with consecutive 
// difference as 1 

#include <bits/stdc++.h> 
using namespace std; 

// Function to check if elements of array can 
// be arranged in Circle with consecutive 
// difference as 1 
int circlePossible(int arr[], int n) 
{ 
	multiset<int> s; 

	// Initialize the multiset with array 
	// elements 
	for (int i = 0; i < n; i++) 
		s.insert(arr[i]); 

	// Get a pointer to first element 
	int cur = *s.begin(); 

	// Store the first element in a temp variable 
	int start = cur; 

	// Remove the first element 
	s.erase(s.begin()); 

	// Traverse until multiset is non-empty 
	while (s.size()) { 

		// Elements which are 1 greater than the 
		// current element, remove their first occurrence 
		// and increment curr 
		if (s.find(cur + 1) != s.end()) 
			s.erase(s.find(++cur)); 

		// Elements which are 1 less than the 
		// current element, remove their first occurrence 
		// and decrement curr 
		else if (s.find(cur - 1) != s.end()) 
			s.erase(s.find(--cur)); 

		// If the set is non-empty and contains element 
		// which differs by curr from more than 1 
		// then circle is not possible return 
		else { 
			cout << "NO"; 
			return 0; 
		} 
	} 

	// Finally, check if curr and first differs by 1 
	if (abs(cur - start) == 1) 
		cout << "YES"; 
	else
		cout << "NO"; 

	return 0; 
} 

// Driver code 
int main() 
{ 
	int arr[] = {1 ,4 ,5 ,2 ,3 ,6  }; 

	int n = sizeof(arr) / (sizeof(arr[0])); 

	circlePossible(arr, n); 

	return 0; 
} 
