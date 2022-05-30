#pragma once
#include <string>
class Start;
class MainControlUI;
class UserList;
class MainControl {
private:
	MainControlUI* mainControlUI;	//mainControlUI 주소
	Start* start;	// start 주소
	std::string id;		//현재 로그인 되어 있는 id
	UserList* userDB;
	FILE* inFp;
	FILE* outFp;
	//Item item; //상품 주소

public:
	MainControl(FILE* in_fp, FILE* out_fp,Start* start,UserList* userDB,std::string id);
	void logout();
	void searchItem(MainControlUI mainControlUI); //상품정보 검색
	void withdrawalShop(); //회원탈퇴


};