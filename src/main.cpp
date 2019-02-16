#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>

#include "MatHeaderProperties.hpp"

void PrintMatHeaderDetails(const cv::Mat& image)
{
  MatHeaderProperties mp;
  std::cout << "\t refcount = " << mp.GetRefCount(image) << "\n";
  std::cout << "\t Urefcount = " << mp.GetUrefCount(image) << "\n";
  std::cout << "\t Flags = " << mp.GetFlags(image) << "\n";
  std::cout << "\t Size = " << mp.GetSize(image) << "\n";
  std::cout << "\t MapCount = " << mp.GetMapCount(image) << "\n";
  std::cout << "\t Allocator Flags = " << mp.GetAllocatorFlags(image) << "\n";
  std::cout << "\t P = " << mp.GetStepP(image) << "\n";
  std::cout << "\t buf[0] = " << mp.GetStepBuff0(image) << "\n";
  std::cout << "\t bif[1] = " << mp.GetStepBuff1(image) << "\n";
}

int main(void)
{
  cv::Mat image(10,10,1 );
  if (image.empty()) {
    std::cout << "Empty\n";
  }
  else {
    std::cout << "Image details\n";
    PrintMatHeaderDetails(image);
    std::cout << "Copy constructed image\n";
    cv::Mat im1(image);
    PrintMatHeaderDetails(im1);
    std::cout << "Assignment image\n";
    cv::Mat im2;
    im2 = image;
    PrintMatHeaderDetails(im2);
    cv::Mat im3 = image.clone();
    std::cout << "Clone Copy Construct image\n";
    PrintMatHeaderDetails(im3);
    cv::Mat im4;
    im4 = image.clone();
    std::cout << "Clone Assignment image\n";
    PrintMatHeaderDetails(im4);
    cv::Mat im5;
    image.copyTo(im5);
    std::cout << "Copy Assignment image\n";
    PrintMatHeaderDetails(im5);
//    THRESH_OTSU
  }
  return 0;
}
