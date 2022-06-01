#pragma once
#include <string>
#include <vector>
class Product;
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

	PurchaseHistoryCollection* myPurchaseHistoryCollection;
public:

	std::vector<Product> mySalesCollection;

	User(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	void createUser(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	User* getNextUserPtr();
	void deleteUser(User* userPtr);
	int checkId(std::string id);
	int checkPw(std::string pw);
	//�ű�
	std::string getName();
	PurchaseHistoryCollection getMyPurchaseHistoryCollection();

	
	std::vector<Product> getAllSalesCollection();
	std::vector<Product> getOnSalesCollection();
	std::vector<Product> getSoldoutCollection();


};