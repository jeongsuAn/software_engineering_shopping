// Class : checkPurchaseHistory
// Description: This is member function of checkPurchaseHistory control class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#include "CheckPurchaseHistory.h"

CheckPurchaseHistory::CheckPurchaseHistory(User *u, FILE* outFp)
{
    CheckPurchaseHistoryUI* cphUI = new CheckPurchaseHistoryUI(u, outFp);
    cphUI->enableUI(u, outFp);
}