// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Back-end complete function Template for C++

//Return the index of the character or return -1
int repeatedCharacter (string s) 
{ 
    //Your code here
    for(int i=0;i<s.length();i++) {
        for(int j=i+1;j<s.length();j++) {
            if(s[i]==s[j])
                return j;
        }
    }
    return -1;
} 

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    int index = repeatedCharacter(s); 
        if (index == -1) 
            cout<<-1<<endl;
        else
            cout<<s[index]<<endl;
	}
	return 0;
}
  // } Driver Code Ends
