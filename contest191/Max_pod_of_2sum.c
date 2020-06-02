int maxProduct(int* nums, int numsSize){
int max=0,smax=0,t,ind;
    for(int m=0;m<numsSize;m++){
        if(nums[m]>=max) {
            ind=m;
            max=nums[m];
        }
    } 
    for(int m=0;m<numsSize;m++){
     if((nums[m]<=max)&&(nums[m]>smax)&&(ind!=m))
        smax=nums[m];
    }
    
    t=(smax-1)*(max-1);
    return t;
}
