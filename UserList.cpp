#include "UserList.h"
#include "User.h"

UserList::UserList() {
	this->userCount = 0;
	this->userDB = nullptr;
}

void UserList::createID(std::string name, std::string residentRegistrationNumber, std::string id, std::string pw) {

	if (this->userCount == 0) {
		this->userDB = new User(name, residentRegistrationNumber, id, pw);
		userCount++;
	}
	else {
		this->userDB->createUser(name, residentRegistrationNumber, id, pw);
		userCount++;
	}
}

// 0 이면 로그인 실패, 1이면 로그인 성공.
int UserList::checkLogin(std::string id, std::string pw) {
	User* tempUserPtr = this->userDB;
	int result = 0;
	for (int i = 0; i < this->userCount; i++) {
		if (tempUserPtr->checkId(id) == 1) {
			if (tempUserPtr->checkPw(pw) == 1) {
				result = 1;
				break;
			}
		}
		tempUserPtr = tempUserPtr->getNextUserPtr();
	}
	return result;
}


void UserList::withdrawalUser(std::string id) {
	User* tempUserPtr = this->userDB;
	int result = 0;
	for (int i = 0; i < this->userCount; i++) {
		if (tempUserPtr->checkId(id) == 1) {
			tempUserPtr->deleteUser(tempUserPtr);
			this->userCount--;
			break;
		}
		tempUserPtr = tempUserPtr->getNextUserPtr();
	}
	
}
