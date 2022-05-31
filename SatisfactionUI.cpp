#include "SatisfactionUI.h"

SatisfactionUI::SatisfactionUI(std::string sID, std::string pName, int s, FILE *out_fp)
{
    this->sellerID = sID;
    this->productName = pName;
    this->score = s;
    enable(out_fp);
}

// void SatisfactionUI::inputPurchaseSatisfaction(FILE *in_fp)
// {
//     fscanf(in_fp, "%s %d ", this->productName, this->score);
// }

void SatisfactionUI::enable(FILE *o_fp)
{
    // 판매자ID, 상품명, 구매 만족도 출력
    fprintf(o_fp, "%s %s %d\n", this->sellerID, this->productName, this->score);
}