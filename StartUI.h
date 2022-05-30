#pragma once
#include <iostream>
class Start; //Start가 있다고 알려줌

class StartUI {
private:
	Start* start;
	FILE* inFp;
	FILE* outFp;

public:
	StartUI(Start* start, FILE* inFp, FILE* outFp);
	void enable();
	void fillJoinUI(); //회원가입 입력 함수
	void fillLoginUI(); //로그인 입력 함수
};