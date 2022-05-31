/*
* Class : SalesStatisticsUI
* Description:  SalesStatisticsUI boundary class for UI
* Created: 2022/5/31
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/
#include "SalesStatisticsUI.h"
using namespace std;

SalesStatisticsUI::SalesStatisticsUI(FILE* o_fp, User u, ProductCollection list)
{
    enableEx(o_fp);

    vector<Product>::iterator it = list.findFirstIdx();
    enable(o_fp, *(it));
    while (list.getNext(it) != list.findLastIdx()) {
        enable(o_fp, *(list.getNext(it)));  ++it;
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