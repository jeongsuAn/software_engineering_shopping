#pragma once
#include <string>
class Start;
class MainControlUI;
class UserList;
class MainControl {
private:
	MainControlUI* mainControlUI;	//mainControlUI �ּ�
	Start* start;	// start �ּ�
	std::string id;		//���� �α��� �Ǿ� �ִ� id
	UserList* userDB;
	FILE* inFp;
	FILE* outFp;
	//Item item; //��ǰ �ּ�

public:
	MainControl(FILE* in_fp, FILE* out_fp,Start* start,UserList* userDB,std::string id);
	void logout();
	void searchItem(MainControlUI mainControlUI); //��ǰ���� �˻�
	void withdrawalShop(); //ȸ��Ż��


};