#pragma once
#include <iostream>
#include <string>
#include "Product.h"
#include "SearchProducts.h"

class SearchProductsUI
{
private:
    std::string toSearchProductName;
    std::string sellerId;
    std::string productName;
    std::string manufacturer;
    std::string price;
    std::string quantity;
    std::string satisfaction;

public:
    std::string searchProductsUI_IN(FILE* in_fp);
    void setSellerId(std::string str);
    void setProductName(std::string str);
    void setManufacturer(std::string str);
    void setPrice(std::string str);
    void setQuantity(std::string str);
    void setSatisfaction(std::string str);

    std::string getSellerId();
    std::string getProductName();
    std::string getManufacturer();
    std::string getPrice();
    std::string getQuantity();
    std::string getSatisfaction();

    SearchProductsUI();
    void enableUI(User* u, FILE* o_fp, std::vector<Product>& list);
    void enable(FILE* o_fp);
};