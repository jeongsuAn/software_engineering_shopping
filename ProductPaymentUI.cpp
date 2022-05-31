#include "ProductPaymentUI.h"

ProductPaymentUI::ProductPaymentUI(FILE *o_fp, Product p)
{
    this->out_fp = o_fp;
    this->sellerID = p.getSellerID();
    this->productName = p.getproductName();

    enable(out_fp);
}

void ProductPaymentUI::enable(FILE *o_fp)
{
    // 출력 형식
    fprintf(o_fp, "4.2. 상품 구매\n");
    fprintf(o_fp, "%s %s\n", sellerID, productName);
}