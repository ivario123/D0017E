#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#if 0
int main() {
    while(1){
        int i1 = 0;
        int i2 = 0;
        printf("Enter the first digit\n Integer > ");
        scanf("%i",&i1);
        printf("Enter the second digit\n Integer > ");
        scanf("%i",&i2);
        if( i1%i2 == 0) {
            printf("They are dividable\n\n");
            continue;
        }
        printf("They are not dividable\n\n");
    }
    return 0;
}
#endif
#if 0
void main(){
    while(1){
        int i1 = 0;
        int i2 = 0;
        printf("Enter the first digit\n Integer > ");
        scanf("%i",&i1);
        printf("Enter the second digit\n Integer > ");
        scanf("%i",&i2);
        if( i2 == 0) {
            printf("0 is not allowed\n\n");
            continue;
        }
        printf("The result of the division %i/%i is %.3f\n\n",i1,i2,((float)i1)/((float)i2));
    }
}
#endif
#if 0
void main(){
    int i = 0;
    printf("Enter the first digit\n Integer > ");
    scanf("%i",&i);
    while (i != 0){
        printf("%i",i%10);
        i/=10;
    }
    printf("\n");
}
#endif
#if 0
void main(){
    int values[10];
    for(int i = 0; i < sizeof(values); ++i)
        values[i] = 0;
    int index;
    values[0]=197;
    values[2]=-100;
    values[5]=350;
    values[3]=values[0]+values[5];
    values[9]=values[5]/10;
    --values[2];
    for(index = 0; index < 10; ++index)
        printf("values[%i] = %i\n",index,values[index]);
}
#endif
#if 0
void main(){
    float val[10];
    for(int i = 0; i < 10; ++i)
        val[i] = (float)rand()/30;
    float sum = 0;
    for(int i = 0; i < 10; ++i) {
        printf("values[%i] = %f\n", i, val[i]);
        sum += val[i];
    }
    printf("Average is : %f",sum/10);
}
#endif
#if 0
int Pow(int a, int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    return a*Pow(a,b-1);
}
int Fak(int a){
    if(a==0)
        return 1;
    return a*Fak(a-1);
}



float Div(float c, float d) {
    float sum = c / d;
    return(sum);
}


void main(){
    printf("5/2 is %i",Fak(4));
}
#endif
#if 0
int prime(int a){
    if(a<1)
        return 0;
    else if(a==1)
        return 1;
    int i = 2;
    while(a%i!=0){
        ++i;
    }
    if(i==a)
        return 1;
    return 0;
}
void main(){
    while(1==1) {
        int i = 0;
        printf("Bruh what number you wanna check?\n");
        scanf("%i", &i);
        printf("%i\n", prime(i));
    }
}
#endif
#if 0
int arraysum(int arr[],int nel){
    int sum = 0;
    for(int i = 0; i < nel; ++i)
        sum+=arr[i];
    return sum;
}
void main(){
    int sum[] = {1,2,3};
    printf("sum of {1,2,3} is %i",arraysum(sum,3));
}
#endif
#if 1
long Pow(int a, int b){
    if(b==0)
        return 1;
    if(b ==1)
        return a;
    return a*Pow(a,b-1);
}
void sizeA(int A){

    int Default = 4;
    int sizeX = 210;
    int sizeY = 297;
    if(A<Default){
        sizeX*=Pow(2,Default-A);
        sizeY*=Pow(2,Default-A);
    }
    else if(A>Default){
        sizeX/=Pow(2,A-Default);
        sizeY/=Pow(2,A-Default);
    }
    printf("A paper of size A%i is %i by %i mm\n",A,sizeX,sizeY);
}
void main(){
    char *str[256];
    while(1==1){
        printf("Which size do you want to calculate?\nA");
        scanf("%s",&str);
        int i = atoi(str);
        sizeA(i);
    }
}
#endif