class Solution {
public:
    void numToArr(int n,vector<int> &num2){
        // vector<int> num2 ;
        while(n!=0)
        {
            int r= n%10;
            num2.push_back(r);
            n=n/10;
        }
        
    }
    vector<int> addToArrayForm(vector<int>& num1, int k) {
        
        vector<int> num2; 
        numToArr(k,num2);
        reverse(num1.begin(),num1.end());
        // reverse(num2.begin(),num2.end());
        if(num1.size() > num2.size()){
            swap(num1,num2);
        }
        vector<int> result ;
        int carry = 0 ;
        for(int i =0 ; i< num1.size();i++){
            int sum= num1[i]+num2[i]+carry ;
            int output_digit= sum%10;
            carry = sum/10 ;
            result.push_back(output_digit);
        }
        for(int i= num1.size() ; i< num2.size() ; i++ ){
            int sum = num2[i] + carry ;
            int output_digit = sum % 10 ;
            carry = sum / 10 ;
            result.push_back(output_digit);
        }
        if(carry){
            result.push_back(1) ;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};