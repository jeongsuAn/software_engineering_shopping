#include "MainControlUI.h"

MainControlUI::MainControlUI(FILE* inFp, FILE* outFp, MainControl* mControl) {
	this->mControl = mControl;
	this->inFp = inFp;
	this->outFp = outFp;
}


void MainControlUI::selectLogout(std::string id) {
	fprintf(this->outFp, "2.2. �α׾ƿ�\n");
	fprintf(this->outFp, "> %s \n", id.c_str());
	printf("�α׾ƿ� ���� %s \n", id.c_str());
}

void MainControlUI::selectSearchItem() {

}

void MainControlUI::searchItemName() {

}

void MainControlUI::selectWithdrawalShop(std::string id) {
	fprintf(this->outFp, "1.2. ȸ��Ż��\n");
	fprintf(this->outFp, "> %s \n", id.c_str());
	printf("ȸ��Ż�� ���� %s \n", id.c_str());
}
