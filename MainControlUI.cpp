#include "MainControlUI.h"

MainControlUI::MainControlUI(FILE* inFp, FILE* outFp, MainControl* mControl) {
	this->mControl = mControl;
	this->inFp = inFp;
	this->outFp = outFp;
}


void MainControlUI::selectLogout(std::string id) {
	fprintf(this->outFp, "2.2. ·Î±×¾Æ¿ô\n");
	fprintf(this->outFp, "> %s \n", id.c_str());
	printf("·Î±×¾Æ¿ô ¼º°ø %s \n", id.c_str());
}

void MainControlUI::selectSearchItem() {

}

void MainControlUI::searchItemName() {

}

void MainControlUI::selectWithdrawalShop(std::string id) {
	fprintf(this->outFp, "1.2. È¸¿øÅ»Åğ\n");
	fprintf(this->outFp, "> %s \n", id.c_str());
	printf("È¸¿øÅ»Åğ ¼º°ø %s \n", id.c_str());
}
