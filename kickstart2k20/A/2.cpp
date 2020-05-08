#include<bits/stdc++.h> 
using namespace std; 
  
// Returns maximum possible equal sum of three stacks 
// with removal of top elements allowed 
int maxSum(int stack1[], int stack2[], int stack3[],  
                             int n1, int n2, int n3,int k) 
{ 
  int sum1 = 0, sum2 = 0, sum3 = 0; 
   
  // Finding the initial sum of stack1. 
  for (int i=0; i < n1; i++) 
      sum1 += stack1[i]; 
  
  // Finding the initial sum of stack2. 
  for (int i=0; i < n2; i++) 
      sum2 += stack2[i]; 
  
  // Finding the initial sum of stack3. 
  for (int i=0; i < n3; i++) 
      sum3 += stack3[i]; 
  
  // As given in question, first element is top 
  // of stack.. 
  int top1 =0, top2 = 0, top3 = 0; 
  int ans = 0; 
  while (k) 
  { 
      // If any stack is empty 
      if (top1 == n1 || top2 == n2 || top3 == n3) 
         return 0; 
      if (sum1 == sum2 && sum2 == sum3) 
         return sum1; 
      // removing its top element. 
      if (sum1 >= sum2 && sum1 >= sum3) 
         sum1 -= stack1[top1++]; 
      else if (sum2 >= sum3 && sum2 >= sum3) 
         sum2 -= stack2[top2++]; 
      else if (sum3 >= sum2 && sum3 >= sum1) 
         sum3 -= stack3[top3++]; 
         k--;
   } 
} 
int main()
{
   int q;cin>>q;
   while (q--)
   {
      int n,k,p;cin>>n>>k>>p;
      int s[3][n];
      for(int i=0;i<n;i++)
      {
         int t,j=0;
         while (j<p)
         {
            cin>>s[i][j++];
         }  
      }
      cout << maxSum((int*)s[0], s[1], s[2],n,n,n,k) << endl;
   }
   



}