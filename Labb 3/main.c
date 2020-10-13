#include <stdio.h>
struct entry
{
    int value;
    struct entry *next;
};
int strlen(char *String){
    int len = 1;

    while (*(++String )!= '\0')
    {
        ++len;
    }
    return len;
}

// 1 a
void substring (source, start, count, result)
    char *source;
    int start,count;
    char result[];
{
    int i;
    for( i = start; i < start+count && source[i]!='\0' ; ++i )
        result[ i-start ] = source[ i ];
    result[ count ] ='\0';

}
// 1 b
int findstring(Main,Sub)
    char *Main;
    char *Sub;
{
    int Counter;
    int MainLen = strlen( Main );
    int SubLen = strlen( Sub );
    for( Counter = 0; Counter < MainLen - SubLen+1; ++Counter)
        if( Main[Counter] == Sub[0] )
        {
            int j;
            for(j = 0; j < SubLen; ++j)
                if(Main[Counter+j]!=Sub[j])
                    break;
            if(j == SubLen)
                return Counter;
        }
    return -1;
}
#if 0
void main(){
    char * MainString = "a chatterbox";
    char   SubString[255];
    substring(MainString,3,3,SubString);
    printf("The substring in %s from index %i to index %i is ",MainString,3,3);
    printf(SubString);
    printf("\nThe index of the substring %s in the string %s is : %i\n","hat","a chatterbox",findstring("a chatterbox","hat"));
}
#endif

// 2 a
#if 0
void insertEntry(struct entry *Recent ,struct  entry New )
{
    struct entry *temp = Recent->next;
    Recent->next = &New;
    New.next = temp;
}


void main()
{
    struct entry C = {.value = 5, .next = NULL};
    struct entry B = {.value = 3, .next = NULL};
    struct entry A = {.value = 2, .next = &C};
    printf("talet efter a innan : %i\n",A.next->value);
    insertEntry(&A,B);
    printf("talet efter a efter : %i\n",A.next->value);
}
#endif
// 2 b
#if 0
int compareStrings(char *s1,char *s2)
{
    int i = 0, answer;
    while(*s1!='\0'&&*s2!='\0'&& *s1 == *s2)
    {
        ++s1;
        ++s2;
    }
    if(*s1>*s2)
        return -1;
    else if(*s1 == *s2)
        return 0;
    return 1;
}
void main()
{
    printf("%i",compareStrings("Hej","Hez"));
}
#endif
// 3 a
/*
 * C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\VC\Linux\include\usr\include contains stdio.h and limits.h
 * C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\SDK\ScopeCppSDK\vc15\SDK\include\ucrt contains stdio.h and contains.h
 */
// 3 b
#define MIN(b,c)  (b<c?b:c)
#if 0
void main(){
    printf("%i", MIN(1,2));
}
#endif
#if 1
// 4 a
void toUpper ( char str[] ){
    int counter = 0;
    while(str [ counter ] !='\n' && str [ counter ] !='\0' ){
        str [ counter ] =  ( str [ counter ] < 123 && 96 < str [ counter ] ) ? str [ counter ] -= 32 : str [ counter ];
        counter++;
    }
}
void overWrite ( char * inputFile,char *outputFile )
{
    FILE * FilePointerFileA,* FilePointerFileB;
    FilePointerFileA = fopen (inputFile, "r" );
    if (FilePointerFileA == NULL ) {
        printf ( "Error while reading %s no such file\n", inputFile );
        return;
    }
    FilePointerFileB = fopen (outputFile, "w" );
    char buf[255];

    while ( ! feof ( FilePointerFileA ) ) {
        fgets (buf, sizeof ( buf ), FilePointerFileA );
        toUpper ( buf );
        fprintf (FilePointerFileB, "%s", buf );
        printf ( buf );
    }
    fclose (FilePointerFileB );
    fclose (FilePointerFileA );
}
//4b
int terminates(char str[]){
    int counter = 0;
    while(str[counter] !='\0' )
        counter++;
    return str[counter-1] == '\n';
}
void alternateRead ( char * FileA, char *FileB )
{
    FILE * FilePointerForFileA, * FilePointerForFileB ;
    FilePointerForFileA = fopen ( FileA, "r" );
    if ( FilePointerForFileA == NULL ) {
        printf ( "Error while reading %s no such file\n", FileA );
        return;
    }
    FilePointerForFileB = fopen ( FileB, "r" );
    if ( FilePointerForFileB == NULL ) {
        printf ( "Error while reading %s no such file\n", FileB );
        return;
    }
    char Buffer[255];
    int Counter = 1;
    while (!feof(FilePointerForFileA) || !feof(FilePointerForFileB)) {
        fgets(Buffer, sizeof ( Buffer ) , ( Counter % 2 != 0 ? ( ! feof ( FilePointerForFileA ) ? FilePointerForFileA : FilePointerForFileB ) : (  ! feof ( FilePointerForFileB ) ? FilePointerForFileB : FilePointerForFileA ) )  );
        if(!terminates(Buffer))
            printf("%i : %s\n", Counter,Buffer);
        else
            printf("%i : %s", Counter,Buffer);
        ++Counter;
    }
    fclose(FilePointerForFileB);
    fclose(FilePointerForFileA);
}

void main(){
    char * Inputfile = "C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3\\Inputa.txt";
    char * OutPutFile = "C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3\\output.txt";
    printf ("\n_______Writing to file from file_______\n" );
    overWrite ( Inputfile,OutPutFile ) ;
    printf ("\n_______Reading from files_______\n" );
    OutPutFile = "C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3\\Inputb.txt";
    alternateRead (Inputfile,OutPutFile);
}
#endif