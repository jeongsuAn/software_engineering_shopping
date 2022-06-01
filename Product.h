#pragma once
/*
* File name : Product.h
* File created by B711169 ??????
*/

#include <string>
#include <vector>
using namespace std;

class Product {       // The class

private:
    string sellerID;
    string productName;
    string manufacturer;
    int price;
    int quantity;
    int soldQuantity;
    vector<int> scores;
    //int avgPurchaseSatisfaction;
    bool salesState;

public:
    typedef struct statisticsDTO
    {
        string productName;
        int totalProfit;
        int avgSatisfaction;
    } sDTO;
    Product() {};

    Product(string sellerID, string pname, string manufacturer, int price, int quantity) {};

    string getSellerID() {};
    string getProductName() {};
    string getManufacturer() {};
    int getPrice() {};
    int getQuantity() {};
    int getSoldQuantity() {};
    bool getSalesState() {};
    //Product getProductByName(string productName)
    //{
    //}
    void savePurchaseSatisfaction(int score) {};
    void getItemDetails() {};
    struct statisticsDTO getInfoForStatistics() ;
};
