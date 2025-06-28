/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int n1, int* nums2, int n2, int* rs) {
int * ans = malloc(sizeof(int)*n1);
    *rs=n1;
    for(int i=0;i<n1;i++)
    {
        int flag =1;
        for(int j=0;j<n2;j++)
        {
            if(nums1[i]==nums2[j])
            {
                for(int k=j+1;k<n2;k++)
                {
                if(nums2[j]<nums2[k])
                {
                ans[i]= nums2[k];
                flag =0;
                break;
                }
                }
            }
            if(flag==1)
            ans[i]= -1;
        }
    }
    return ans;
}