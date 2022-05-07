//An Armstrong number is a n digit number, which is equal to the sum of the nth powers of its digits.
#include <stdio.h>
#include <math.h>
int main()
{
  int Number, Temp, Reminder, Times =0, Sum = 0;
  printf("Please Enter number to Check :");
  scanf("%d", &Number);
  //Helps to prevent altering the original value
  Temp = Number;
  while (Temp != 0) 
   {
      Times = Times + 1;
      Temp = Temp / 10;
   }
  Temp = Number;//as temp in previous step reduced to 0 so temp is assigned value again.
  while( Temp > 0)
   {
     Reminder = Temp %10;
     Sum = Sum + pow(Reminder, Times);
     Temp = Temp /10;
   }
  printf("\n Sum of entered number is = %d\n", Sum);
  if ( Number == Sum )
      printf("\n %d is Armstrong Number.\n", Number);
  else
      printf("\n %d is not.\n", Number);
  return 0;
}
