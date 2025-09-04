int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
int i,j;
if (numsSize<2){*returnSize=0;return NULL;}
for(i=0;i<numsSize;i++){
    for(j=i+1;j<numsSize;j++){
        if(nums[i]+nums[j]==target){
            int* a= malloc(2*sizeof(int));
            if(!a){ *returnSize=0; return NULL; }
             a[0]=i;
            a[1]=j;
            *returnSize=2;
            return a;
            }
     }
}
         *returnSize=0;
        return NULL;
}
