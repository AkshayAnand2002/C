/*
There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, 
that is JAR can contain maximum N candies when JAR is full. At any point of time. JAR can have M number of Candies where M<=N. 
Candies are served to the customers. JAR is never remain empty as when last k candies are left.
 JAR if refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. 
Input should be the number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.
Output should give number of Candies sold and updated number of Candies in JAR.
If Input is more than candies in JAR, return: “INVALID INPUT”
Given, 
N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, where k is number of minimum candies that must be inside JAR ever.
Example 1:(N = 10, k =< 5)
Input Value
3
Output Value
NUMBER OF CANDIES SOLD : 3
NUMBER OF CANDIES AVAILABLE : 7
Example : (N=10, k<=5)
Input Value
0
Output Value
INVALID INPUT
NUMBER OF CANDIES LEFT : 10
*/
#include<stdio.h>   
int main()  
{
	int n=10, k=5;
	int num;
	scanf("%d",&num);
	if(num>=1 && num<=5)
	{
    		printf("NUMBER OF CANDIES SOLD : %d\n",num);
    		printf("NUMBER OF CANDIES LEFT : %d",n-num);
	}
	else
	{
    		printf("INVALID INPUT\n");
    		printf("NUMBER OF CANDIES LEFT : %d",n);
	}
	return 0;
} 
//C++
/*#include <iostream>
using namespace std;
int main()
{
	int n=10, k=5;
	int num;
	cin>>num;
	if(num>=1 && num<=5)
	{
    	cout<< "NUMBER OF CANDIES SOLD : "<<num<<"\n";
    	cout<<"NUMBER OF CANDIES LEFT : "<<n-num;
	}
	else
	{
    	cout<<"INVALID INPUT\n";
    	cout<<"NUMBER OF CANDIES LEFT : "<<n;
	}
	return 0;
}*/
//JAVA
/*
import java.util.Scanner;
class Main{
    public static void main(String[] args) {
   	 int n = 10, k = 5;
   	 int num;
   	 Scanner sc = new Scanner(System.in);
   	 num = sc.nextInt();
   	 if(num >= 1 && num <= 5) {
   		 System.out.println("NUMBER OF CANDIES SOLD : " + num);
   		 System.out.print("NUMBER OF CANDIES LEFT : " + (n - num));
   	 } else {
   		 System.out.println("INVALID INPUT");
   		 System.out.print("NUMBER OF CANDIES LEFT : " + n);
   	 }
    }
}
*/
//PYTHON
/*
total_candies = 10
no_of_candies = int(input())
if no_of_candies in range(1, 6):
	print('No. of Candies Sold:',no_of_candies)
	print('No. of Candies Left:',total_candies-no_of_candies)
else:
	print("Invalid Input")
	print('No. of Candies Left:',total_candies)
*/
