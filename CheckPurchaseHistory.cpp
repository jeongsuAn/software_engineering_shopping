#include "CheckPurchaseHistory.h"

CheckPurchaseHistory::CheckPurchaseHistory(User *u, FILE* outFp)
{
    CheckPurchaseHistoryUI* cphUI = new CheckPurchaseHistoryUI(u, outFp);
    cphUI->enableUI(u, outFp);
}