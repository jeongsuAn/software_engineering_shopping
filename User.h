#pragma once
#include <string>

class User {
private:
	std::string name;
	std::string residentRegistrationNumber; //�ֹι�ȣ
	std::string id;
	std::string pw;
	User* nextUserPtr;
	User* previousUserPtr;
public:
	User(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	void createUser(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	User* getNextUserPtr();
	void deleteUser(User* userPtr);
	int checkId(std::string id);
	int checkPw(std::string pw);
};