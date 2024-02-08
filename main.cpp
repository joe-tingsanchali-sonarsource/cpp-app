#include <iostream>
#include <cstring>
#include "functions.h"
#include <random>
#include <string.h>
#include <stdio.h>

int generateRandomId() 
{
  int random_int = std::rand(); // Should use functions which rely on a strong random number generator, not a pseudo-random number generator becasuse it can be predicted
  return random_int;
}

void bufferOverflow(char * input){
    char buffer[20];
    strcpy(buffer, input); // Noncompliant; `input` length is not checked and it may overflow `buffer`
}

int main()
{
    int values[5] = {1,2,3,4,5};
    double avg = getAverage(values, 10);
    char array[10];
    void *pos = memchr(array, '@', 42);
    std::cout << avg << std::endl;

    // Random Id issue
    int id = generateRandomId();
    std::cout << "Random'ish id = " << id << std::endl;

    // Hardcoded IP issue
    char host[10];
    strcpy(host, "10.10.0.1"); // Sensitive
    std::cout << "Hardcoded Server IP = " << id << std::endl;

    return 0;
}

