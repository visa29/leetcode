void swap(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
void moveZeroes(int* nums, int n) {
    int nzi = 0;
    for(int i = 0; i < n; i++) 
    {
        if(nums[i] != 0) 
        swap(&nums[i],&nums[nzi++]);
    }
}