// Lesson 13 - Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ArmedEnemy.h"
#include "vector"
#include "stack"
#include "Queue"

using namespace std;

int main()
{
	vector<ArmedEnemy*> aevector;
	stack<ArmedEnemy*> aestack;
	queue<ArmedEnemy*> aequeue;

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

	aestack.push(ae1);
	aestack.push(ae2);
	aestack.push(ae3);
	aestack.push(ae4);
	aestack.push(ae5);
	aestack.push(ae6);
	aestack.push(ae7);
	aestack.push(ae8);
	aestack.push(ae9);
	aestack.push(ae10);

	aequeue.push(ae1);
	aequeue.push(ae2);
	aequeue.push(ae3);
	aequeue.push(ae4);
	aequeue.push(ae5);
	aequeue.push(ae6);
	aequeue.push(ae7);
	aequeue.push(ae8);
	aequeue.push(ae9);
	aequeue.push(ae10);

	cout << "Vector enemy HPs:\n";
	for (int i = 0; i < aevector.size(); i++)
	{
		cout << *aevector[i] << "\n";
	}

	cout << "\n\n\nStack enemy HPs:\n";
	for (int i = 0; i < aevector.size(); i++)
	{
		cout << *aestack.top() << "\n";
		aestack.pop();
	}

	cout << "\n\n\nQueue enemy HPs:\n";
	for (int i = 0; i < aevector.size(); i++)
	{
		cout << *aequeue.front() << "\n";
		aequeue.pop();
	}

	int x;
	cin >> x;

    return 0;
}

