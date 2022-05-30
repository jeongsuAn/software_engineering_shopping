#include "Start.h"
#include "UserList.h"
#include "StartUI.h"
#include "MainControl.h"




Start::Start(FILE* inFp, FILE* outFp) {
	this->sUI = new StartUI(this,inFp,outFp);
	this->userDB = new UserList();
	this->inFp = inFp;
	this->outFp = outFp;
	this->mControl = nullptr;
};

void Start::fillJoinShop() {
	this->sUI->fillJoinUI();
	userDB->createID(this->tempName, this->tempResidentRegistrationNumber, this->tempId, this->tempPw);

};

void Start::loginShop() {
	this->sUI->fillLoginUI();
	if (userDB->checkLogin(this->tempId, this->tempPw)) {
		this->mControl = new MainControl(inFp,outFp,this,this->userDB,this->tempId);
		printf("로그인 성공\n");
	}
	else {
		printf("로그인 실패\n");
	}
}


void Start::setTempName(std::string name) {
	this->tempName = name;
}

void Start::setTempResidentRegistrationNumber(std::string residentRegistrationNumber) {
	this->tempResidentRegistrationNumber = residentRegistrationNumber;
}

void Start::setTempId(std::string id) {
	this->tempId = id;
}

void Start::setTempPw(std::string pw) {
	this->tempPw = pw;
}

MainControl* Start::getMainControlPtr() {
	return this->mControl;
}