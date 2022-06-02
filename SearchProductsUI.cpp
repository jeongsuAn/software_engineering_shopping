#include "SearchProductsUI.h"
#define MAX_STRING 32

SearchProductsUI::SearchProductsUI() {}

void SearchProductsUI::setSellerId(std::string str)
{
    sellerId = str;
}

void SearchProductsUI::setProductName(std::string str)
{
    productName = str;
}
void SearchProductsUI::setManufacturer(std::string str)
{
    manufacturer = str;
}
void SearchProductsUI::setPrice(std::string str)
{
    price = str;
}
void SearchProductsUI::setQuantity(std::string str)
{
    quantity = str;
}

void SearchProductsUI::setSatisfaction(std::string str)
{
    satisfaction = str;
}



std::string SearchProductsUI::getSellerId()
{
    return sellerId;
}

std::string SearchProductsUI::getProductName()
{
    return productName;
}
std::string SearchProductsUI::getManufacturer()
{
    return manufacturer;
}
std::string SearchProductsUI::getPrice()
{
    return price;
}
std::string SearchProductsUI::getQuantity()
{
    return quantity;
}

std::string SearchProductsUI::getSatisfaction()
{
    return satisfaction;
}

std::string SearchProductsUI::searchProductsUI_IN(FILE* in_fp)
{
    char pName[MAX_STRING];

    fscanf(in_fp, "%s ", pName);
    toSearchProductName = pName;
    return pName;

}


void SearchProductsUI::enableUI(User* u, FILE* o_fp, std::vector<Product>& list)
{


    fprintf(o_fp, "4.1. 상품 정보 검색\n");

    int idx = 0;
    while (idx < list.size() )
    {
        if (list[idx].getProductName() == toSearchProductName) 
        {
            this->setSellerId(list[idx].getSellerID());
            this->setProductName(list[idx].getProductName());
            this->setManufacturer(list[idx].getManufacturer());
            this->setPrice(list[idx].getPrice());
            this->setQuantity(list[idx].getQuantity());
            this->setSatisfaction(std::to_string(list[idx].getPurchaseSatisfaction()));
            enable(o_fp);
            break;
        }
        idx++;
    }
}

void SearchProductsUI::enable(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "> %s %s %s %s %s %s\n", (this->getSellerId()).c_str(), (this->getProductName()).c_str(), (this->getManufacturer()).c_str(),
        (this->getPrice()).c_str(), (this->getQuantity()).c_str(), (this->getSatisfaction()).c_str());
}