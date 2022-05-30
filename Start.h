#pragma once
#include <string>
#include "UserList.h"
class StartUI;
class UserList;
class MainControl;
using namespace std;
class Start {
private:
	StartUI* sUI;
	UserList* userDB;
	MainControl* mControl;
	FILE* inFp;
	FILE* outFp;
	std::string tempName;
	std::string tempResidentRegistrationNumber;
	std::string tempId;
	std::string tempPw;


public:
	Start(FILE* in_fp, FILE* out_fp);
	void fillJoinShop();
	void loginShop();
	void setTempName(std::string name);
	void setTempResidentRegistrationNumber(std::string residentRegistrationNumber);
	void setTempId(std::string id);
	void setTempPw(std::string pw);
	MainControl* getMainControlPtr();
};