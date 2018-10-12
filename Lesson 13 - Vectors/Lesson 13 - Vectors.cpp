// Lesson 13 - Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ArmedEnemy.h"
#include "vector"

using namespace std;

int main()
{
	vector<ArmedEnemy> aevector;

	ArmedEnemy ae1(100, 20);
	ArmedEnemy ae2(90, 20);
	ArmedEnemy ae3(80, 20);
	ArmedEnemy ae4(70, 20);
	ArmedEnemy ae5(60, 20);
	ArmedEnemy ae6(50, 20);
	ArmedEnemy ae7(40, 20);
	ArmedEnemy ae8(30, 20);
	ArmedEnemy ae9(20, 20);
	ArmedEnemy ae10(10, 20);

	aevector.push_back(ae1);
	aevector.push_back(ae2);
	aevector.push_back(ae3);
	aevector.push_back(ae4);
	aevector.push_back(ae5);
	aevector.push_back(ae6);
	aevector.push_back(ae7);
	aevector.push_back(ae8);
	aevector.push_back(ae9);
	aevector.push_back(ae10);

    return 0;
}

