/*
 *  plot.c
 *  
 *  Created by Fredrik Sandin on 20/08/12.
 */

#include "tga.h"
#include <math.h>
#define M_PI 3.14159265358979323846
/*!
	Draw circle on image.
 
	\param image Image buffer of size width*height.
	\param width Width of image.
	\param height Height of image.
	\param x0 X-coordinate of circe centre.
	\param y0 Y-coordinate of circe centre.
	\param radius Radius of circle.
	\param color Color of circle.
*/

void draw_line(PIXEL_RGB24 *image,int width,int height,int x1,int y1,int x2,int y2,int r,int g,int b)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    if(dx == 0 && dy!=0)
    {
        for(int y = y1; y != y2 ; y = y+(y1<y2?1:-1))
        {
            int x = x1;
            if(-1 < x && x < width && -1 < y && y  < height )
            {
                image[x+y*width].R = r;
                image[x+y*width].G = g;
                image[x+y*width].B = b;
            }
        }
    }
    for(int x = x1; x != x2 ; x = x+(x1<x2?1:-1))
    {
        int y = y1 + dy * (x - x1) / dx;
        if(-1 < x && x < width && -1 < y && y < height )
        {
            image[x+y*width].R = r;
            image[x+y*width].G = g;
            image[x+y*width].B = b;
        }
    }
}
void draw_circle(PIXEL_RGB24 *image, int width, int height,
	int x0, int y0, int radius, const PIXEL_RGB24 *color) {
	
	double alpha; /* angle */
	int x,y,index;
	
	for(alpha=0; alpha<=2*M_PI; alpha+=0.5/radius) {
		
		x = x0 + radius*cos(alpha); /* x coordinate */
		y = y0 + radius*sin(alpha); /* y coordinate */
		
		if(x>=0 && x<width && y>=0 && y<height ) {
		
			index = x + width*y; /* index of pixel in buffer */
			
			copy_pixel(&image[index], color);
		}
	}
}

int main(void) {

	int width;
	int height;
	PIXEL_RGB24 *image,red,green,blue;

	red.R=255; red.G=0;     red.B=0;
	green.R=0; green.G=255; green.B=0;
	blue.R=0;  blue.G=0;    blue.B=255;
	
	if(tga_read("C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3b\\Plot\\empty.tga",&width,&height,&image)!=TGA_OK) {
		goto error;
	}
	
	/* Draw a few circles on the image */
	draw_circle(image,width,height,width/2,height/2,width/3,&red);
	draw_circle(image,width,height,width/2,height/2,width/4,&green);
	draw_circle(image,width,height,width/2,0,width/2,&blue);
	draw_line(image,width,height,10,10,width/2,height/2,255,0,0);

    draw_line(image,width,height,10,10,10,height*2,0,0,255);

    draw_line(image,width,height,10,10,width/2,10,0,0,0);
	
	if(tga_write("C:\\Users\\55131\\Documents\\LTU Kurser\\D0017E\\Labb 3b\\Plot\\NovelLinesAndCircels.tga",width,height,image,24)!=TGA_OK) {
		goto error_free;
	}

exit:
	free(image); /* Free memory allocated by tga_read() */
	return 0;
	
error_free:
	free(image);
	
error:
	return -1;	
}

/* EOF */