#include "StartUI.h"
#include "Start.h"
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"



StartUI::StartUI(Start* start, FILE* inFp, FILE* outFp) {
	this->start = start;
	this->inFp = inFp;
	this->outFp = outFp;
};

void StartUI::fillJoinUI() {

	char name[MAX_STRING], residentRegistrationNumber[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];
	// �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
	fscanf(this->inFp, "%s %s %s %s", name, residentRegistrationNumber, id, pw);

	this->start->setTempName(name);
	this->start->setTempResidentRegistrationNumber(residentRegistrationNumber);
	this->start->setTempId(id);
	this->start->setTempPw(pw);
	fprintf(this->outFp, "1.1. ȸ������\n");
	fprintf(this->outFp, "> %s %s %s %s\n", name, residentRegistrationNumber, id, pw);

}

void StartUI::enable() {

}

void StartUI::fillLoginUI() {
	char id[MAX_STRING], pw[MAX_STRING];
	// �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
	fscanf(this->inFp, "%s %s", id, pw);
	this->start->setTempId(id);
	this->start->setTempPw(pw);
	fprintf(this->outFp, "2.1. �α���\n");
	fprintf(this->outFp, "> %s %s \n", id, pw);
}