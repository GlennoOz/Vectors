// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Utility.h"
#include "Vector3.h"
#include "Matrix3.h"



using namespace std;


int main()
{

	//delcaring some dummy vectors
	Vector3 aVector = { 5,10,20 };
	aVector.showVector3();
	Vector3 bVector = { 11,15,18 };
	bVector.showVector3();
	Vector3 cVector = { 67,1,98 };
	cVector.showVector3();
	Vector3 dVector = { 10,12,13 };
	dVector.showVector3();

	//delcaring another set of dummy vectors
	Vector3 xVector = { 2,3,4 };
	xVector.showVector3();
	Vector3 yVector = { 1,2,3 };
	xVector.showVector3();
	Vector3 zVector = { 3,4,5 };
	xVector.showVector3();

	cout << endl;

	//declaring yet another set of dummy vectors
	Vector3 nVector = { 1,1,1 };
	nVector.showVector3();
	Vector3 mVector = { 1,1,1 };
	nVector.showVector3();
	Vector3 pVector = { 1,1,1 };
	nVector.showVector3();

	cout << endl;

	//declaring a matrix using the previously defined Vector3's
	Matrix3 aMatrix3Variable = { aVector, bVector, cVector };
	cout << endl;
	Matrix3 anotherMatrix3Variable = { bVector, cVector, dVector };
	cout << endl;

	//declaring another matrix using the previously defined Vector3's
	cout << "xTestMatrix3Variable = " << endl;
	Matrix3 xTestMatrix3Variable = { xVector, yVector, zVector };
	cout << endl;
	cout << "nTestrMatrix3Variable = " << endl;
	Matrix3 nTestrMatrix3Variable = { nVector, mVector, pVector };
	cout << endl;

	//multiplying the matrcies together
	cout << "This is instantiating the theresultmatrix matrix, and then assigning it the multiplication result " << endl;
	Matrix3 theresultmatrix = xTestMatrix3Variable * nTestrMatrix3Variable;
	cout << endl;

	cout << "after multiplying matrx xTestMatrix3Variable and nTestrMatrix3Variable together" << endl;
	//displaying the result
	theresultmatrix.showMatrix();

	cout << endl;
	//Vector3 output = aVector + bVector;
	 
	//testing our ability to use the [] operators to access the internal properties
	cout << theresultmatrix.data[2][2];

	cout << endl;

	//another test of access
	cout << "Vector a = " << aVector.x << ", " << aVector.y << ", " << aVector.z << endl;
	cout << "Vector b = " << bVector.x << ", " << bVector.y << ", " << bVector.z << endl;
	cout << "Vector c = " << cVector.x << ", " << cVector.y << ", " << cVector.z << endl;
	cout << "Vector d = " << dVector.x << ", " << dVector.y << ", " << dVector.z << endl;


	//old code, from before we refactored it to use classes..
	//YOU need to write the scalar for the new classes implentation
	//Vec3 newVector = VecScalar(aVector, 4);
	//cout << "New Scaled vector = " << newVector.x << ", " << newVector.y << ", " << newVector.z << endl;

	return 0;
}

