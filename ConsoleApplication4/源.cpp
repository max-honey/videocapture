#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
#include <opencv2/core/core.hpp>  

using namespace cv;

int main()
{
	VideoCapture cap(0);//��Ĭ�ϵ�����ͷ
	if (!cap.isOpened())
	{
		return -1;
	}
	Mat frame; //������Ƶ������ 
	cap >> frame; //  ��cap>>frame;
	int hight = frame.rows;
	int width = frame.cols;
	bool stop = false;
	while (!stop)
	{
		cap >> frame; //  ��cap>>frame;
		imshow("Video", frame);
		if (waitKey(30) == 27) //Esc���˳�
		{
			stop = true;
		}
	}
	return 0;
}