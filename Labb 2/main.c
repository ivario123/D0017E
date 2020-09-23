#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Uppgift 1 a
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
            printf("They are divisible\n\n");
            continue;
        }
        printf("They are not divisible\n\n");
    }
    return 0;
}
#endif
//Uppgift 1 b
#if 0
void main(){
    while(1){
        int i1,i2;
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
//Uppgift 1 c
#if 0
void main(){
    int number;
    while(1) {
        char fac = ' ';
        printf("Enter your number.\n");
        scanf("%i", &number);
        if(number < 0) {
            fac = '-';
            number = -number;
        }
        do {
            printf("%i", number % 10);
            number /= 10;
        } while (number != 0);
        printf("%c\n",fac);
    }
}
#endif
//Uppgift 2 a
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
//Uppgift 2 b
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
//Uppgift 3 a
#if 0
//function to calculate the nth triangular number
int calulateTriangularNumber(int n)
{
    int i,triangularNumber = 0;

    for ( i = 1; i <= n; ++i)
        triangularNumber += i;

    return triangularNumber;
}
void main(void)
{
    int number,counter;
    for(counter = 0; counter < 5; ++counter)
    {
        printf("What number do you want to use?\n");
        scanf("%i", &number);
        printf("Triangular number %i is %i \n\n", number, calulateTriangularNumber(number));
    }
}
#endif
//Uppgift 3 b
#if 0
int prime(int n){
    if(n < 1)
        return 0;
    else if(n == 1)
        return 1;
    int i = 2;
    while(n % i != 0 )
        ++i;
    if(i == n)
        return 1;
    return 0;
}
void main(){
    while(1==1) {
        int i = 0;
        printf("What number you want to know if it's a prime?\n");
        scanf("%i", &i);
        char *s = prime(i) ? "Is a prime number\n" : "Is not a prime number\n";
        printf(s);
    }
}
#endif
//Uppgift 3 c
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
//Uppgift 4
#if 1
/// Function that finds the length of a given string
/// \param Str is the string we want to know the length of
/// \return Returns the length of a string, if string is null, it returns 0
int Strlen(char *Str){
    int len = 0;
    while (Str[len] != '\0')
        ++len;
    return len;
}
/// Computes the value of Base^Exponent
/// \param Base is the base of the power of computation
/// \param Exponent is the exponent of the power of computation
/// \return returns Base^Exponent no matter if the exponent is positive or negative
long double Pow(int Base, int Exponent){
    if(Exponent==0)
        return 1;
    if(Exponent<0)
        return 1/(Base*Pow(Base,(-Exponent)-1));
    else
        return Base*Pow(Base,Exponent-1);
}


/// Function that computes the size of a given Ax size paper
/// \param BaseSize is the size of an A4 Paper
/// \param Exp Is the size that we want to calculate
void Calculate(int *BaseSize, int Exp)
{
    long double Size[] = {(long double)BaseSize[0],(long double)BaseSize[1]};
    if(Exp<0 )
        for(int i = 0; i < -Exp;++i) {
            long double placeholder = Size[0];
            Size[0] = Size[1]/2;
            Size[1] = placeholder;
        }
    else
        for(int i = 0; i < Exp;++i) {
            long double placeholder = Size[1];
            Size[1] = Size[0]*2;
            Size[0] = placeholder;
        }
    long double sizex = Size[0]>(long double)1 ? (int)Size[0] : Size[0];
    long double sizey = Size[1]>(long double)1 ? (int)Size[1] : Size[1];
    printf("A paper of size A%i is %g by %g mm\n",4-Exp,sizex,sizey);
}
/// Function that checks if a given string is a positive numerical string
/// \param Str is the string that will be checked
/// \param Constraint Is the length constraint of the string
/// \return Returns 1 if the string is a number and 0 if not
int IsNum(char *Str,int Constraint)
{
    int len = Strlen(Str);
    if(len>Constraint)
    {
        printf("You must enter a number \"shorter\" than 10000\n");
        return 0;
    }
    for(int i = 0; i < len; ++i)
    {
        int c = (int)Str[i];
        //if the char is outside of the valid ascii range then return 0
        if(c>57 || c< 48){
            printf("You must enter a number\n");
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
    int len = Strlen(Str);
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
/// Main function, will loop indefinitely
void main(){
    //loopar så att man kan kolla mer än 1 tal
    while(1){
        char *str = "";
        //Kan ta bort denna printen om ni vill men tyckte att det var snyggare så
        printf("--------------------------------------------------\n");
        printf("Which size do you want to calculate?\nA");
        scanf("%s",str);
        int i = Atoi(str,4);
        if( i != -1 )
        {
            if(i <= 1000)
            {
                long size[2] = {210, 297};
                Calculate(size, 4 - i);
            }
            else
                printf("You must enter a value smaller or equal to 1000\n");
        }

    }
}
#endif