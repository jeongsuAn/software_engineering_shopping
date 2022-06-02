// Class : SatisfactionUI
// Description: This is a Satisfaction boundary class.
// Created: 2022/5/31 11:00 am
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#pragma once

#include <iostream>
#include <string>
#include "User.h"
#include "Product.h"

class SatisfactionUI
{
private:
    std::string sellerID;
    std::string productName;
    std::string score;

public:
    void inputPurchaseSatisfaction(FILE *in_fp);
    void enable(FILE *outFp);

    void setSellerID(std::string sID);
    void setProductName(std::string pName);
    void setScore(std::string s);

    std::string getProductName();
    std::string getSellerID();
    std::string getScore();
};