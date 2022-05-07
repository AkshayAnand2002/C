#include<stdio.h>
#define Maxstudents 100
#define Mtweightage 0.3
#define Etweightage 0.7
int Numstudents;
int midterm[Maxstudents];
int endterm[Maxstudents];
double score[Maxstudents];
int main(){
printf("Enter the number of students:\n");
scanf("%d",&Numstudents);
if(Numstudents<Maxstudents){
        printf("MIDTERM--");
       for(int i=0;i<Numstudents;i++){
      scanf("%d", &midterm[i]);
       }
       printf("ENDTERM--");
        for(int i=0;i<Numstudents;i++){

           scanf("%d", &endterm[i]);
       }
       for(int i=0;i<Numstudents;i++){
           score[i]= (double)midterm[i]*Mtweightage+ (double)endterm[i]*Etweightage;
       }
         for(int i=0;i<Numstudents;i++){
             printf("SCORE--%f\n", score[i]);
   }
   }else printf("Something went wrong");

}

