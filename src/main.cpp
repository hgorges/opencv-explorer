#include <cstdio>
#include <opencv2/opencv.hpp>

int main(const int argc, char **argv) {
  if (argc != 2) {
    printf("Usage: %s <path_to_image>\n", argv[0]);
    return -1;
  }

  const char *path = argv[1];
  const cv::Mat image = cv::imread(path, cv::IMREAD_GRAYSCALE);
  if (!image.data) {
    printf("No image data found at '%s'\n", path);
    return -1;
  }

  cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
  cv::imshow("Display Image", image);

  cv::waitKey(0);
  return 0;
}
