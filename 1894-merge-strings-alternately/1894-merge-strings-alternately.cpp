class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        string s3;
        int i=0 ; 
        int j=0 ;
        while(i<s1.length() && j<s2.length()){
            s3+=s1[i] ;
            s3+=s2[j];
            i++;
            j++;
        }
        while(i<s1.length()){
            s3+=s1[i];
            i++;
        }
        while(j<s2.length()){
            s3+=s2[j];
            j++;
        }
        return s3;
    }
};