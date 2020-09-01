#include <iostream>
#include<opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\opencv.hpp>

using namespace cv;

void salt (Mat img, int n){
    int i, j;
    for(int k=0;k<n;k++){
        i=std::rand()%img.cols;
        j=std::rand()%img.rows;
        if (img.type()==CV_8UC1){
            img.at<uchar>(j,i)=255; // uchar is for  image type.
        }
        else if (img.type()==CV_8UC3){
            img.at<Vec3b>(j,i)[0]=255; //Blue
            img.at<Vec3b>(j,i)[1]=255; //Green
            img.at<Vec3b>(j,i)[2]=255; //Red
        }
    }
    imshow("TestWin",img);
/*
    to avoid using the at method:
    Mat_<uchar> img2=imread(...);
    img2(j,i) = something;
  */
}

void colorReduction(Mat img, int div=64){
    for(int j=0;j<img.rows;j++){
            uchar* data =img.ptr<uchar>(j); // Gives the address of an entire row.
        for(int i=0;i<img.cols*img.channels();i++){
          //  std::cout<<"Before reducing: "<<data[i]<<std::endl;
          data[i]=data[i]/div*div+div/2;
            //img.at<Vec3b>(j,i)[0] = img.at<uchar>(j,i)[0]/div*div + div/2;
           // img.at<Vec3b>(j,i)[0] = img.at<uchar>(j,i)[1]/div*div + div/2;
           // img.at<Vec3b>(j,i)[0] = img.at<uchar>(j,i)[2]/div*div + div/2;
           // std::cout<<"After reducing: "<<data[i]<<std::endl;
        }
    }
    std::cout<<"number of rows: "<<img.rows<<std::endl;
    std::cout<<"number of columns: "<<img.cols<<std::endl;
    std::cout<<"number of bytes in a row: "<<img.step<<std::endl;
    std::cout<<"Size of the pixel: "<<img.elemSize()<<std::endl;
    std::cout<<"total number of pixel values per row: "<<img.cols*img.channels()<<std::endl;
    std::cout<<"total number of pixels: "<<img.total()<<std::endl;
    std::cout<<"total number of pixel values per column: "<<img.rows*img.channels()<<std::endl;
}

// The above-mentioned function can be defined as:
  void colorReductionVer2(const Mat &inputImg,Mat &outImg, int div=64){
       for(int j=0;j<inputImg.rows;j++){
           // uchar* data =inputImg.ptr<uchar>(j);
        for(int i=0;i<inputImg.cols*inputImg .channels();i++){
          //data[i]=data[i]/div*div+div/2;
        }
    }
  }

int main() {

    Mat image=imread("chap2.jpg");
    if (image.isContinuous()){ // using this, instead of two loops, we can loop using single one.

        std::cout<<"No padding here."<<std::endl;
    }
    else{
        std::cout<<"There is padding."<<std::endl;
    }
    //salt(image, 200);
    //std::cout<<image.type()<<std::endl;
    imshow("TestWin1",image); // passing image by value is the same as passing by reference !!!, Important.
    colorReduction(image, 128);
    imshow("TestWin2", image);
    waitKey(0);
    return 0;
}
