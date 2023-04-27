#pragma once
#include <vector>
#include <string>
#include "news.h"
#include <iostream>
using namespace std;
class admin
{
	//struct admins
	//{
	//	char username;
	//	int password;
	//};

	vector<news> myNews;

public:
	admin();
	void login();
	void postNews();
	void removeNews();
	void updateNews();
	void addCategory();
	int avgRate();
	void displayNews();
};

