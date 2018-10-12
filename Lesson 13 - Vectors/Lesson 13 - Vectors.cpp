// Lesson 13 - Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ArmedEnemy.h"
#include "vector"

using namespace std;

int main()
{
	vector<ArmedEnemy*> aevector;

	ArmedEnemy* ae1 = new ArmedEnemy(100, 20);
	ArmedEnemy* ae2 = new ArmedEnemy(90, 20);
	ArmedEnemy* ae3 = new ArmedEnemy(80, 20);
	ArmedEnemy* ae4 = new ArmedEnemy(70, 20);
	ArmedEnemy* ae5 = new ArmedEnemy(60, 20);
	ArmedEnemy* ae6 = new ArmedEnemy(50, 20);
	ArmedEnemy* ae7 = new ArmedEnemy(40, 20);
	ArmedEnemy* ae8 = new ArmedEnemy(30, 20);
	ArmedEnemy* ae9 = new ArmedEnemy(20, 20);
	ArmedEnemy* ae10 = new ArmedEnemy(10, 20);
	
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

	for (int i = 0; i < aevector.size(); i++)
	{
		cout << *aevector[i];
	}

	int x;
	cin >> x;

    return 0;
}

