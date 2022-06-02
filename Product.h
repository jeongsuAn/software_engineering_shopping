#pragma once
/*
* File name : Product.h
* File created by B711169 ??????
*/

// Revision
 //   1. When & Who : 2022/06/01 01:00 am by B711089 Baek Jiyeon
 //      What : include cmath, 
 //             add function avgSatisfaction


#include <string>
#include <vector>
#include <cmath>

class Product {       // The class

private:
    std::string sellerID;
    std::string productName;
    std::string manufacturer;
    std::string price;
    std::string quantity;
    std::string soldQuantity;
    std::string avgScore;

public:
    std::vector<int> scores;

    Product();
    Product(std::string sellerID, std::string pname, std::string manufacturer, std::string price, std::string quantity);

    std::string getSellerID();
    std::string getProductName();
    std::string getManufacturer();
    std::string getPrice();
    std::string getQuantity();
    std::string getSoldQuantity();
    std::string getAvgScore();

    void setQuantity();

    bool getSalesState();
    int getPurchaseSatisfaction();
    int getTotalProfit();
    std::vector<int>& getScores();

    void savePurchaseSatisfaction(int score);
    void getItemDetails();
    int avgSatisfaction();
};
