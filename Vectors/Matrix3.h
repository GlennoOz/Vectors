#pragma once
#include "Vector3.h"


class Matrix3 {
	//similar way we have defined out 3D vector, but this time
	//using our Vector3 within this declaration
public:
	union {
		struct {
			Vector3 xAxis;
			Vector3 yAxis;
			Vector3 zAxis;
		};

		Vector3 axis[3];

		float data[3][3];
	};

	//declaring 2 different ways to instantiate this class
	Matrix3();
	Matrix3(Vector3 xAxis, Vector3 yAxis, Vector3 zAxis);

	//declaring the [] operator methods
	Vector3& operator [] (int index);  //for reading the specified element
	Vector3 operator [] (int index) const;  //for writing

	//declaring the * operator
	Matrix3 operator * (const Matrix3& aMatrix3) const;

	void showMatrix();
};