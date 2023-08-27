#include <iostream>
#include <opencv4/opencv2/opencv.hpp>
using namespace cv;


int main(){
    VideoCapture camera(0);

    if(!camera.isOpened()){
        std::cout << "Cannot open camera index: " << 0 << '\n';
        return -1;
    }


    while(camera.isOpened()){
        Mat frame;

        camera >> frame;
        imshow("Window", frame);

        waitKey(1);
    }
}