#include<stdio.h>
#define SIZE 20
int main(){
int arr[SIZE];
for(int i=0;i<SIZE;i++){
    scanf("%d",&arr[i]);
}
int hist[10] = {0};
for(int j=0;j<SIZE;j++){

           if( 0<=arr[j]&& arr[j]<=10){

                hist[0]++;
           }
      }
for(int j=0;j<SIZE;j++){

           if( 11<=arr[j]&& arr[j]<=20){

                hist[1]++;
           }
      }

for(int j=0;j<SIZE;j++){

           if( 21<=arr[j]&& arr[j]<=30){

                hist[2]++;
           }
      }
for(int j=0;j<SIZE;j++){

           if( 31<=arr[j]&& arr[j]<=40){

                hist[3]++;
           }
      }
for(int j=0;j<SIZE;j++){

           if( 41<=arr[j]&& arr[j]<=50){

                hist[4]++;
           }
      }
for(int j=0;j<SIZE;j++){

           if( 51<=arr[j]&& arr[j]<=60){

                hist[5]++;
           }
      }
for(int j=0;j<SIZE;j++){

           if( 61<=arr[j]&& arr[j]<=70){

                hist[6]++;
           }
      }
for(int j=0;j<SIZE;j++){

           if( 71<=arr[j]&& arr[j]<=80){

                hist[7]++;
           }
      }
for(int j=0;j<SIZE;j++){

           if( 81<=arr[j]&& arr[j]<=90){

                hist[8]++;
         }
      }
for(int j=0;j<SIZE;j++){

           if( 91<=arr[j]&& arr[j]<=100){

                hist[9]++;
           }
      }
int i=1;int j=10;
for( int k= 0;k<10;k++){

     printf("Total no of nos. between %d - %d is %d\n",i,j,hist[k]);
     i=i+10;
     j=j+10;
}
 return 0;
}
