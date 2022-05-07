#include <stdio.h>
//1
void swap(int *firstNumber, int *secondNumber);
void printArray(int *array, int size);
int main()
{
    //2
    int *array;
    int type;
    int i, j, size;
    //3
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    //4
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d : ", (i + 1));
        scanf("%d", (array + i));
    }
    //5
    printf("Initial array : ");
    printArray(array, size);
    //6
    printf("Enter 1 to sort in increasing order and 0 to sort in decreasing order : ");
    scanf("%d", &type);
    //7
    for (i = 0; i < size; i++)
    {
        //8
        for (j = i + 1; j < size; j++)
        {
            if (type == 1)
            {
                //increasing order sorting
                if (*(array + j) < *(array + i))
                {
                    swap((array + i), (array + j));
                }
            }
            else
            {
                //decreasing order sorting
                if (*(array + j) > *(array + i))
                {
                    swap((array + i), (array + j));
                }
            }
        }
    }
    //9
    printf("Final array : ");
    printArray(array, size);
    return 0;
}
//10
void swap(int *firstNumber, int *secondNumber)
{
    int temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}
//11
void printArray(int *array, int size)
{
    int i;
    printf("[ ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("]\n");
}
/*
The commented numbers in the above program denote the step numbers below:
1.swap function is used to swap two numbers. It takes two integer pointers of two numbers and swaps them using the pointer. printArray is used to print an array. It takes one pointer to an array and the size of the array. Using the pointer, it prints its elements.
2.Create one pointer to an array and few variables.
3.Ask the user to enter the size of the array. Read the size and store it in the size variable.
4.Run one for loop to read the contents of the array. Read each element one by one.
5.Print the user entered array. We are using the printArray method to print the array elements.
6.Ask the user to enter the type of sorting. It reads the value and stores it in type variable. 1 is for ascending order, and 0 is for descending order.
7.This is the main sorting part. For the first iteration of the loop, it is comparing the first element of the array to all other elements. Based on the sorting method, it finds out the largest or smallest element of the array. For the second iteration, it finds out the second largest or second smallest element, etc. If you are getting confused with the loops, print all the values of i, j and other variables using printf. Try to analyze the printf logs, and it will be clearer.
8.The inner loop is for comparing the elements right to the ith element with the ith element itself. Based on the value of type, it compares the element and swaps them both using the swap function.
9.Finally, print the modified array to the user.
10.swap function takes two integer pointers and swaps the values that lies in the address defined by these integers.
11.printArray function is used to print an array as mentioned above. It takes one pointer to an integer array and the length of the array.
