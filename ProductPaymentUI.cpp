#include "ProductPaymentUI.h"

ProductPaymentUI::ProductPaymentUI(FILE *outFp, Product* p)
{
    this->outFp = outFp;
    this->sellerID = p->getSellerID();
    this->productName = p->getProductName();

}

void ProductPaymentUI::enable(FILE *outFp)
{
    // 출력 형식
    fprintf(outFp, "%s", "4.2. 상품 구매\n");
    fprintf(outFp, "> %s %s\n", this->sellerID.c_str(), this->productName.c_str());

}