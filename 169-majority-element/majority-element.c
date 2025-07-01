int majorityElement(int* nums, int n) {
int voter = nums[0];
int voteCount =1;   
for (int i = 1; i< n ; i++)
{
    if( nums[i] == voter) ++ voteCount;
    else --voteCount;
    if (voteCount == 0)
    {
        voter = nums[i];
        voteCount = 1;
    }
} 
return voter;   
}