#include "MainControl.h"
class MainControlUI {
private:
	MainControl* mControl;
	FILE* inFp;
	FILE* outFp;
public:
	MainControlUI(FILE* in_fp, FILE* out_fp, MainControl* mControl);
	void selectLogout(std::string id);
	void selectSearchItem();
	void searchItemName();
	void selectWithdrawalShop(std::string id);
};

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
	int checkId(std::string id);
	int checkPw(std::string pw);
};

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


//-- ���⼭ ���� ���� ���� --//

MainControl::MainControl(FILE* in_fp, FILE* out_fp, Start* start,UserList* userDB, std::string id) {
	this->start = start;
	this->id = id;
	this->mainControlUI = new MainControlUI(in_fp,out_fp,this);
	this->userDB = userDB;
	this->inFp = inFp;
	this->outFp = outFp;
}

void MainControl::logout() {
	mainControlUI->selectLogout(this->id);
	this->id = "none"; //�α׾ƿ��� ��


}

void MainControl::searchItem(MainControlUI mainControlUI) {
	
}

void MainControl::withdrawalShop() {
	this->userDB->withdrawalUser(this->id);
	this->mainControlUI->selectWithdrawalShop(this->id);
	this->id = "none"; //�α׾ƿ��� ��
}
