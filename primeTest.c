#include<stdio.h>

int is_prime(int x) {
    int i;
    if(x <= 1) {
        return 0;
    }

    for(int i = 2; i*i <= x; ++i) {
        if(x%i == 0)
            return 0;
    }

    return 1;
}

int main() {
    

    return 0;
}
