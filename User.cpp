#include <string>
#include "User.h"
using namespace std;

string User::getName() {
	return name;
}
double User::getRegNo() {
	return residentRegistrationNumber;
}
string User::getID() {
	return ID;
}
string User::getPassword() {
	return password;
}

void User::createID(string userDB, string name, string residentRegistrationNumber, string ID, string pw) {}
void User::checkLogin(string ID, string pw) {}
void User::withdrawalUser(string id) {}

ProductCollection User::getAllSalesCollection() {
	this->mySalesCollection.getList();
}
ProductCollection User::getOnSalesCollection() {
	this->mySalesCollection.getList();
}
ProductCollection User::getSoldoutCollection() {
	this->mySalesCollection.getList();
}