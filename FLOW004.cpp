/*
 If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.
Input

The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.
Output

For each test case, display the sum of first and last digits of N in a new line.
Constraints

    1 ≤ T ≤ 1000
    1 ≤ N ≤ 1000000

Example

Input
3 
1234
124894
242323

Output
5
5
5
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,sum=0,n;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        n=arr[i];
     
    // Find total number of digits - 1 
    int digits = (int)log10(n); 
  
    // Find first digit 
    a = (int)(n / pow(10, digits)); 
  
   

      b = arr[i]%10;
      sum=a+b;
      cout<<sum<<endl;
        
    }
    sum=0;
    
	// your code goes here
	return 0;
}
