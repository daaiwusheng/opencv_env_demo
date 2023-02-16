#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv){
	Mat img = imread("./demo.png");
	Mat DstPic, edge, grayImage;

	DstPic.create(img.size(), img.type());
	cvtColor(img, grayImage, COLOR_BGR2GRAY);
	blur(grayImage, edge, Size(3, 3));

	//运行canny算子
	Canny(edge, edge, 3, 4, 3);
	imwrite("Canny.jpg", edge);
}


