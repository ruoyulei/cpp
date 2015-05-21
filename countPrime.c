/* count the number of primes less than n */

int countPrimes(int n) {
    if (n <= 2) return 0;
    double c = sqrt(n);
    bool *bv = new bool[n];
    for(int i = 3; i <= c; i += 2)
        if (!bv[i]) 
            for(int j = i*i, k = i * 2; j < n; j += k)
                bv[j] = 1;
    int num = 1;
    for(int i = 3; i < n; i += 2)
        if(!bv[i]) num++;
    return num;
}
