bool checkPerfectNumber(int num) {
    int copy = num, sum = 0;
    for(int i = 1; i <= num / 2; i++)
        if(num % i == 0) sum += i;
    return sum == copy;
}