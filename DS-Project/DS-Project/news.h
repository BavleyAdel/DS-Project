#pragma once
#include "string"
#include <iostream>
using namespace std;
#include "stack"
class news
{
	string title, description, category;
	string date;
	int rate = 0;
	int id = 0;
public:
	news();
	void enterData();
	void displayData();
	void updateId();
};