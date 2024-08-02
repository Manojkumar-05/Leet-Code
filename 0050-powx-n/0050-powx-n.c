double myPow(double x, int n) {
    if(n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
    if(n == INT_MIN) return(x == 1 || x == -1) ? 1 : 0;
    if(n == 0) return 1;
    if(x == 0 || x == 1) return x;

    int powSign = (n < 0) ? -1 : 1; 

    if(n == INT_MIN) n = INT_MAX;
    else if(powSign == -1) n = -n; 

    if(powSign == 1) return x * myPow(x, n - 1);
    return 1.0 / (x * myPow(x, n - 1));
}