#include "SearchProducts.h"
#include "SearchProductsUI.h"

SearchProducts::SearchProducts()
{
}


void SearchProducts::searchProducts(User* admin, FILE* i_fp, FILE* o_fp )
{
    // Output UI    
    UI->enableUI(admin, o_fp, admin->getAllSalesCollection());
    delete UI;
}

std::string SearchProducts::inputProductsName(FILE* i_fp) 
{
    std::string productName;
    this->UI = new SearchProductsUI();
    productName = UI->searchProductsUI_IN(i_fp);
    return productName;
}