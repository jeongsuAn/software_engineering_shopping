#include "User.h"

//���� ť�� ����
User::User(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw) {
	this->name = name;
	this->residentRegistrationNumber = residentRegistrationNumber;
	this->id = id;
	this->pw = pw;
	this->nextUserPtr = this;
	this->previousUserPtr = this;
}

void User::createUser(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw) {
	User* tempUserPtr = new User(name, residentRegistrationNumber, id, pw);
	this->nextUserPtr->previousUserPtr = tempUserPtr;
	this->nextUserPtr = tempUserPtr;
}

User* User::getNextUserPtr() {
	return this->nextUserPtr;
}

void User::deleteUser(User* userPtr) {
	userPtr->nextUserPtr->previousUserPtr = userPtr->previousUserPtr;
	userPtr->previousUserPtr->nextUserPtr = userPtr->nextUserPtr;
	delete(userPtr);
}

int User::checkId(std::string id) {
	if (this->id == id) {
		return 1;
	}
	else {
		return 0;
	}
}

int User::checkPw(std::string pw) {
	if (this->pw == pw) {
		return 1;
	}
	else {
		return 0;
	}
}

PurchaseHistoryCollection User::getMyPurchaseHistoryCollection(){
	return this->myPurchaseHistoeryCollection;
}