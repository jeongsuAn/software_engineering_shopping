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

using namespace std;

class AddProductUI
{
private:
    string productName;
    string manufacturer;
    int price, quantity;

public:
    AddProductUI(FILE* o_fp, Product p);
    void enable(FILE* o_fp);
};