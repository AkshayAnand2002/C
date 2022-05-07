#include<stdio.h>
#define SIZE 20
size_t getSize(float *ptr);
int main(){
float array[SIZE];
printf("THE NO OF BYTES IN THE ARRAY IS %u "
       "\nTHE NO. OF BYTES RETURNED BY getSize IS %u\n",
       sizeof(array), getSize(array));
}
size_t getSize(float *ptr)
{
    return sizeof(ptr);
}
