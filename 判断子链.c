#include<stdio.h> 
#include<stdbool.h>
bool isSubsequence(char * s, char * t);
void main()
{
	char a[100],b[500000];
	scanf("%s",a);
	scanf("%s",b);
	printf("%d",isSubsequence(a,b));
 } 

bool isSubsequence(char * s, char * t){
    while (*s && *t) {
        if (*s == *t) {
            s++;
        }
        t++;
    }
    if (*s == '\0') {
        return true;
    } else {
        return false;
    }
}
