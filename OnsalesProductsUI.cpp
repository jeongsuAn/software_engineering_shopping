/*
* Class : OnsalesProductUI
* Description:  OnsalesProduct boundary class for UI
* Created: 2022/5/31
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/
#include "OnsalesProductsUI.h"

OnsalesProductsUI::OnsalesProductsUI() {}

void OnsalesProductsUI::setProductName(std::string str)
{
    productName = str;
}
void OnsalesProductsUI::setManufacturer(std::string str)
{
    manufacturer = str;
}
void OnsalesProductsUI::setPrice(std::string str)
{
    price = str;
}
void OnsalesProductsUI::setQuantity(std::string str)
{
    quantity = str;
}

std::string OnsalesProductsUI::getProductName()
{
    return productName;
}
std::string OnsalesProductsUI::getManufacturer()
{
    return manufacturer;
}
std::string OnsalesProductsUI::getPrice()
{
    return price;
}
std::string OnsalesProductsUI::getQuantity()
{
    return quantity;
}

void OnsalesProductsUI::enableUI(User* u, FILE* o_fp, std::vector<Product>& list)
{
    fprintf(o_fp, "3.2. 등록 상품 조회\n");

    int idx = 0;
    while (idx < list.size())
    {
        this->setProductName(list[idx].getProductName());
        this->setManufacturer(list[idx].getManufacturer());
        this->setPrice(list[idx].getPrice());
        this->setQuantity(list[idx].getQuantity());
        enable(o_fp);
        idx++;
    }
}

void OnsalesProductsUI::enable(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "%s %s %s %s\n", (this->getProductName()).c_str(), (this->getManufacturer()).c_str(), 
        (this->getPrice()).c_str(), (this->getQuantity()).c_str());
}