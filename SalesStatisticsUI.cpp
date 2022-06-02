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

void SalesStatisticsUI::enableUI(User* u, FILE* o_fp, std::vector<Product>& list, User* admin)
{
    fprintf(o_fp, "5.1. 판매 상품 통계\n");
    std::vector<Product>& adminList = admin->getAllSalesCollection();


    if (list.size() > 0)
    {
        for (int i= 0; i < list.size() ; i++)
        {

                this->setProductName(list[i].getProductName());
                for (int j = 0; j < adminList.size(); j++) {
                    if (adminList[j].getProductName() == list[i].getProductName()) {
                        this->setTotalProfit(std::to_string(adminList[j].getTotalProfit()));
                        this->setAvgSatisfactionScore(std::to_string(adminList[j].getPurchaseSatisfaction()));
                        enable(o_fp);
                    }
                }
        }

    }
}

void SalesStatisticsUI::enable(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "> %s %s %s\n", this->getProductName().c_str(), this->getTotalProfit().c_str(), this->getAvgSatisfactionScore().c_str());
}