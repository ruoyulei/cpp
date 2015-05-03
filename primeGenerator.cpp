#include <iostream>
using namespace std;
bool isPrime(unsigned long n);

bool isPrime(unsigned long n) {
    if (n <= 3) {
        return n > 1;
    }
    
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    
    for (unsigned short i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int main(int argc, const char * argv[]) {
    
    int index = 0;
    std::cin >> index;
    
    long arr[index*2];
    long a,b;
    
    int temp = 0;
    int i = 0;
    
    do{
        std::cin >>a>>b;
        arr[temp] = a;
        arr[temp+1] = b;
        temp= temp+2;
        i++;
    }while (i < index);
    
    //std::cout << "Log in finished\n";
    
    for(int i = 0; i < index*2; i++) {
        if(i == 0 || i %2 == 0) {
            for(long x = arr[i]; x <= arr[i+1]; x++) {
                if(isPrime(x)) {
                    cout << x<<"\n";
                }
            }
            cout << "\n";
        }
    }
    
    return 0;
}