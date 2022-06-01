#pragma once
/*
* File name : Product.h
* File created by B711169 ??????
*/

#include <string>
#include <vector>

class Product {       // The class

private:
    std::string sellerID;
    std::string productName;
    std::string manufacturer;
    std::string price;
    std::string quantity;
    std::string soldQuantity;
    std::vector<int> scores;
    //int avgPurchaseSatisfaction;
    bool salesState;

public:
    //typedef struct statisticsDTO
    //{
    //    string productName;
    //    int totalProfit;
    //    int avgSatisfaction;
    //} sDTO;

    Product();

    Product(std::string sellerID, std::string pname, std::string manufacturer, std::string price, std::string quantity);

    std::string getSellerID();
    std::string getProductName();
    std::string getManufacturer();
    std::string getPrice();
    std::string getQuantity();
    std::string getSoldQuantity();
    bool getSalesState();

    //Product getProductByName(string productName)
    //{
    //}

    void savePurchaseSatisfaction(int score);
    void getItemDetails();
    struct statisticsDTO getInfoForStatistics();
};
