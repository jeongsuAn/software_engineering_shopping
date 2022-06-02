// Class : checkPurchaseHistoryUI
// Description: This is a checkPurchaseHistory boundary class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#pragma once

#include <iostream>
#include <vector>
#include "Product.h"
#include "User.h"

class CheckPurchaseHistoryUI
{
private:
    User* u;
    FILE* outFp;
    std::string sellerID;
    std::string productName;
    std::string manufacturer;
    std::string price;
    std::string quantity;
    std::string avgSatisfaction;
public:
    CheckPurchaseHistoryUI(User* u, FILE* outFp);

    void setSellerID(std::string str);
    void setProductName(std::string str);
    void setManufacturer(std::string str);
    void setPrice(std::string str);
    void setQuantity(std::string str);
    void setAvgSatistaction(std::string str);

    std::string getSellerID();
    std::string getProductName();
    std::string getManufacturer();
    std::string getPrice();
    std::string getQuantity();
    std::string getAvgSatisfaction();

    void enableUI(User* u, FILE* o_fp, User* admin);
    void enable(FILE* o_fp);
};