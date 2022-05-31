#include "ProductPayment.h"

ProductPayment::ProductPayment(FILE *out_fp, User u, Product p)
{
    u.getMyPurchaseHistoryCollection().addPurchaseHistory(p);  // 구매 내역 추가
    ProductPaymentUI ppUI(out_fp, p);   // UI 생성
}