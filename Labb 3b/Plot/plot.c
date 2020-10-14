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
    //Reorienting the direction of the line to start at the smallest value
    float X[] = {Min(x1,x2),Max(x1,x2)}, Y[] ={(X[0] == x1 ? y1:y2),(X[0] == x1 ? y2:y1)};
    //Starting att the smallest value in the vector
    float x = X[0];
    float y = Y[0];
    //Placeholder variable to make sure that a coordinate is valid
    float ret = 0;
    //If coordinate is not valid break
    while(ret!=-1)
    {
        //If dx = 0 then just keep the last x otherwise add 1 to x
        x = ( x1 != x2 ? x + 1 : x);
        if(x1!=x2)
            ret = interp1(X,Y, 2, x,  &y);
        //Since I am basing every thing on itteration in X direction
        // I need to have a special case for Y itteration where dx = 0
        else
        {
            y += 1;
            ret = 0;
            if(y>Y[1])
                ret = -1;
        }
        if(x<width && y < width && x > -1 && y > -1)
            copy_pixel(&image[(int)((int)x+(int)y*width)] , color);
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

    draw_line(image,width,height,190,180,280,80,&blue);

    draw_line(image,width,height,190,80,280,120,&red);
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