#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
#include <opencv2/core/core.hpp>  

using namespace cv;

int main()
{
	VideoCapture cap(0);//打开默认的摄像头
	if (!cap.isOpened())
	{
		return -1;
	}
	Mat frame; //接收视频输入流 
	cap >> frame; //  或cap>>frame;
	int hight = frame.rows;
	int width = frame.cols;
	bool stop = false;
	while (!stop)
	{
		cap >> frame; //  或cap>>frame;
		imshow("Video", frame);
		if (waitKey(30) == 27) //Esc键退出
		{
			stop = true;
		}
	}
	return 0;
}