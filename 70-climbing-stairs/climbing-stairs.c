int f[46] = {0,1,2}; //46 because max. n is 45 (45+1)
int climbStairs(int n) {
    if(n==1 || n==2) return n;
    if(f[n] != 0) return f[n];
    return f[n] = climbStairs(n-1) + climbStairs(n-2);
}