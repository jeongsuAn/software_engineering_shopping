#pragma once
#include <string>
class User; //User가 있다고 알려줌


#define MAXUSER 20
class UserList {
private:
	int userCount;
	User* userDB;
public:
	UserList();
	void createID(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw);
	int checkLogin(std::string id, std::string pw);
	void withdrawalUser(std::string id);
};