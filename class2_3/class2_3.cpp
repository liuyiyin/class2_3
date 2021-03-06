// class2_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv.hpp>
using namespace cv;

int main()
{   
	cv::Mat dispMat1 = imread("D:\\1.png");//白纸
	cv::Mat dispMat2 = imread("D:\\1.png");
	cv::Mat dispMat3 = imread("D:\\1.png");
	cv::Point pt;
	pt.x = 10;
	pt.y = 10;
	circle(dispMat1,pt,5,CV_RGB(255, 0, 0),1,8,0);
	cv::Point pt1;
	cv::Point pt2;
	pt1.x = 10;
	pt1.y = 10;
	pt2.x = 20;
	pt2.y = 10;
	line(dispMat2, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::Rect rect;
	rect.x = 10;
	rect.y = 10;
	rect.width = 10;
	rect.height = 10;
	rectangle(dispMat3, rect, CV_RGB(255, 0, 0), 1, 8, 0);
	imshow("圆", dispMat1);
	imshow("线", dispMat2);
	imshow("矩形", dispMat3);
	waitKey(0);
}

