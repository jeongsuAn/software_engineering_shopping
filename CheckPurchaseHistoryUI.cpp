// Class : checkPurchaseHistoryUI
// Description: This is member function of checkPurchaseHistory boundary class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#include "CheckPurchaseHistoryUI.h"

CheckPurchaseHistoryUI::CheckPurchaseHistoryUI(User *u, FILE *outFp)
{
    this->u = u;
    this->outFp = outFp;
}

void CheckPurchaseHistoryUI::setSellerID(std::string sID)
{
    this->sellerID = sID;
}

void CheckPurchaseHistoryUI::setProductName(std::string pName)
{
    productName = pName;
}
void CheckPurchaseHistoryUI::setManufacturer(std::string m)
{
    manufacturer = m;
}
void CheckPurchaseHistoryUI::setPrice(std::string p)
{
    price = p;
}
void CheckPurchaseHistoryUI::setQuantity(std::string q)
{
    quantity = q;
}

void CheckPurchaseHistoryUI::setAvgSatistaction(std::string as)
{
    avgSatisfaction = as;
}

std::string CheckPurchaseHistoryUI::getSellerID()
{
    return sellerID;
}

std::string CheckPurchaseHistoryUI::getProductName()
{
    return productName;
}
std::string CheckPurchaseHistoryUI::getManufacturer()
{
    return manufacturer;
}
std::string CheckPurchaseHistoryUI::getPrice()
{
    return price;
}
std::string CheckPurchaseHistoryUI::getQuantity()
{
    return quantity;
}
std::string CheckPurchaseHistoryUI::getAvgSatisfaction()
{
    return avgSatisfaction;
}
/*
void CheckPurchaseHistoryUI::enable(User *u, FILE *outFp)
{
    std::vector<Product> PHC = u->getMyPurchaseHistoryCollection();
    fprintf(outFp, "4.3. 상품 구매 내역 조회\n");
    for (auto it = PHC.begin(); it != PHC.end(); it++)
    {
        // 출력 형식 : [판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도] 출력
        fprintf(outFp, "%s %s %s %s %s %lf", it->getSellerID().c_str(), it->getProductName().c_str(), it->getManufacturer().c_str(), it->getPrice().c_str(), it->getQuantity().c_str(), it->avgSatisfaction());
    }
}
*/

void CheckPurchaseHistoryUI::enableUI(User* u, FILE* o_fp, User* admin)
{
    std::vector<Product>& list = u->getMyPurchaseHistoryCollection();
    std::vector<Product>& adminList = admin->getAllSalesCollection();
    fprintf(o_fp, "4.3. 상품 구매 내역 조회\n");

    for(int i = 0;i<list.size();i++)
        {
            this->sellerID = list[i].getSellerID();
            this->productName = list[i].getProductName();
            this->manufacturer = list[i].getManufacturer();
            this->price = list[i].getPrice();
            this->quantity = list[i].getQuantity();
            for (int j = 0; j < adminList.size(); j++) {
                if (adminList[j].getProductName() == list[i].getProductName()) {
                    this->avgSatisfaction = std::to_string(adminList[j].avgSatisfaction());
                    break;
                }
            }
            enable(o_fp);
        }
}

void CheckPurchaseHistoryUI::enable(FILE* out_fp)
{
    // 출력 형식 : [판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도] 출력
    fprintf(out_fp, "> %s %s %s %s %s %s\n", this->sellerID.c_str(), this->productName.c_str(), this->manufacturer.c_str(), this->price.c_str(), this->quantity.c_str(), this->avgSatisfaction.c_str());
}