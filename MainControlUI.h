#pragma once
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