#include "stdafx.h"
#include <iostream>
#include "Vector3.h"
#include "Matrix3.h"

using namespace std;

//allowing us the ability to instantiate it with default 0 values
Matrix3::Matrix3() : xAxis(0, 0, 0), yAxis(0, 0, 0), zAxis(0, 0, 0)
{
	showMatrix();  //FOR TESTING, REMOVE THIS LINE!
}

//allowing us the ability to instantiate it with defined values
Matrix3::Matrix3(Vector3 anXAxis, Vector3 anYAxis, Vector3 anZAxis) : 
	xAxis(anXAxis), yAxis(anYAxis), zAxis(anZAxis)
{
	showMatrix();  //FOR TESTING, REMOVE THIS LINE!
}

Vector3 Matrix3::operator [] (int index) const {
	//to read
	return axis[index];
}

Vector3& Matrix3::operator [] (int index) { 
	//to write to it
	return axis[index];
}

//multiplication of our 3x3 matrix with another 3x3 matrix
Matrix3 Matrix3::operator * (const Matrix3& other) const {

	Matrix3 result;

	for (int r = 0; r < 3; ++r) {
		for (int c = 0; c < 3; ++c) {
			result.axis[c][r] = axis[0][r] * other.axis[c][0] +
				axis[1][r] * other.axis[c][1] +
				axis[2][r] * other.axis[c][2];
		}
	}

	return result;
}


//a method to see the current contents of our matrix, for testing ONLY
//if you need to display it, then it needs some cleaning up.
void Matrix3::showMatrix() {

	for (int r = 0; r < 3; ++r) {

		cout << "{";

		for (int c = 0; c < 3; ++c) {

			cout << c << "," << r << " = " << axis[c][r] << ", ";

		}
		cout << "}" << endl;
	}

	

}
