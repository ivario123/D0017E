/*
 *  plot.c
 *  
 *  Created by Fredrik Sandin on 20/08/12.
 */

#include "tga.h"
#include <math.h>
#include "interp1.h"
#define M_PI 3.14159265358979323846

#define Max(a,b) a>b?a:b
#define Min(a,b) a>b?b:a
void draw_line(PIXEL_RGB24 *image,int width,int height,float x1,float y1,float x2,float y2,PIXEL_RGB24 *color)
{
    float X[] = {Min(x1,x2),Max(x1,x2)}, Y[] ={Min(y1,y2),Max(y1,y2)};
    float x = x1;
    float y = y1;
    float ret = 0;
    while(ret!=-1)
    {
        ret = interp1((x1!=x2?X:Y),(x1!=x2?Y:X), 2, (x1!=x2?x:y),  (x1!=x2?&y:&x));
        if(x<width && y < width && x > -1 && y > -1)
            copy_pixel(&image[(int)(x+y*width)] , color);
        if(x1!=x2)
            x = x + (x1<x2?1:-1);
        else
            y = y + (y1<y2?1:-1);
    }
}
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
	draw_line(image,width,height,10,10,width/2,height/2,&red);

    draw_line(image,width,height,10,10,10,height*2,&blue);

    draw_line(image,width,height,10,10,width/2,10,&green);

    draw_line(image,width,height,10,10,width/2,10,&green);

    draw_line(image,width,height,190,180,30,40,&green);
	
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