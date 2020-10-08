#include <stdio.h>
struct entry
{
    int value;
    struct entry *next;
};
int strlen(char *String){
    int len = 0;

    while (*(++String )!= '\0')
    {
        ++len;
        ++String;
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
    result[ i+1 ] ='\0';

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
    insertEntry(&A,B);
}
#endif
// 2 b
#if 0
int compareStrings(char *s1,char *s2)
{
    int i = 0, answer;
    char a = ' ',b = ' ';
    while(*s1!='\0'&&*s2!='\0'&& a == b)
    {
        a = *s1;
        b = *s2;
        ++s1;
        ++s2;
    }
    if(a>b)
        return -1;
    else if(a == b)
        return 0;
    return 1;
}
void main()
{
    printf("%i",compareStrings("He0","He?"));
}
#endif
// 3 b
#define min(b,c)  (b<c?b:c)
#if 0
void main(){
    printf("%i", min(1,2));
}
#endif
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
    FILE * fpa,* fpb;
    fpa = fopen ( inputFile, "a+" );
    if ( fpa == NULL ) {
        printf ( "Error while reading %s no such file\n", inputFile );
        return;
    }
    fpb = fopen ( outputFile,"w" );
    fclose ( fpb );
    fpb = fopen ( outputFile,"a+" );
    char c;
    char buf[255];

    while ( ! feof ( fpa ) ) {
        fgets ( buf, sizeof ( buf ), fpa );
        toUpper ( buf );
        fprintf ( fpb, "%s", buf );
        printf ( buf );
    }
    rewind ( fpb );
    fclose ( fpb );
    fclose ( fpa );
}
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
