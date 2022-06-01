#include "Product.h"

Product::Product(std::string sellerID, std::string pname, std::string manufacturer, std::string price, std::string quantity) // default constructor
{
    this->sellerID = sellerID;
    this->productName = pname;
    this->manufacturer = manufacturer;
    this->price = price;
    this->quantity = quantity;
   
}

std::string Product::getSellerID()
{
    return sellerID;
}
std::string Product::getProductName()
{
    return productName;
}
std::string Product::getManufacturer()
{
    return manufacturer;
}
std::string Product::getPrice()
{
    return price;
}
std::string Product::getQuantity()
{
    return quantity;
}
std::string Product::getSoldQuantity()
{
    return soldQuantity;
}

bool Product::getSalesState()
{
    // 판매중: true, 품절: false
    return salesState;
}

//Product Product::getProductByName(string productName)
//{

//}

void Product::savePurchaseSatisfaction(int score)
{
    scores.push_back(score);
}

void Product::getItemDetails()
{

}

//statisticsDTO Product::getInfoForStatistics()
//{
//    statisticsDTO s;
//    s.productName = this->getproductName();
//
//    s.totalProfit = soldQuantity * price;
//
//    int avgSatisfaction = 0;
//    for (vector<int>::iterator iter = scores.begin(); iter != scores.end(); iter++) {
//        avgSatisfaction += *iter;
//    }
//    avgSatisfaction /= soldQuantity;
//
//    s.avgSatisfaction = avgSatisfaction;
//
//    return s;
//}