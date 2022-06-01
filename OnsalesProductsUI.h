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
    int price, quantity;

public:
    OnsalesProductsUI(FILE* o_fp, User u, std::vector<Product> list);
    void enableEx(FILE* o_fp);
    void enable(FILE* o_fp, Product p);
};