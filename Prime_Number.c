#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
    //Hardcode prime numbers
    int primes[50] = {[0] = 2, [1] = 3};
    int primeIndex = 2;

    bool isPrime;

    for (int p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (int i = 1; isPrime == true && p / primes[i] >= primes[i]; i++)
        {
            if (p % primes[i] == 0)
            {
                isPrime = false;
            }
            
        }
        if (isPrime == true)
        {
            primes[primeIndex] = p; 
            primeIndex++;
        }
        
    }
    
    for (int i = 0; i < primeIndex; i++)
    {
        printf(" %i ", primes[i]);
    }
    

    return 0;
}