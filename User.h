#pragma once
#include <string>
class ProductCollection;
class PurchaseHistoryCollection;
class User {
private:
	std::string name;
	std::string residentRegistrationNumber; //�ֹι�ȣ
	std::string id;
	std::string pw;
	User* nextUserPtr;
	User* previousUserPtr;
	//�ű�
	ProductCollection* mySalesCollection;
	PurchaseHistoryCollection* myPurchaseHistoryCollection;
public:
	User(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	void createUser(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	User* getNextUserPtr();
	void deleteUser(User* userPtr);
	int checkId(std::string id);
	int checkPw(std::string pw);
	//�ű�
	std::string getName();
	PurchaseHistoryCollection getMyPurchaseHistoryCollection();
	ProductCollection getAllSalesCollection();
	ProductCollection getOnSalesCollection();
	ProductCollection getSoldoutCollection();


};