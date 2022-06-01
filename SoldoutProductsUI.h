#pragma once

/*
* Class : SoldoutProductsUI
* Description:  SoldoutProductsUI boundary class for UI
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include <string>
#include "Product.h"
#include "SoldoutProducts.h"

using namespace std;

class SoldoutProductsUI
{

private:
    std::string sellerID;
    std::string productName;
    std::string manufacturer;
    std::string price;
    std::string soldQuantity;
    std::string avgSatisfaction;

public:
    void setSellerID(std::string str);
    void setProductName(std::string str);
    void setManufacturer(std::string str);
    void setPrice(std::string str);
    void setSoldQuantity(std::string str);
    void setAvgSatistaction(std::string str);

    std::string getSellerID();
    std::string getProductName();
    std::string getManufacturer();
    std::string getPrice();
    std::string getSoldQuantity();
    std::string getAvgSatisfaction();

    SoldoutProductsUI();
    void enableUI(User* u, FILE* o_fp, std::vector<Product>& list);
    void enable(FILE* o_fp);
};