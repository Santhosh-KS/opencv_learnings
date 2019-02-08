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
    std::cout << "Copy constructed details\n";
    cv::Mat im1(image);
    PrintMatHeaderDetails(im1);
    std::cout << "Assignment details\n";
    cv::Mat im2;
    im2 = image;
    PrintMatHeaderDetails(im1);
  }
  return 0;
}
