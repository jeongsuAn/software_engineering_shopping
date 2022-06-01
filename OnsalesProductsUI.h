#pragma once

/*
* Class : OnsalesProductUI
* Description:  OnsalesProduct boundary class for UI
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include <string>
#include "Product.h"
#include "OnsalesProducts.h"

class OnsalesProductsUI
{
private:
    std::string productName;
    std::string manufacturer;
    std::string price;
    std::string quantity;

public:
    void setProductName(std::string str);
    void setManufacturer(std::string str);
    void setPrice(std::string str);
    void setQuantity(std::string str);

    std::string getProductName();
    std::string getManufacturer();
    std::string getPrice();
    std::string getQuantity();

    OnsalesProductsUI();
    void enableUI(User* u, FILE* o_fp, std::vector<Product>& list);
    void enable(FILE* o_fp);
};