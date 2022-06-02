/*
* Class : AddProductUI
* Description:  AddProduct boundary class for UI
* Created: 2022/5/31 
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "User.h"
#include "Product.h"
#include "AddProductUI.h"

AddProductUI::AddProductUI() {}

void AddProductUI::setProductName(std::string str)
{
    productName = str;
}
void AddProductUI::setManufacturer(std::string str)
{
    manufacturer = str;
}
void AddProductUI::setPrice(std::string str)
{
    price = str;
}
void AddProductUI::setQuantity(std::string str)
{
    quantity = str;
}

std::string AddProductUI::getProductName()
{
    return productName;
}
std::string AddProductUI::getManufacturer()
{
    return manufacturer;
}
std::string AddProductUI::getPrice()
{
    return price;
}
std::string AddProductUI::getQuantity()
{
    return quantity;
}

void AddProductUI::AddProductUI_IN(FILE* in_fp)
{
    char pName[MAX_STRING], manufacturer[MAX_STRING], price[MAX_STRING], quantity[MAX_STRING];

    fscanf(in_fp, "%s %s %s %s", pName, manufacturer, price, quantity);

    this->setProductName(pName);
    this->setManufacturer(manufacturer);
    this->setPrice(price);
    this->setQuantity(quantity);
}

void AddProductUI::AddProductUI_OUT(FILE* o_fp, Product p)
{
    enable(o_fp);
}

void AddProductUI::enable(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "3.1 판매 의류 등록\n");
    fprintf(out_fp, "> %s %s %s %s\n", (this->productName).c_str(), (this->manufacturer).c_str(), (this->price).c_str(), (this->quantity).c_str());
}