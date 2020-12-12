/*
Length of Last Word:
===================

Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

A word is a maximal substring consisting of non-space characters only.

Example 1:
Input: s = "Hello World"
Output: 5

Example 2:
Input: s = " "
Output: 0

*/

#include<iostream>
#include<vector>
using namespace std;

int LengthofLastWord(string str)
{
    int i=str.length()-1;
    int count=0;

    while(i>=0 &&  str[i]==' ')
        i--;
    while (i>=0 && str[i]!=' ')
    {
        count++;
        i--;
    }
    return count;
}

int main()
{
    // string str;
    // cin>>str;
    // cout<<LengthofLastWord(str);
   
    // cout<<v;
}