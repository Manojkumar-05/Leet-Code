int digiSqSum(int n){
    int sum = 0;
    while(n){
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    if(n == 1 || n == 7) return true;
    while(n > 9){
        n = digiSqSum(n);
        if(n == 1 || n == 7) return true;
    }    
    return false;
}