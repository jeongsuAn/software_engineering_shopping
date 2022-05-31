/*
* Class : SalesStatisticsUI
* Description:  SalesStatisticsUI boundary class for UI
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include <string>
#include "User.h"
#include "Product.h"
#include "ProductCollection.h"
#include "SalesStatistics.h"

using namespace std;

class SalesStatisticsUI
{
private:
    string productName;
    string totalProfit;
    int avgSatisfaction;

public:
    SalesStatisticsUI(FILE* o_fp, User u, ProductCollection list);
    void enableEx(FILE* o_fp);
    void enable(FILE* o_fp, Product p);
};