/*
Selection of MPCS exams include a fitness test which is conducted on ground. 
There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. 
You need to record their oxygen level after every round. 
After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select 
one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.
Display the most fit trainee (or trainees) and the highest average oxygen level.
Note:
The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
Average Oxygen Values should be rounded.
Example 1:
INPUT VALUES
            95

            92

            95

            92

            90

            92

            90

            92

            90

OUTPUT VALUES
Trainee Number : 1
Trainee Number : 3
Note:
Input should be 9 integer values representing oxygen levels entered in order as
Round 1
Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 2
Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 3
Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Output must be in given format as in above example. For any wrong input final output should display “INVALID INPUT”
*/
#include <stdio.h>   
int main()  
{
	int trainee[3][3];
	int average[3] = {0};
	int i, j, max=0;
	for(i=0; i<3; i++)
	{
    		for(j=0; j<3; j++)
    		{
        		scanf("%d",&trainee[i][j]);
        		if(trainee[i][j]<1 || trainee[i][j]>100)
        		{
            		trainee[i][j] = 0;
        		}
    		}
	}
	for(i=0; i<3; i++)
	{
    		for(j=0; j<3; j++)
    		{
        			average[i] = average[i] + trainee[j][i];
    		}
    		average[i] = average[i] / 3;
	}
	for(i=0; i<3; i++) { if(average[i]>max)
    		{
        			max = average[i];
    		}
	}
	for(i=0; i<3; i++)
	{
    		if(average[i]==max)
    		{
        			printf("Trainee Number : %d\n",i+1);
    		}
    		if(average[i]<70)
    		{
        			printf("Trainee is Unfit");
    		}
	}
	return 0;
}  
//C++
/*
#include<iostream.h> 
using namespace std;
int main()  
{
	int trainee[3][3];
	int average[3] = {0};
	int i, j, max=0;
	for(i=0; i<3; i++)
	{
        	for(j=0; j<3; j++) { cin>>trainee[i][j];
                	if(trainee[i][j]<1 || trainee[i][j]>100)
                	{
                    	trainee[i][j] = 0;
            	}
        	}
	}
	for(i=0; i<3; i++)
	{
        	for(j=0; j<3; j++)
        	{
                	average[i] = average[i] + trainee[j][i];
        	}
        	average[i] = average[i] / 3;
	}
	for(i=0; i<3; i++) { if(average[i]>max)
        	{
                	max = average[i];
        	}
	}
	for(i=0; i<3; i++)
	{
        	if(average[i]==max)
        	{
                	cout<<"Trainee Number : "<<i+1<<"\n";
        	}
        	if(average[i]<70)
        	{
                	cout<<"Trainee is Unfit";
        	}
	}
	return 0;
} 
*/
//JAVA
/*
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
   	 int[][] trainee = new int[3][3];
   	 int[] average = new int[3];
   	 int max = 0;
   	 Scanner sc = new Scanner(System.in);
   	 for(int i = 0; i < 3; i++) {
   		 for(int j = 0; j < 3; j++) {
   			 trainee[i][j] = sc.nextInt();
   			 if(trainee[i][j] < 1 || trainee[i][j] > 100) {
   				 trainee[i][j] = 0;
   			 }
   		 }
   	 }
   	 for(int i = 0; i < 3; i++) {
   		 for(int j = 0; j < 3; j++) {
   			 average[i] = average[i] + trainee[j][i];
   		 }
   		 average[i] = average[i] / 3;
   	 }
   	 for(int i = 0; i < 3; i++) {
   		 if(average[i] > max) {
   			 max = average[i];
   		 }
   	 }
   	 for(int i = 0; i < 3; i++) {
   		 if(average[i] == max) {
   			 System.out.println("Trainee Number : " + (i + 1));
   		 }
   		 if(average[i] <70) {
   			 System.out.print("Trainee is Unfit");
   		 }
   	 }
    }

}
*/
//PYTHON
/*
trainee = [[],[],[],[]]
for i in range(3):
	for j in range(3):
    		trainee[i].append(int(input()))
    		if (trainee[i][-1]) not in range(1,101):
        			print("invalid input")
for i in range(3):
	trainee[3].append((trainee[2][i]+trainee[1][i]+trainee[0][i])//3)
maximum = max(trainee[3])
for i in range(3):
	if trainee[3][i] < 70 :
    		print("Trainee {0} is unfit".format(i+1))
	elif trainee[3][i] == maximum:
    		print("Trainee Number: ",i+1)
*/
