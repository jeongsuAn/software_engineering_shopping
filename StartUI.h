#pragma once
#include <iostream>
class Start; //Start�� �ִٰ� �˷���

class StartUI {
private:
	Start* start;
	FILE* inFp;
	FILE* outFp;

public:
	StartUI(Start* start, FILE* inFp, FILE* outFp);
	void enable();
	void fillJoinUI(); //ȸ������ �Է� �Լ�
	void fillLoginUI(); //�α��� �Է� �Լ�
};