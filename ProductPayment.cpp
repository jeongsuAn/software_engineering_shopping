// Class : ProductPayment
// Description: This is member function of ProductPayment control class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#include "ProductPayment.h"

ProductPayment::ProductPayment(FILE* outFp, User *u, std::string pName)
{
    // u->getMyPurchaseHistoryCollection().addPurchaseHistory(p); // 구매 내역 추가
    // 구매한 상품 재고 감소
    Product& p = u->getOneSalesProduct(pName);
    p.getQuantity();
    u->addPurchaseHistory(p); // 구매 내역 추가
    ProductPaymentUI* ppUI = new ProductPaymentUI(outFp, &p);                          // UI 생성
    ppUI->enable(outFp);
}