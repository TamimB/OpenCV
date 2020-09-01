#include <iostream>
#include<opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\opencv.hpp>

using namespace cv;

void onMouse(int event, int x, int y, int flags, void* param){

switch (event) {

case EVENT_LBUTTONDOWN:
    std::cout<<"Mouse clicked   "<<x<<" "<<y<<std::endl;
    break;
}

}

Mat fun(){

Mat testImg(300,300,CV_8U,128);
return testImg;
}

//int main() {
//    Mat Img;
//    Img = imread("Test.jpg",IMREAD_GRAYSCALE);
//    std::cout<<Img.size()<<std::endl;
//    if(Img.empty()) {
//        std::cout<<"Error loading image."<<std::endl;
//    }
//    else {
//        namedWindow("Test1");
//    }
//    // No of channels:
//    std::cout<<"No of channels of the image : "<<Img.channels()<<std::endl;
//    Mat res;
//    flip(Img,res,1);
//    namedWindow("Test2");
//    imshow("Test2",res);
//    setMouseCallback("Test1",onMouse,reinterpret_cast<void*>(&Img));
//    circle(Img,Point(Img.cols/2,Img.rows/2), 25, 0, 10);
//    std::cout<<Img.rows/2<<"  "<<Img.cols/2<<std::endl;
//    imshow("Test1",Img);

    // part 2
//    namedWindow("win1");
//    namedWindow("win2");
//    namedWindow("win3");
//    namedWindow("win4");
//    namedWindow("win5");
//    namedWindow("win6");
//    Mat im1(240,320,CV_8U,100);
//    imshow("win1",im1);
//    waitKey(0);
//    im1.create(200,200,CV_8U);
//    im1=200;
//    imshow("win1",im1);
//    waitKey(0);
//    Mat im2(240,320,CV_8UC3,Scalar(0,0,255));
//    imshow("win2",im2);
//    waitKey(0);
//    Mat Img3=imread("Test.jpg");
//    Mat im4(Img3); // changes in 3 affect 4
//    im1=Img3; // changes in 3 affect 1
//    Img3.copyTo(im2); // changes in 3 DON'T affect 2
//    Mat im5=Img3.clone(); // changes in 3 DON'T affect 5
//
//    flip(Img3,Img3,1);
//    imshow("win3",Img3);
//    imshow("win1",im1);
//    imshow("win2",im2);
//    imshow("win4",im4);
//    imshow("win5",im5);
//    waitKey(0);
//
//    Mat grey=fun();
//    imshow("win6",grey);
//    waitKey(0);
//
//    im1=imread("Test.jpg",IMREAD_GRAYSCALE);
//    im1.convertTo(im2,CV_32F,1/255.0,0.0);
//
//    imshow("win6",im2);
//    waitKey(0);


    // part 3:
//    Mat Img;
//    Img = imread("Test.jpg",IMREAD_ANYCOLOR);
//    Mat temp = imread("logo.jpg",IMREAD_ANYCOLOR);
//    Rect roi = Rect(Img.cols-temp.cols,Img.rows-temp.rows,temp.cols,temp.rows);
//    Mat newImg(Img,roi);
//    temp.copyTo(newImg,temp); // Copying using image masks, applicable to gray scale images
//    imshow("image1",Img);
//    imshow("image2",newImg);
//    waitKey(0);
	//return 0;
//}
