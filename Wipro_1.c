/*
Josh went to the market to buy N apples. 
He found two shops, shop A and B, where apples were being sold in lots. 
He can buy any number of the complete lot(s) but not lose apples. Now he is confused with the price and wants you 
to figure out the minimum cost to buy exactly N apples. Write an algorithm for Josh to calculate the minimum cost to buy exactly N apples?
Input:
The 1’st line of the input consists of an integer – N, representing the total number of apples 
that Josh wants to buy. The 2’nd line consists of two space-separated positive integers – M1 and P1, representing 
the number of apples in a lot and the lot’s price at shop A, respectively. And the 3’rd line consists of two space-separated 
positive integers-M2 and P2, representing the number of apples in a lot’s price at shop B, respectively.
Output:
The positive integer representing the minimum price at which Josh will able to buy an apples.
Sample Input: 19 3 10 4 15 Output: 65
*/
#include <stdio.h>
int main() {
int n, m1, p1, m2, p2;
scanf("%d", &n);
scanf("%d", &m1);
scanf("%d", &p1);
scanf("%d", &m2);
scanf("%d", &p2);
int min_cost = -1;
for (int i=0; m1*i <= n; i++) {
int count2 = n - i*m1;
if (count2%m2 == 0) {
int cost = p1 * i + p2 * (count2/m2);
min_cost = (cost < min_cost || min_cost == -1) ? cost : min_cost;
}
}
if (min_cost != -1)
printf("%d\n", min_cost);
else
printf("Invalid inputs\n");
}
