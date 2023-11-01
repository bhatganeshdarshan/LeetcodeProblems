class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char, int > hashmap;
       for(int i = 0 ;s[i]!='\0';i++){
           hashmap[s[i]]++;
       }
       for(int i=0;s[i]!='\0';i++){
           if(hashmap[s[i]]>1) continue;
           else return i;
       }
       return -1;
    }
};