//3 waays to assign values to a structure member.
#include<stdio.h>
struct card{
char *face;
char *suit;
};
int main(){
struct card acard;
struct card *cardPtr;//defines a pointer to struct card
//place strings into acard
acard.face="Ace";
acard.suit="Spades";
cardPtr=&acard;//assign address of acard to cardPtr
printf("%s%s%s\n%s%s%s\n%s%s%s\n",acard.face," of ",acard.suit,cardPtr->face," of ",cardPtr->suit,(*cardPtr).face," of ",(*cardPtr).suit);
}
