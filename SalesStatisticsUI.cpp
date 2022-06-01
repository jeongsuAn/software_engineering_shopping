/*
* Class : SalesStatisticsUI
* Description:  SalesStatisticsUI boundary class for UI
* Created: 2022/5/31
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/
#include "SalesStatisticsUI.h"

SalesStatisticsUI::SalesStatisticsUI(FILE* o_fp, User u, std::vector<Product> list)
{
    enableEx(o_fp);

    std::vector<Product>::iterator it = list.begin();
    enable(o_fp, *(it));
    while (it != list.end()) {
        enable(o_fp, *(it));  ++it;
    }
}

void SalesStatisticsUI::enableEx(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "5.1. 판매 상품 통계\n");
}

void SalesStatisticsUI::enable(FILE* out_fp, Product p)
{
    // 출력 형식
    fprintf(out_fp, "%s %d %d\n", this->productName, this->totalProfit, this->avgSatisfaction);
}