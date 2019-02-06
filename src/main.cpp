#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>



int main(void)
{
  cv::Mat image(10,10,1 );
  cv::Mat im2 = image;
  cv::Mat im3;
  im3 = image;
  if (image.empty()) {
    std::cout << "Empty\n";
  }
  else {
    std::cout << cv::Header_Extractor(image)<< "\n";
    std::cout << im2.data << "\n";
    std::cout << im3.data << "\n";
  }
  return 0;
}
