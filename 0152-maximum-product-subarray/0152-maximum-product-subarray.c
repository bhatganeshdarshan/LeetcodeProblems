void swp(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int maxProduct(int* nums, int numsSize) {
    int res = nums[0];
    int maxp=nums[0];
    int minp=nums[0];

    for(int i = 1; i<numsSize ;i++){
        if(nums[i]<0){
            swp(&maxp,&minp);
        }
        maxp=(nums[i]>nums[i]*maxp)?nums[i]:nums[i]*maxp ;
        minp=(nums[i]<nums[i]*minp)?nums[i]:nums[i]*minp ;
        res = (maxp>res)?maxp:res ;
    }
    return res;
}