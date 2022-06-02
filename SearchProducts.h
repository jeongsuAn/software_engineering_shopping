#pragma once

#include <iostream>
#include "User.h"
class SearchProductsUI;

class SearchProducts
{
private:
    SearchProductsUI* UI;
public:
    SearchProducts();
    std::string inputProductsName(FILE* i_fp);
    void searchProducts(User* u, FILE* i_fp, FILE* o_fp);
};