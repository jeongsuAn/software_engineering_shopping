/*
* Class : SoldoutProductsUI
* Description:  SoldoutProductsUI boundary class for UI
* Created: 2022/5/31
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/
#include "SoldoutProductsUI.h"

SoldoutProductsUI::SoldoutProductsUI() {}

void SoldoutProductsUI::setSellerID(std::string str)
{
    sellerID = str;
}

void SoldoutProductsUI::setProductName(std::string str)
{
    productName = str;
}
void SoldoutProductsUI::setManufacturer(std::string str)
{
    manufacturer = str;
}
void SoldoutProductsUI::setPrice(std::string str)
{
    price = str;
}
void SoldoutProductsUI::setSoldQuantity(std::string str)
{
    soldQuantity = str;
}

void SoldoutProductsUI::setAvgSatistaction(std::string str)
{
    avgSatisfaction = str;
}

std::string SoldoutProductsUI::getSellerID()
{
    return sellerID;
}

std::string SoldoutProductsUI::getProductName()
{
    return productName;
}
std::string SoldoutProductsUI::getManufacturer()
{
    return manufacturer;
}
std::string SoldoutProductsUI::getPrice()
{
    return price;
}
std::string SoldoutProductsUI::getSoldQuantity()
{
    return soldQuantity;
}
std::string SoldoutProductsUI::getAvgSatisfaction()
{
    return avgSatisfaction;
}

void SoldoutProductsUI::enableUI(User* u, FILE* o_fp, std::vector<Product>& list)
{
    // 출력 형식
    fprintf(o_fp, "3.3. 판매 완료 상품 조회\n");

    int idx = 0;
    while (idx++ < list.size())
    {
        if (stoi(list[idx].getQuantity()) == 0)
        {
            this->setSellerID(list[idx].getSellerID());
            this->setProductName(list[idx].getProductName());
            this->setManufacturer(list[idx].getManufacturer());
            this->setPrice(list[idx].getPrice());
            this->setSoldQuantity(list[idx].getSoldQuantity());
            this->setAvgSatistaction(to_string(list[idx].getPurchaseSatisfaction()));
            enable(o_fp);
        }
    }
}


void SoldoutProductsUI::enable(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "%s %s %s %s %s %s\n", this->getProductName(), this->getManufacturer(), this->getPrice(), this->getSoldQuantity(), this->getAvgSatisfaction());
}