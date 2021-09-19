#include <stdio.h>
#include <stdlib.h>

int *generate_array_by_range(int maxRange)
{
    int *range_numbers = malloc(sizeof(int)*maxRange);

    for(int i = 0; i <= maxRange; i++)
        range_numbers[i] += i;

    return range_numbers;
} 

int *crible_eratosthene(int max)
{
    int *range_numbers;
    range_numbers = generate_array_by_range(max);

    return range_numbers;
    //while(*range_numbers <= max)
}

int main(int argc, char **argv)
{
    int *primes;
    primes = crible_eratosthene(156);

    printf("%d\n", *(primes+155));
    return(0);
}