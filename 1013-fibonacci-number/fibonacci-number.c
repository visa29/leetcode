//FORMULA METHOD
int fib(int n){
    return (int) (round((pow((1 + sqrt(5))/2, n)) / sqrt(5)));
}

/* ITERATIVE WITH SC :O(1)
int fib(int n){
    int prev = 0, curr = 1, next;
    if(n==0 || n==1) return n;
    int i=2;
    while(i<=n)
    {
        next = prev + curr;
        prev = curr;
        curr = next;
        i++;
    }
    return next;
}
*/

/* ITERATIVE + MEMOIZATION 
int fib(int n){
    int f[31] = {0,1};
    for(int i=2; i<=n; i++)
       f[i] = f[i-1] + f[i-2];
    return f[n];
}
*/

/* RECURSION + MEMOIZATION
int fib(int n){
    int f[31] = {0,1};
    if(n==0) return 0;
    if(n==1) return 1;
    if(f[n] != 0)
       return f[n];
    return f[n] = fib(n-1) + fib(n-2);
}
*/

/* RECURSION
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    //if(n==0 || n==1) return n;
    int l;
    l = fib(n-1) + fib(n-2);
    return l;
    //return fib(n-1) + fib(n-2);
}
*/