/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word 
or phrase, typically using all the original letters exactly once.
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true
Example 2:
Input: s = "rat", t = "car"
Output: false
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
bool isanagram(char* s,char* t){
    if(s==NULL || t==NULL){
        return false;
    }
    int lens=strlen(s);
    int lent=strlen(t);
    if(lens != lent){
        return false;
    }
    int flag[26]={0};
    int i;
    for(i=0;i<lens;i++){
        flag[s[i]-'a']++;
    }
    for(i=0;i<lent;i++){
        flag[t[i]-'a']--;
    }
    for(i=0;i<26;i++){
        if(flag[i] !=0) return false;
    }
    return true;
}
int main()
{
    assert(isanagram("anagram","nagaram")==true);
    printf("%d",isanagram("anagram","nagaram"));
    //RETURNS 1 AS TRUE.
    return 0;
}
