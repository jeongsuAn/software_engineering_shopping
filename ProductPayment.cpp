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