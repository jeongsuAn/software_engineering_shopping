#include "Product.h"

Product::Product(std::string sellerID, std::string pname, std::string manufacturer, std::string price, std::string quantity) // default constructor
{
    this->sellerID = sellerID;
    this->productName = pname;
    this->manufacturer = manufacturer;
    this->price = price;
    this->quantity = quantity;
    this->soldQuantity = "0";
   
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

std::string Product::getAvgScore()
{
    return soldQuantity;
}



int Product::getPurchaseSatisfaction()
{
    if (scores.size() == 0)
    {
        return 0;
    }
    else {
        int score = 0;
        for (int i = 0; i < scores.size(); i++)
        {
            score += scores[i];
        }
        score /= scores.size();
        return score;
    }
}

int Product::getTotalProfit()
{
    return (std::stoi(this->soldQuantity) * std::stoi(this->price) );
}

std::vector<int>& Product::getScores()
{
    return scores;
}



void Product::savePurchaseSatisfaction(int score)
{
    this->getScores().push_back(score);
}

void Product::getItemDetails()
{

}

int Product::avgSatisfaction() {
    int sum = 0;
    for (auto it = scores.begin(); it != scores.end(); it++)
    {
        sum += *it;
    }
    if (scores.size() == 0) {
        return 0;
    }
    return (int)(sum / scores.size());
}


void Product::setQuantity()
{
    this->quantity = std::to_string(std::stoi(this->quantity) - 1);
    this->soldQuantity = std::to_string(std::stoi(this->soldQuantity) + 1);
}