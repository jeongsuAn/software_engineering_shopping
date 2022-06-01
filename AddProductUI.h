#pragma once

/*
* Class : AddProductUI
* Description:  AddProduct boundary class for UI
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include <string>
#include "Product.h"
#include "AddProduct.h"

class AddProductUI
{
private:
    std::string productName, manufacturer, price, quantity;

public:
    AddProductUI();

    void setProductName(std::string s);
    void setManufacturer(std::string s);
    void setPrice(std::string s);
    void setQuantity(std::string s);

    std::string getProductName();
    std::string getManufacturer();
    std::string getPrice();
    std::string getQuantity();

    void AddProductUI_IN(FILE* i_fp);
    void AddProductUI_OUT(FILE* o_fp, Product p);
    void enable(FILE* o_fp);
};