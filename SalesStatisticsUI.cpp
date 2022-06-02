/*
* Class : SalesStatisticsUI
* Description:  SalesStatisticsUI boundary class for UI
* Created: 2022/5/31
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/
#include "SalesStatisticsUI.h"
#include <string>
#include <iostream>

SalesStatisticsUI::SalesStatisticsUI() {}

void SalesStatisticsUI::setProductName(std::string str)
{
    productName = str;
}
void SalesStatisticsUI::setTotalProfit(std::string str)
{
    totalProfit = str;
}
void SalesStatisticsUI::setAvgSatisfactionScore(std::string str)
{
    avgSatistactionScore = str;
}

std::string SalesStatisticsUI::getProductName()
{
    return productName;
}
std::string SalesStatisticsUI::getTotalProfit()
{
    return totalProfit;
}
std::string SalesStatisticsUI::getAvgSatisfactionScore()
{
    return avgSatistactionScore;
}

void SalesStatisticsUI::enableUI(User* u, FILE* o_fp, std::vector<Product>& list)
{
    fprintf(o_fp, "5.1. 판매 상품 통계\n");

    int idx = 0;
    if (list.size() > 0)
    {
        while (idx < list.size())
        {
            //if (std::stoi(list[idx].getSoldQuantity()) != 0)
            //{
                this->setProductName(list[idx].getProductName());
                this->setTotalProfit(std::to_string(list[idx].getTotalProfit()));
                this->setAvgSatisfactionScore(std::to_string(list[idx].getPurchaseSatisfaction()));
                enable(o_fp);
                idx++;
            //}
        }

    }
}

void SalesStatisticsUI::enable(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "%s %s %s\n", this->getProductName().c_str(), this->getTotalProfit().c_str(), this->getAvgSatisfactionScore().c_str());
}