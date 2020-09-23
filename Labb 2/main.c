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
/// Computes the value of Base^Exponent
/// \param Base is the base of the power of computation
/// \param Exponent is the exponent of the power of computation
/// \return returns Base^Exponent no matter if the exponent is positive or negative
long double Pow(int Base, int Exponent){
    long double ret = 1;
    if(Exponent==0)
        return 1;
    if(Exponent<0)
        for(int i = 0; i < -Exponent;++i)
            ret/=Base;
    else
        for(int i = 0; i < Exponent;++i)
            ret*=Base;
    return ret;
}


/// Function that computes the size of a given Ax size paper
/// \param BaseSize is the size of an A4 Paper
/// \param Base Probably 2 but this would work for anny relation not just half or double size as long as the relation is an integer
/// \param Exp Is the size that we want to calculate
/// \return  Returns the size of an A(Exp) Paper
long double calc(int BaseSize[],int Base,int Exp)
{
    int Size[] = {(int)(BaseSize[0]*Pow(Base,Exp)),(int)(BaseSize[1]*Pow(Base,Exp))};
    if(Size[0] == 0)
        return printf("A paper of size A%i is %i*%i^%i by %i*%i^%i mm\n", 4 - Exp, BaseSize[0],Base,Exp,BaseSize[1],Base,Exp);
    return printf("A paper of size A%i is %i by %i mm\n",4-Exp,Size[0],Size[1]);
}
/// Function that checks if a given string is a positive numerical string
/// \param Str is the string that will be checked
/// \param Constraint Is the length constraint of the string
/// \return Returns 1 if the string is a number and 0 if not
int IsNum(char *Str,int Constraint)
{
    int len = strlen(Str);
    if(len>Constraint)
    {
        printf("You have to enter a positive number smaller than 999\n");
        return 0;
    }
    for(int i = 0; i < len; ++i)
    {
        //if the char is outside of the valid ascii range then return 0
        if(Str[i]>58 && Str[i]< 48){
            printf("You must enter a positive number\n");
            return 0;
        }
    }
    //if all chars are accepted return 1
    return 1;
}
/// Function that converts a given string to a number and assures that the string is numerical
/// \param Str is the string that is to be converted to an integer
/// \param Constraints is the length constraints, set this to max int if you dont want to constrain the size of the number
/// \return returns the integer value contained in the string if the string is numerical
/// otherwise returns the value -1
long Atoi(char *Str,int Constraints){
    long Ret = 0;
    int len = strlen(Str);
    if(IsNum(Str,Constraints)==1) {
        //48 är ASCII värdet för 0 och alla heltal följer.
        //Eftersom att vi har kontrollerat att strängen är tal så kan vi bara subtrahera 48
        //för att konvertera till heltal
        for (int i = 0; i < len; ++i)
            Ret += (Str[i] - 48) * Pow(10, len - i - 1);
        return Ret;
    }
    return -1;
}
/// Main function, will loop indefinitely unless Q is the size argument
void main(){
    //loopar så att man kan kolla mer än 1 tal
    while(1){
        char *str[256];
        //Kan ta bort denna printen om ni vill men tyckte att det var snyggare så
        printf("--------------------------------------------------\n");
        printf("Which size do you want to calculate?\nA");
        scanf("%s",&str);
        if(str[0]=='Q')
            return;
        int i = Atoi(str,4);
        if(i!=-1 && i <=1000) {
            long size[2] = {210, 297};
            calc(size, 2, 4 - i);
        }
    }
}
#endif