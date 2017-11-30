#ifndef Vector3_h
#define Vector3_h


class Vector3 {
	//our 3D Vector  (could represent anything, 
	//so we've added a number of different interfaces and 
	//variables that share the same memory))

public:
	float x, y, z;

public:
	union {
		struct {
			float x, y, z;
		};

		//use r,g,b if you are using this to represent a color
		struct {
			float r, g, b;
		};

		//allowing us to use the [] method of accessing the internal x,y,z
		float data[3];


	};

	//declaring 2 different ways to instantiate this class
	Vector3();
	Vector3(const float& x, const float& y, const float& z);

	//overwriting the + operator
	Vector3 operator + (const Vector3 &other) const;
	
	//overwriting the [] operator
	float operator [] (int index) const;  //for writing
	float& operator [] (int index) ;  //for reading the specified element


	//  ---add the other operations here---
	//from assessment Criteria:
	//Methods for common vector maths, 
	//	including translation, scale, magnitude, normalisation, and dot product

	//this is some test code //TO BE REMOVED BEFORE A RELEASE/DISTRIBUTABLE BUILD 
	void showVector3();
};







#endif Vector3_h
