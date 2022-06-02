// Class : ProductPayment
// Description: This is member function of ProductPayment control class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#include "ProductPayment.h"

ProductPayment::ProductPayment(FILE* outFp, User *u, std::string pName, User* admin)
{
    // u->getMyPurchaseHistoryCollection().addPurchaseHistory(p); // 구매 내역 추가
    // 구매한 상품 재고 감소 
    Product& p = admin->getOneSalesProduct(pName);
    p.setQuantity();
    u->addPurchaseHistory(p); // 구매 내역 추가

    //만약 판매자와 구매자가 동일하다면 수량 맞추기
    if (p.getSellerID() == u->getId()) {
        p = u->getOneSalesProduct(pName);
        p.setQuantity();
    }
    ProductPaymentUI* ppUI = new ProductPaymentUI(outFp, &p);                          // UI 생성
    ppUI->enable(outFp);
}