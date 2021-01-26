#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\objdetect\objdetect.hpp>

using namespace std;
using namespace cv;


int main() {

    CascadeClassifier faceDetection;
	if (!faceDetection.load("C:\\Downloads\\opencv\\sources\\data\\haarcascades\\haarcascade_frontalface_default.xml"))  //the local place for library
	{
		cout << "\n XML File not found";
		exit(0);
	}

	char path[100];

	cout << "\n Enter name of first image : ";
	cin.getline(path, 100);   // git first image
	Mat img = imread(path , CV_LoAD_IMAGE_UNCHANGED ); //matrix for reading //imread for loading image
    if (image1.empty()) {
		cout << "\n image is not loaded! - " << img1;
	}
	else {
        cout << "\n image is found " ;
	}
	vector <rect> faces ;
	faceDetection.detectMultiscale(img, faces); // detecting


	for (int i = 0; i < faces.size(); i++) {
		Point pt1(faces[i].x, faces[i].y);
		Point pt2((faces[i].x + faces[i].height), (faces[i].y + faces[i].width));

		rectangle(img, pt1, pt2, Scalar(0, 255, 0), 2, 8, 0);
	}

	imwrite("c: \\ gs\\output.jpg", img); //saving place
	cout << "\n Image is detected successfully!";


    return 0;
}

