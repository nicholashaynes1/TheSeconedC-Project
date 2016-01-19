/*
 * SeconedC++Controller.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: nhay7834
 */
#include "SeconedC++Controller.h";
#include <iostream>
using namespace std;


SeconedCController :: SeconedCController()
{
 this->classCount = 21;
}

void SeconedCController :: setClassCount(int classCount)
{
	this->classCount = classCount;
}

int SeconedCController:: getClassCount()
{
	return this->classCount;
}


void SeconedCController :: start()
{
	cout << "welcome to me second C++ class this week" <<endl;
	cout << "the current value of classCount is " << getClassCount() << endl;
	int newCount;
	cout << "Choose a new number for class" << endl;
	cin >> newCount;
	this->setClassCount(newCount);
	cout <<"The current value of class count is " << getClassCount() << endl;
}

