// Class : Satisfaction
// Description: These are member functions of Satisfaction control class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

// Revision
// 1. When & Who : 2022/06/02 15:20 pm by B711089 Baek Jiyeon
 //      What : added function transferSatisfaction 

#include "Satisfaction.h"

Satisfaction::Satisfaction(User *u, FILE *inFp, FILE *outFp)
{
    SatisfactionUI *sUI = new SatisfactionUI();     // UI create
    sUI->inputPurchaseSatisfaction(inFp);
    // Product &SalesProduct = u->getOneSalesProduct(sUI->getProductName());
    // Product &HistoryProduct = u->getPurchaseHistory(sUI->getProductName());
    // SalesProduct.savePurchaseSatisfaction(std::stoi(sUI->getScore()));      // 구매 만족도 저장
    // HistoryProduct.savePurchaseSatisfaction(std::stoi(sUI->getScore()));      // 구매 만족도 저장
    transferSatisfaction(u, sUI->getProductName(), sUI->getScore());
    sUI->setSellerID((u->getOneSalesProduct(sUI->getProductName())).getSellerID());
    sUI->enable(outFp);
}

void Satisfaction::transferSatisfaction(User *u, std::string pName, std::string score)
{
    Product &SalesProduct = u->getOneSalesProduct(pName);
//    Product &HistoryProduct = u->getPurchaseHistory(pName);
    SalesProduct.savePurchaseSatisfaction(std::stoi(score));      // 구매 만족도 저장
//    HistoryProduct.savePurchaseSatisfaction(std::stoi(score));      // 구매 만족도 저장

}