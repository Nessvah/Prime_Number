#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Hardcode prime numbers
    int primes[100] = {[0] = 2, [1] = 3};
   
    int c, t;

    for (int i = 0; i <= 100; i++)
    {
        c = 0;
        for (int j = 2; j < primes[i]; j++)
        {
            if (primes[i] % j == 0)
            {
                c = 1;
                break;
            }            
        }
        if (c == 0)
        {
           primes[i]++;
        }  
    }
    
    for (int i = 0; i < primes[i]; i++)
    {
        printf("%d ", primes[i]);
    }
    
    
    
    

    return 0;
}