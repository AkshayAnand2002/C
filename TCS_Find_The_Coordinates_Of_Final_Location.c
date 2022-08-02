/*
Varahamihira was an astrologer of eminence and his book Brihat Jataak is recokened as the ultimate authority in astrology.
He was once talking with Amarasimha,another gem among the nava ratnas and the author of Sanskrit thesaurus, Amarakosha.
Amarasimha wanted to know the final position of a person, who starts from the origin 0 0 and travels per following scheme.
Scheme
He first turns and travels 10 units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by 10 units.
Test Cases
Case 1
Input : 3
Expected Output :-20 20
Case 2
Input: 4
Expected Output: -20 -20
Case 3
Input : 5
Expected Output : 30 -20
Case 4
Input : 7
Expected Output : 90 -20
*/
//https://prepinsta.com/tcs-coding-question-1/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    char c = 'R';
    int x = 0, y = 0;
    int distance = 10;
    while(n)
    {
        switch(c)
        {
            case 'R':
            x = x + distance;
            c = 'U';
            distance = distance + 10;
            break;
            
            case 'U':
            y = y + distance;
            c = 'L';
            distance = distance + 10;
            break;
            
            case 'L':
            x = x - distance;
            c = 'D';
            distance = distance + 10;
            break;
            
            case 'D':
            y = y - distance;
            c = 'A';
            distance = distance + 10;
            break;            
            
            case 'A':
            x = x + distance;
            c = 'R';
            distance = distance + 10;
            break;
        }
        n--;
    }
    printf("%d %d",x,y);
    return 0;
}
