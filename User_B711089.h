#pragma once
#include <string>
#include "PurchaseHistoryCollection.h"

class User {
private:
	std::string name;
	std::string residentRegistrationNumber; //ÁÖ¹Î¹øÈ£
	std::string id;
	std::string pw;
	User* nextUserPtr;
	User* previousUserPtr;

	PurchaseHistoryCollection myPurchaseHistoeryCollection;
public:
	User(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	void createUser(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	User* getNextUserPtr();
	void deleteUser(User* userPtr);
	int checkId(std::string id);
	int checkPw(std::string pw);
	PurchaseHistoryCollection getMyPurchaseHistoryCollection();
};