#include "Product.h"

Product::Product(string sellerID, string pname, string manufacturer, int price, int quantity) // default constructor
{
    this->sellerID = sellerID;
    this->productName = pname;
    this->manufacturer = manufacturer;
    this->price = price;
    this->quantity = quantity;
}

string Product::getSellerID()
{
    return sellerID;
}
string Product::getProductName()
{
    return productName;
}
string Product::getManufacturer()
{
    return manufacturer;
}
int Product::getPrice()
{
    return price;
}
int Product::getQuantity()
{
    return quantity;
}
int Product::getSoldQuantity()
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

statisticsDTO Product::getInfoForStatistics()
{
    statisticsDTO s;
    s.productName = this->getproductName();

    s.totalProfit = soldQuantity * price;

    int avgSatisfaction = 0;
    for (vector<int>::iterator iter = scores.begin(); iter != scores.end(); iter++) {
        avgSatisfaction += *iter;
    }
    avgSatisfaction /= soldQuantity;

    s.avgSatisfaction = avgSatisfaction;

    return s;
}