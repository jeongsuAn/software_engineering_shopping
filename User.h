#pragma once
#include <string>
class ProductCollection;
class PurchaseHistoryCollection;
class User {
private:
	std::string name;
	std::string residentRegistrationNumber; //주민번호
	std::string id;
	std::string pw;
	User* nextUserPtr;
	User* previousUserPtr;
	//신규
	ProductCollection* mySalesCollection;
	PurchaseHistoryCollection* myPurchaseHistoryCollection;
public:
	User(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	void createUser(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	User* getNextUserPtr();
	void deleteUser(User* userPtr);
	int checkId(std::string id);
	int checkPw(std::string pw);
	//신규
	std::string getName();
	PurchaseHistoryCollection getMyPurchaseHistoryCollection();
	ProductCollection getAllSalesCollection();
	ProductCollection getOnSalesCollection();
	ProductCollection getSoldoutCollection();


};