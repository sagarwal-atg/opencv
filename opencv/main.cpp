//
//  main.cpp
//  opencv
//
//  Created by Shubhankar Agarwal on 8/28/15.
//  Copyright (c) 2015 Shubhankar Agarwal. All rights reserved.
//s
    
#include <cv.h>
#include <highgui.h>
    
    using namespace cv;
    
    int main( int argc, char** argv )
    {
        Mat image;
        image = imread( argv[1], 1 );
        
        if( argc != 2 || !image.data )
        {
            printf( "No image data \n" );
            return -1;
        }
        
        namedWindow( "Display Image", CV_WINDOW_AUTOSIZE );
        imshow( "Display Image", image );
        
        waitKey(0);
        
        return 0;



