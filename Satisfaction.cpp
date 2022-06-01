#include "Satisfaction.h"

Satisfaction::Satisfaction(User *u, FILE *inFp, FILE *outFp)
{
    SatisfactionUI *sUI = new SatisfactionUI();     // UI create
    sUI->inputPurchaseSatisfaction(inFp);
    // Product *p = new Product();
    // p = (u->getMyPurchaseHistoryCollection()).getProductDetails(sUI->getProductName());
    Product &SalesProduct = u->getOneSalesProduct(sUI->getProductName());
    Product &HistoryProduct = u->getPurchaseHistory(sUI->getProductName());
    sUI->setSellerID(SalesProduct.getSellerID());
    SalesProduct.savePurchaseSatisfaction(std::stoi(sUI->getScore()));      // 구매 만족도 저장
    HistoryProduct.savePurchaseSatisfaction(std::stoi(sUI->getScore()));      // 구매 만족도 저장
    sUI->enable(outFp);
}

// void Satisfaction::transferSatisfaction()
// {

// }