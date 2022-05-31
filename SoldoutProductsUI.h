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
    string productName;
    string manufacturer;
    int price;
    int soldQuantity;
    int avgSatisfaction;

public:
    SoldoutProductsUI(FILE* o_fp, User u, ProductCollection list);
    void enableEx(FILE* o_fp);
    void enable(FILE* o_fp, Product p);
};