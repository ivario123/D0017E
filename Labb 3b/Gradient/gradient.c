/*
 *  gradient.c
 *  
 *  Created by Fredrik Sandin on 20/08/12.
 */

#include "C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3b\\Gradient\\tga.h"

int main(void) {

	int i;
	const int width = 256;
	const int height = 256;
	
	PIXEL_RGB24 image[256*256];
	
	for(i=0; i<width*height; i++) {
		image[i].R = i % 256;
		image[i].G = 0;
		image[i].B = i / 256;
	}
	
	if(tga_write("C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3b\\Gradient\\gradient-16bit.tga",width,height,image,16)!=TGA_OK) {
		return -1; /* ERROR OCCURRED */
	}

	if(tga_write("C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3b\\Gradient\\gradient-24bit.tga",width,height,image,24)!=TGA_OK) {
		return -1; /* ERROR OCCURRED */
	}
	//Har ingen bra förklaring faktiskt minnet borde inte spela någon roll för brytningen mellan områdena
	return 0; /* OK */
}

/* EOF */