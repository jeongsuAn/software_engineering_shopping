// 헤더 선언
#include <iostream>
#include <string>
#include "MainControl.h"
#include "MainControlUI.h"
#include "Start.h"
#include "StartUI.h"
#include "User.h"
#include "UserList.h"
#include "ProductPayment.h"
#include "CheckPurchaseHistory.h"
#include "Satisfaction.h"
#include "ProductPayment.h"


// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask(FILE* in_fp, FILE* out_fp);
void join();
void buy(FILE *o_fp, User u, Product p);
void checkHistory(User u, FILE *out_fp);
void AssessSatisfaction(User u, FILE *out_fp);
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
                
                start->loginShop();
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

        case 4:
            switch (menu_level_2)
            {
                case 2: // 4.2. 상품 구매
                {
                    buy(out_fp, u, p);  // 출력 파일 포인터, 현재 로그인된 유저, 검색된 상품
                    break;
                }
                case 3: // 4.3. 상품 구매 내역 조회
                {   
                    // 입력 형식 : 입력값 없음

                    // 기능 수행
                    checkHistory(u, out_fp);
                    break;
                }
                case 4: // 4.4. 상품 구매만족도 평가
                {   
                    AssessSatisfaction(u, out_fp);
                    break;
                }
            }



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


        }
    }
        return;
}

    void program_exit(){
        
        
    }


void buy()
{
    // 입력 형식 : 입력값 없음

    // 기능 수행
    ProductPayment(out_fp, u, p);   // 출력 파일 포인터, 현재 로그인된 유저, 이전에 검색된 상품
}

void checkHistory(User u, FILE *out_fp)
{
    // 입력 형식 : 입력값 없음

    // 기능 수행
    CheckPurchaseHistory(u, out_fp);    // 현재 로그인된 유저, 출력 파일 포인터
}

void AssessSatisfaction(User u, FILE *out_fp)
{
    string productName;
    int score;

   // 입력 형식 : 상품명, 구매만족도를 파일로부터 읽음
   fscanf(in_fp, "%s %d", productName, &score);

    // 기능 수행
    Satisfaction(u, productName, score, out_fp);  // 현재 로그인된 유저, 입력받은 상품명
}