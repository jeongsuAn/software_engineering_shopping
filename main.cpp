// 헤더 선언
#include <iostream>
#include <string>
#include "MainControl.h"
#include "MainControlUI.h"
#include "Start.h"
#include "StartUI.h"
#include "User.h"
#include "UserList.h"
#include "AddProduct.h"
#include "OnsalesProducts.h"
#include "SoldoutProducts.h"
#include "SalesStatistics.h"
#include "Product.h"
#include "ProductPayment.h"
#include "CheckPurchaseHistory.h"
#include "Satisfaction.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask(FILE* in_fp, FILE* out_fp);
void program_exit();

// 변수 선언
FILE* in_fp, * out_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");


    doTask(in_fp, out_fp);

    return 0;
}


void doTask(FILE* in_fp, FILE* out_fp) 
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    Start* start =new Start(in_fp, out_fp);
    MainControl* mControl = nullptr;
    User* user = nullptr;
    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:

            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입“ 메뉴 부분
            {
                // join() 함수에서 해당 기능 수행 
                start->fillJoinShop();

                break;
            }
            case 2:   // "1.2. 회원탈퇴" 메뉴 부분
            {
                // join() 함수에서 해당 기능 수행 
                mControl->withdrawalShop();

                break;
            }
            }
            break;


        case 2:

            switch (menu_level_2)
            {
            case 1:   // "2.1. 로그인" 메뉴 부분
            {

                user = start->loginShop();
                mControl = start->getMainControlPtr();

                break;
            }
            case 2:   // "2.2. 로그아웃" 메뉴 부분
            {

                mControl->logout();
                break;
            }
            }
            break;

        case 3:

            switch (menu_level_2)
            {
            case 1:
            {
                // "3.1. 판매 의류 등록" 메뉴 부분
                AddProduct* addProduct = new AddProduct();
                addProduct->addProduct(user, in_fp, out_fp);

                break;
            }
            case 2:
            {
                // 3.2. 등록 상품 조회
                OnsalesProducts* onsalesProducts = new OnsalesProducts();
                onsalesProducts->showOnsalesProducts(user, in_fp, out_fp);

                break;
            }
            case 3:
            {
                // 3.3. 판매 완료 상품 조회
                SoldoutProducts* soldoutProducts = new SoldoutProducts();
                soldoutProducts->showSoldoutProducts(user, out_fp);

                break;
            }
            }
            break;


        case 4:

            switch (menu_level_2)
            {
            case 1:   
            {  //showProductDetails();  
                break;
            }
            case 2:
            {  
                std::string pName = "hat";  // for test
                ProductPayment* productPayment = new ProductPayment(out_fp, user, pName);
                break;
            }
            case 3:
            {  
                CheckPurchaseHistory* checkPurchaseHistory = new CheckPurchaseHistory(user, out_fp);
                break;
            }
            case 4:
            {  
                Satisfaction* satisfaction = new Satisfaction(user, in_fp, out_fp);
                break;
            }
            }
            break;

        case 5:

            switch (menu_level_2)
            {
            case 1:
            {
                // 5.1. 판매 상품 통계
                SalesStatistics* salesSatistics = new SalesStatistics();
                salesSatistics->showStatistics(out_fp, user);

                break;
            }
            }
            break;

        case 6:

            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료“ 메뉴 부분
            {
                delete(start);
                program_exit();
                is_program_exit = 1;

                break;
            }
            }
            break;


            return;
        }
    }
}

void program_exit()
{

}

