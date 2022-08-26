#include <iostream>
#include <cstring>
#include "functions.h"

static wchar_t g_staticBuffer[100];

double getAverage(int arr[], int size) {
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

   return avg;
}

void alterArray(char arr[]){
    void *pos = memchr(arr, '@', 42);
}

void moveVal(char *src) {
  char dest[256];
  strncpy(dest, src, sizeof(dest));
}

void pop_array(void)
{
    int myarray[10];
    myarray[20] = 0;
    g_staticBuffer[300] = 0;
}
void arr_fill(void)
{
    int myarray[10];
    memset(myarray, 0, 100);
    memset(g_staticBuffer, 0, 1000);
}