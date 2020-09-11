/*
Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

Example 1:

Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: Reversing groups in size
k = 3, first group consists of elements
1, 2, 3. Reversing this group, we have
elements in order as 3, 2, 1.
Example 2:

Input:
N = 4, K = 3
arr[] = {5,6,8,9}
Output: 8 6 5 9
Explanation: Our array is 5 6 8 9. 
The value of k is 3. So we reverse 
it in groups of 3.  After reversing,
it becomes 8 6 5 9.
Your Task:
The task is to complete the function reverseInGroups() which reverses elements of the array in groups and returns the array. The printing of array is done by drivercode.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/

#include <bits/stdc++.h>
using namespace std;

vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
   
    long long t;
    for(int i=0;i<n;i=i+k) 
        {
            if(i>(n/k*k-1))
            reverse(mv.begin()+i,mv.end());
            else
                reverse(mv.begin()+i,mv.begin()+i+k);
        }
    return mv;

    
}

// { Driver Code Starts.

int main() {
    
    int t; //Testcases
    cin >> t; //input the number of testcases

    while(t--){ //while testcases exist

        int n;
        cin >> n; //input the size of array
        
        vector<long long> mv; // Declaring a vector mv
        
        int k;
        cin >> k; //input k 

        for(long long i =0;i<n;i++){
            long long x;
            cin >> x; //input element of array

            mv.push_back(x); //push the element into vector
        }
        
        mv = reverseInGroups(mv, n, k);
        
        for(long long i =0;i<n;i++){
            cout << mv[i] << " "; //Just print the vector
        }

        cout << endl;
        
       

    }

}
  // } Driver Code Ends
