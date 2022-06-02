#include "User.h"
#include "Product.h"

//원형 큐를 만듬
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
	tempUserPtr->previousUserPtr = this;
	tempUserPtr->nextUserPtr = this->nextUserPtr;
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

std::string User::getName() {
	return name;
}

std::string User::getId() {
	return id;
}



std::vector<Product>& User::getAllSalesCollection() {
	return mySalesCollection;
}


std::vector<Product>& User::getOnSalesCollection() {

	std::vector<Product> onsalesList;

	// 주석 부분 버려버리기
	//auto it = mySalesCollection->findFirstIdx();
	//// 판매 중인 것만 출력
	//if ((mySalesCollection->getProductByIdx(it))->getSalesState() == true || mySalesCollection->getProduct(it)->getQuantity() != 0)
	//{
	//	selling.push_back(mySalesCollection->getProduct(it))
	//	it = mySalesCollection->getNext(it);
	//}
	//for (auto iter = (*mySalesCollection).begin(); iter != (*mySalesCollection).end(); iter++)

	for (auto iter = mySalesCollection.begin(); iter != mySalesCollection.end(); iter++) 
	{
		if (std::stoi((*iter).getQuantity()) != 0)
		{
			onsalesList.push_back(*iter);
		}
	}
	return onsalesList;
}


std::vector<Product>& User::getSoldoutCollection() {
	
	std::vector<Product> soldoutList;
	
	//for (auto iter = (*mySalesCollection).begin(); iter != (*mySalesCollection).end(); iter++)

	for (auto iter = mySalesCollection.begin(); iter != mySalesCollection.end(); iter++)
	{
		// 품절인 것만 출력
		if (std::stoi((*iter).getQuantity()) == 0)
	    {
	        soldoutList.push_back(*iter);
	    }
	}
	return soldoutList;
}

std::vector<Product>& User::getMyPurchaseHistoryCollection()
{
	return this->myPurchaseHistoryCollection;
}


Product& User::getPurchaseHistory(std::string pName)
{
	for (auto it = this->myPurchaseHistoryCollection.begin(); it != myPurchaseHistoryCollection.end(); it++)
	{
		if ((*it).getProductName() == pName)
		{
			return *it;
		}
	}
}

Product& User::getOneSalesProduct(std::string pName)
{
	std::vector<Product>::iterator it = this->mySalesCollection.begin();

	for (; it != this->mySalesCollection.end(); it++)
	{
		if ((*it).getProductName() == pName)
		{
			return (*it);
		}
	}
}


void User::addPurchaseHistory(Product& p)
{
	myPurchaseHistoryCollection.push_back(p);
}


