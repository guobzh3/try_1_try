#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main() {
	//imread 读取图像
	Mat src = imread("C://User//24019//Desktop//111.jpg");
	if (src.empty()) {
		std::cout << "could not find image..." << std::endl;

	}
	//namedwindow 创建窗口
	namedWindow("test", CV_WINDOW_AUTOSIZE);
	namedWindow("hls_tset", CV_WINDOW_AUTOSIZE);
	//展示图像
	Mat hls_tset;
	cvtColor(src, hls_tset, CV_BGR2HLS);
	imshow("test", src);
	imshow("hls_test", hls_tset);
	imwrite("D:hhh.png", hls_tset);
	waitKey(0);
	return 0;
}
