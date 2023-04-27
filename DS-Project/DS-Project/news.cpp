#include "news.h"
#include <string>
#include <iostream>
using namespace std;

news::news() {
	enterData();
	id++;
}

void news::enterData() {
	cout << "Enter new title" << endl;
	cin >> title;
	cout << "Enter new description" << endl;
	cin >> description;
	cout << "Enter new category" << endl;
	cin >> category;
	cout << "Enter new date" << endl;
	cin >> date;
	cout << "You have successfully entered new number: " << id << endl;
}

void news:: displayData() {
	cout << "New no.: " << id << endl;
	cout << "new title: " << title << endl;
	cout << "new description: " << description << endl;
	cout << "new category: " << category << endl;
	cout << "new date: " << date << endl;
}
//
//void news::updateId() {
//	id--;
//}

