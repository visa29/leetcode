void swap(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
void sortColors(int* nums, int n) {
    int zero=0,two=n-1,i=0;
    while(i<=two)
    {
        if(nums[i]==0)
        swap(&nums[i++],&nums[zero++]);
        else if(nums[i]==1) ++i;
        else swap(&nums[i],&nums[two--]);
    }
    
}
