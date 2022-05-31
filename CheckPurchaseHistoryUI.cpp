#include "CheckPurchaseHistoryUI.h"

CheckPurchaseHistoryUI::CheckPurchaseHistoryUI(User u, FILE *out_fp)
{
    enable(u, out_fp);
}
void CheckPurchaseHistoryUI::enable(User u, FILE *out_fp)
{
    PurchaseHistoryCollection PHC = u.getMyPurchaseHistoryCollection();
    fprintf(out_fp, "4.3. 상품 구매 내역 조회\n");
    vector<Product>::iterator it = PHC.findFirstIdx();
    vector<Product>::iterator lastIt = PHC.findLastIdx();

    while (true)
    {
        // [판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도] 출력
        fprintf(out_fp, "%s %s %s %lf %d %lf", it->getSellerID(), it->getProductName(), it->getManufacturer(), it->getprice(), it->getquantity(), it->avgSatisfaction());
        if (it == lastIt)   // 마지막이었으면 반복문 탈출
            break;  
        it = PHC.getNext(it);
    }
}