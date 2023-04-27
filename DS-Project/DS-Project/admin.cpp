#include "admin.h"
#include "news.h"
#include <string>
#include <iostream>
using namespace std;
admin::admin() {

}
void admin::login(){}



void admin::postNews() {
	char c;
	do {
		news n = news();
		myNews.push_back(n);
		cout << "Post another one (y/n)?" << endl;
		cin >> c;
	} while (c == 'y' || c == 'Y');
}

void admin::removeNews() {
	cout << "Enter new number to be deleted: " << endl;
	int num;
	cin >> num;
	myNews.erase(myNews.begin()+num-1);
}

void admin::updateNews() {}
void admin::addCategory() {}
int admin::avgRate() { return 0; }
void admin::displayNews() {
	if (myNews.empty()) {
		cout << "No News anymore." << endl;
	}
	else {

	for (size_t i = 0; i < myNews.size();i++)
	{
		myNews.at(i).displayData();
	}
	}
}
