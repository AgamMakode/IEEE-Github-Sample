/*
Dna sequence of billioner of length 'l'; Dna sequence of nominee of length 'm';

if largest common subsequence of m >= 0.5*l, then given person is a valid nominee; otherwise not;
sequence doesn't contain other than word 'a','c','g', and 't'.

If given nominee is eligible nominee then print 'Valid Nominee', otherwise print 'Not a valid nominee'. 
Input Format

Input: two seperate string represent billioner's and nominee's DNA, respectively.

Constraints

The length of the the dna sequence of billioner and nominee should be less than 100000.

Output Format

Output: If nominee is valid then print a message "Valid nominee", otherwise print "Not a valid nominee"

Sample Input 0

aaacgtaacctgagggtac
tgagggtacaaatgtcaat
Sample Output 0

Not a valid nominee
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int abc(char [], char []);
int max(int,int);
int max(int a, int b){
     if(a>b)return a;
     return b;
}
int isSafe(char *);
int isSafe(char *s){
    int len=strlen(s);
    for(int i=0; i<len; i++){
        char a=s[i];
        if(a=='a' || a=='c' || a=='g' || a=='t'){
             // fir toh theek hai
        }else{
             return 0;
        }
    }
    return 1;
}
int abc(char *s1, char *s2){
     int len1=strlen(s1)+1;
     int len2=strlen(s2)+1;
     int arr[len1][len2];
     for(int i=0; i<len1; i++){
         for(int j=0; j<len2; j++){
             arr[i][j]=0;
         }
     }
     for(int i=len1-2; i>=0; i--){
            for(int j=len2-2; j>=0; j--){
                char a=s1[i];
                char b=s2[j];
                if(a==b){
                    arr[i][j]=arr[i+1][j+1]+1;
                }else{
                    arr[i][j]=max(arr[i+1][j],arr[i][j+1]);
                }
            }
        }
     return arr[0][0];
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s1[100001];
    char s2[100001];
    fgets(s1, 100001, stdin);
    fgets(s2, 100001, stdin);
    int len=strlen(s1);
    int lcs=abc(s1,s2);
    if( isSafe(s2)==1 && lcs*2>=len ){
        printf("Valid nominee\n");
    }else{
        printf("Not a valid nominee\n");
    }
    return 0;
}
