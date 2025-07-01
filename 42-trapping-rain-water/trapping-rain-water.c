int trap(int* h, int n) {
int lm = 0 , rm = 0 , right = n-1 , left = 0, res = 0;  
while (left < right)
{
    if ( h[left] < h[right])
    {
        if (lm < h[left])
            lm = h[left];
        else 
            res += (lm - h[left]);
            ++left;
    }
    else
    {
        if (rm < h[right])
        {
            rm = h[right];
        }
        else 
            res += rm - h[right];
            --right;
    }
}
    return res;
}