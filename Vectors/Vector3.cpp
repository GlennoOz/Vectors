#include "stdafx.h"
#include <iostream>
#include "Vector3.h"

using namespace std;


//allowing us the ability to instantiate it with default 0 values
Vector3::Vector3() : x(0), y(0), z(0)
{
	data[0] = x;
	data[1] = y;
	data[2] = z;
}

//allowing us the ability to instantiate it with defined values
Vector3::Vector3(const float& X, const float& Y, const float& Z) : x(X), y(Y), z(Z)
{
	data[0] = x;
	data[1] = y;
	data[2] = z;
}

//the + operator code
Vector3 Vector3::operator + (const Vector3& other) const {
	return{ x + other.x, y + other.y, z + other.z };
}

//ADD YOUR OTHER OPERATORS FUNCTIONS HERE

//being able to SET the value at index using []
float Vector3::operator [] (int index) const { 
	return data[index]; 
}

//being able to GET the value at index using []
float& Vector3::operator [] (int index) { 
	return data[index]; 
}

//a simple way to see the vector, for testing only
void Vector3::showVector3() {
	cout << "The vector = ";
	for (int index = 0; index < 3; index++) {
		cout << data[index] << ",";
	}
	cout << endl;
	
}
