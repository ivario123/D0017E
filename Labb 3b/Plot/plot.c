/*
 *  plot.c
 *  
 *  Created by Fredrik Sandin on 20/08/12.
 */

#include "tga.h"
#include <math.h>
#include "interp1.h"

/*!
 * The Value of pi to some decimals
 */
#define M_PI 3.14159265358979323846
/*!
 *Macro that computes the maximum of to values
 */
#define Max(a,b) a>b?a:b
/*!
 *Macro that computes the minimum of to values
 */
#define Min(a,b) a>b?b:a

/*
 * A way better way to do the line drawing is this
    dx = x2 − x1
    dy = y2 − y1

    for x from x1 to x2 do
        y = y1 + dy × (x − x1) / dx
        plot(x, y)

 * No need for linear interpolation, that's just a waste of compute.
 * This would also save you time since you don't need to do type casting.
 */
/*!
 * Function that draws a line between two given points
 * @param image is the pixel pointer list that stores the rgb values
 * @param width is the width of the image
 * @param height is the height of the image
 * @param x1 is the x value of one of the endpoints, expects floats since interp1 expects floats
 * @param y1 is the y value of one of the endpoints, expects floats since interp1 expects floats
 * @param x2 is the x value of the other endpoint, expects floats since interp1 expects floats
 * @param y2 is the y value of the other endpoint, expects floats since interp1 expects floats
 * @param color is the desired color of the line
 */
void draw_line(PIXEL_RGB24 *image,int width,int height,float x1,float y1,float x2,float y2, const PIXEL_RGB24 *color){
    //Starts at smallest X if smallest x is not x1 then invert the Y list as well
    // x1 = x2
    // X[] = {x1,x1}
    float X[] = { Min( x1 , x2 ) , Max( x1 , x2 ) }, Y[] = { ( X[0] == x1 ? y1 : y2),( X[0] == x1 ? y2 : y1 ) };
    //if x1 and x2 are identical i.e a vertical line then check if the y reorient the Y list to start at the smallest
    //value
    (x1 == x2 && y1 > y2) ? Y[0] = y2 , Y[1] = y1 : 0;
    //x and y are counters for the individual directions and ret is the place holder that checks if the coordinates are valid
    float x = X[0], y = Y[0], ret = 0;
    //While the coordinates are valid or we haven't reached the screen yet
    while(ret != -1 || (x || y)<0){
        //check if the current coordinates are valid, if so then copy the color to that pixel
        if(x < width && y < height && x > -1 && y > -1)
            copy_pixel(&image[ ( int ) x + ( int ) y * width ] , color );
        //if line is not horizontal then iterate x and interpolate the new y value
        if ( x1 != x2 )
            ret = interp1( X, Y, 2, x+=0.0455, &y );
        //otherwise iterate y until we have reached the endpoint of the line.
        else
            y++ > Y[1] ? ret = -1 : 0;
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
    draw_circle(image,width,height,width/2,height/2,120,&blue);
    draw_circle(image,width,height,width/2,height/2,240,&blue);
    draw_circle(image,width,height,width/2,height/2,20,&blue);
    draw_circle(image,width,height,width/2,height/2,width/2,&red);
    /* Draw a few lines on the image */
    draw_line(image,width,height,0,0,(float)width,(float)height,&red);
    draw_line(image,width,height,0,(float)height,width,0,&red);
    draw_line(image,width,height,width/2,234,width/2,136,&red);
    draw_line(image,width,height,width/2,276,width/2,373,&red);
    draw_line(image,width,height,276,width/2,375,width/2,&red);
    draw_line(image,width,height,236,width/2,137,width/2,&red);
    draw_line(image,width,height,47,136,465,136,&green);
    draw_line(image,width,height,47,136,width/2,495,&green);
    draw_line(image,width,height,465,136,width/2,495,&green);
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