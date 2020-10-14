#include "tga.h"
#include <stdio.h>
#include <string.h>
void main(){
    int x, y,ret;
    x=128;
    y=128;

    PIXEL_RGB24 *ptr;

    ret = tga_read("C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3b\\Task1\\sample.tga",&x,&y, &ptr );
    // the return -99 represents TGA_UNSUPPORTED_FORMAT and is thrown at line 82
    // The pointer to memory returned is ptr
    tga_write("C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3b\\Task1\\sample-24bit.tga", x, y, ptr, 24);
    //File size is 49 kb vs the previous one that was 33 kb

    printf("I am aware that we are not to use \"printf\"\nbut i wanted to check the size of the struct \"TGA_HEADER\" which is : %i bytes\n",sizeof(TGA_HEADER));
}

