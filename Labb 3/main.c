#include <stdio.h>

void substring (source, start, count, result)
char *source;
int start,count;
char *result;
{
    result = "";
for(int i = start; i < start+count && source[i]!='\0'; ++i)
    result=result+source[i];
result+='\0';
}
void main(){
    int start = 1;
    int count = 2;
    char *Result = "";
    char *source = "Hej";
    substring(source,start,count,Result);
    printf("%s",Result);
}
