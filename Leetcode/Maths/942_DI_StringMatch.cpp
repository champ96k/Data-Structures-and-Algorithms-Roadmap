
/*
942. DI String Match

Given a string S that only contains "I" (increase) or "D" (decrease), let N = S.length.

Return any permutation A of [0, 1, ..., N] such that for all i = 0, ..., N-1:

If S[i] == "I", then A[i] < A[i+1]
If S[i] == "D", then A[i] > A[i+1]
 

Example 1:

Input: "IDID"
Output: [0,4,1,3,2]
*/

class Solution {
public:
    vector<int> diStringMatch(string S) {
        
        vector<int> v;
        int l = S.length();
        int small=0,largh=l;
        
        for(int i=0;i<l;i++) {
            if(S[i]=='I') {
                v.push_back(small++);
            }else if(S[i]=='D') {
                v.push_back(largh--);
            }
        }
        
        if(S[l-1] == 'D')
            v.push_back(small);
        else
            v.push_back(largh);
        
        return v;
    }
};
