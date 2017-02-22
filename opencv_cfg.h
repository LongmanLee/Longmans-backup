#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include <cv.h>
#include <cxcore.h>
#include<highgui.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdio.h>
using namespace std;
using namespace cv;
#ifdef _DEBUG
#pragma comment(lib,"opencv_calib3d2412d.lib")
#pragma comment(lib,"opencv_contrib2412d.lib")
#pragma comment(lib,"opencv_core2412d.lib")
#pragma comment(lib,"opencv_features2d2412d.lib")
#pragma comment(lib,"opencv_flann2412d.lib")
//#pragma comment(lib,"opencv_gpu2412d.lib")
#pragma comment(lib,"opencv_highgui2412d.lib")
#pragma comment(lib,"opencv_imgproc2412d.lib")
#pragma comment(lib,"opencv_legacy2412d.lib")
#pragma comment(lib,"opencv_ml2412d.lib")
#pragma comment(lib,"opencv_nonfree2412d.lib")
#pragma comment(lib,"opencv_objdetect2412d.lib")
//#pragma comment(lib,"opencv_ocl245d.lib")
#pragma comment(lib,"opencv_photo2412d.lib")
#pragma comment(lib,"opencv_stitching2412d.lib")
#pragma comment(lib,"opencv_superres2412d.lib")
#pragma comment(lib,"opencv_ts2412d.lib")
#pragma comment(lib,"opencv_video2412d.lib")
#pragma comment(lib,"opencv_videostab2412d.lib")
#else
#pragma comment(lib,"opencv_calib3d2412.lib")
#pragma comment(lib,"opencv_contrib2412.lib")
#pragma comment(lib,"opencv_core2412.lib")
#pragma comment(lib,"opencv_features2d2412.lib")
#pragma comment(lib,"opencv_flann2412.lib")
//#pragma comment(lib,"opencv_gpu2412.lib")
#pragma comment(lib,"opencv_highgui2412.lib")
#pragma comment(lib,"opencv_imgproc2412.lib")
#pragma comment(lib,"opencv_legacy2412.lib")
#pragma comment(lib,"opencv_ml2412.lib")
#pragma comment(lib,"opencv_nonfree2412.lib")
#pragma comment(lib,"opencv_objdetect2412.lib")
//#pragma comment(lib,"opencv_ocl245.lib")
#pragma comment(lib,"opencv_photo2412.lib")
#pragma comment(lib,"opencv_stitching2412.lib")
#pragma comment(lib,"opencv_superres2412.lib")
#pragma comment(lib,"opencv_ts2412.lib")
#pragma comment(lib,"opencv_video2412.lib")
#pragma comment(lib,"opencv_videostab2412.lib")
#endif