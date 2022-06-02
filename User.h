// Revision
 //   1. When & Who : 2022/06/01 01:00 am by B711089 Baek Jiyeon
 //      What : add attribute myPurchaseHistoryCollection, 
 //             add function getMyPurchaseHistoryCollection, getPurchaseHistory, getOneSalesProduct, addPurchaseHistory

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

	// PurchaseHistoryCollection* myPurchaseHistoryCollection;
public:

	std::vector<Product> mySalesCollection;
	std::vector<Product> myPurchaseHistoryCollection;

	User(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	void createUser(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	User* getNextUserPtr();
	void deleteUser(User* userPtr);
	int checkId(std::string id);
	int checkPw(std::string pw);
	//�ű�
	std::string getName();
	// PurchaseHistoryCollection getMyPurchaseHistoryCollection();

	
	std::vector<Product>& getAllSalesCollection();
	std::vector<Product>& getOnSalesCollection();
	std::vector<Product>& getSoldoutCollection();

	std::vector<Product>& getMyPurchaseHistoryCollection();

	Product& getPurchaseHistory(std::string pName);
	Product& getOneSalesProduct(std::string pName);
	void addPurchaseHistory(Product& p);                                                  
};