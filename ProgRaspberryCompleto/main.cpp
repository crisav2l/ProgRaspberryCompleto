#include <wiringPi.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;



int main()
{
	Mat image;
	image = imread(" ", IMREAD_COLOR); // Read the file


	return 0;
}