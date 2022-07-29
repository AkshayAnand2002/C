/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//https://leetcode.com/problems/add-two-numbers/
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* output=(struct ListNode*)malloc(sizeof(struct ListNode));
    output->val=0;
    output->next=NULL;
    struct ListNode* pre = output;
    struct ListNode* cur = output;
    int carry=0,num1=0,num2=0;
while(!(l1==NULL && l2==NULL)){
    if(l1!=NULL){num1=l1->val;l1=l1->next;}
    if(l2!=NULL){num2=l2->val;l2=l2->next;}
    int sum=num1+num2+carry;
    if(sum>9){
        cur->val=sum-10;
        carry=1;
    }
    else{
        cur->val=sum;
        carry=0;
    }
    struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->next=NULL;
    cur->next=newnode;
    pre=cur;
    cur=cur->next;
    num1=0,num2=0;
}
if(carry==1){
    cur->val=carry;
}
else{
    pre->next=NULL;
}
return output;
}
