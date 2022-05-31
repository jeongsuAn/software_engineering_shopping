/*
 * File name : Product.h
 * File created by B711169 정다은
 */

// Revision
//   1. When & Who : 2022/05/31 04:00 am by B711089 백지연
//      What : added #include <numeric>, function avgSatisfaction()
//

#pragma once

#include <string>
#include <vector>
#include <numeric>

using namespace std;

class Product
{
private:
    string sellerID;
    string productName;
    string manufacturer;
    int price;
    int quantity;
    int soldQuantity;
    vector<int> scores;
    bool salesState;

public:
    typedef struct statisticsDTO
    {
        string productName;
        int totalProfit;
        int avgSatisfaction;
    } sDTO;

    Product(string pname, string manufacturer, int price, int quantity) // default constructor
    {
        this->productName = pname;
        this->manufacturer = manufacturer;
        this->price = price;
        this->quantity = quantity;
    }
    string getSellerID();
    string getProductName();
    string getManufacturer();
    int getprice();
    int getquantity();
    bool getSalesState();
    // Product getProductByName(string productName);
    void savePurchaseSatisfaction(int score);
    void getItemDetails();
    double avgSatisfaction();
    // statisticsDTO getInfoForStatistics();
};
