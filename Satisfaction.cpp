#include "Satisfaction.h"

Satisfaction::Satisfaction(User u, string pName, int score, FILE *o_fp)
{
    u.getMyPurchaseHistoryCollection().getProductDetails().savePurchaseSatisfaction(score); // 구매 만족도 저장
    SatisfactionUI(p.getSellerID(), p.getProductName(), score, o_fp); // UI 출력
}

// void Satisfaction::transferSatisfaction()
// {

// }