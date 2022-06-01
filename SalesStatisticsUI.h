#pragma once
/*
* Class : SalesStatistics
* Description:  SalesStatistics boundary class for UI
* Created: 2022/5/31
* Author: B711169 ������
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include <string>
#include "Product.h"
#include "SalesStatistics.h"

class SalesStatisticsUI
{
private:
    // [��ǰ��] [��ǰ �Ǹ� �Ѿ�] [��� ���Ÿ�����] 
    std::string productName;
    std::string totalProfit;
    std::string avgSatistactionScore;

public:
    void setProductName(std::string str);
    void setTotalProfit(std::string str);
    void setAvgSatisfactionScore(std::string str);

    std::string getProductName();
    std::string getTotalProfit();
    std::string getAvgSatisfactionScore();

    SalesStatisticsUI();
    void enableUI(User* u, FILE* o_fp, std::vector<Product>& list);
    void enable(FILE* o_fp);
};