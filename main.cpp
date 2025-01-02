#include <iostream>
#include <vector>
#include <string>
//헤더 참조
#include "SimpleVector.h"


using namespace std;

int main() {
    
    int chk;
    int input;

    while (true)
    {
        int check;
        ::cout << "Data에 숫자 저장하기" << endl;
        ::cout << "1. 기본 목록에 저장하기(10개)" << endl;
        ::cout << "2. 지정한 갯수의 목록에 저장하기" << endl;
        ::cin >> check;

        if (check == 1)
        {
            ::cout << "기본 목록에 저장하기를 선택하셨습니다." << endl;
            chk = check;
            break;
        }
        else if (check == 2)
        {
            ::cout << "지정한 갯수의 목록에 저장하기를 선택하셨습니다." << endl;
            ::cout << "숫자를 입력해주세요 : ";
            ::cin >> input;
            chk = check;
            break;
        }
        else
        {
            // 잘못된 입력 처리
            // 메뉴에 없는 번호를 입력했을 경우 경고 메시지를 출력합니다.
            ::cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
        }
    }


    //기본값일때
    if (chk == 1)
    {
        SimpleVector<int> T;

        while (true)
        {
            ::cout << "\n목록" << endl;
            ::cout << "1. 숫자 목록에 추가" << endl;
            ::cout << "2. 숫자 목록에서 제거" << endl;
            ::cout << "3. 현재 목록 갯수 출력" << endl;
            ::cout << "4. 목록 최대 갯수 출력" << endl;
            ::cout << "5. 종료" << endl;
            ::cout << "선택: ";

            int choice; // 사용자의 메뉴 선택을 저장
            ::cin >> choice;

            if (choice == 1) {
                // 1번 선택: 숫자 추가
                // 사용자로부터 숫자를 입력받아 data에 추가합니다.
                int num;
                ::cout << "숫자를 입력해주세요 : ";
                ::cin.ignore(); // 이전 입력의 잔여 버퍼를 제거
                ::cin >> num; // 숫자 입력
                T.push_back(num);// 입력받은 숫자 정보를 추가
            }
            else if (choice == 2) {
                // 2번 선택: 숫자 제거 (젤뒤에서 부터 제거)
                // 현재 data에 저장된 숫자중 젤 뒤에있는것부터 제거
                T.pop_back();
            }
            else if (choice == 3)
            {
                // 3번 선택 : 현재 목록 갯수 출력
                // 현재 BookManager에 저장된 책 목록에서 제목으로 책이 있는지 검색합니다.
                int size = T.size();
                ::cout << "배열의 현재 크기는 : " << size << endl;
            }
            else if (choice == 4)
            {
                // 4번 선택 : 목록 최대 갯수 출력
                // 현재 BookManager에 저장된 책 목록에서 저자로 책이 있는지 검색합니다.
                int capacity = T.capacity();
                ::cout << "배열의 최대 크기는 : " << capacity << endl;
            }
            else if (choice == 5) {
                // 5번 선택: 종료
                // 프로그램을 종료하고 사용자에게 메시지를 출력합니다.
                ::cout << "프로그램을 종료합니다." << endl;
                break; // while 루프 종료
            }
            else {
                // 잘못된 입력 처리
                // 메뉴에 없는 번호를 입력했을 경우 경고 메시지를 출력합니다.
                ::cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
            }
        }//while 끝부분
    }
    else
    {
        SimpleVector<int> T(input);

        while (true)
        {
            ::cout << "\n목록" << endl;
            ::cout << "1. 숫자 목록에 추가" << endl;
            ::cout << "2. 숫자 목록에서 제거" << endl;
            ::cout << "3. 현재 목록 갯수 출력" << endl;
            ::cout << "4. 목록 최대 갯수 출력" << endl;
            ::cout << "5. 종료" << endl;
            ::cout << "선택: ";

            int choice; // 사용자의 메뉴 선택을 저장
            ::cin >> choice;

            if (choice == 1) {
                // 1번 선택: 숫자 추가
                // 사용자로부터 숫자를 입력받아 data에 추가합니다.
                int num;
                ::cout << "숫자를 입력해주세요 : ";
                ::cin.ignore(); // 이전 입력의 잔여 버퍼를 제거
                ::cin >> num; // 숫자 입력
                T.push_back(num);// 입력받은 숫자 정보를 추가
            }
            else if (choice == 2) {
                // 2번 선택: 숫자 제거 (젤뒤에서 부터 제거)
                // 현재 data에 저장된 숫자중 젤 뒤에있는것부터 제거
                T.pop_back();
            }
            else if (choice == 3)
            {
                // 3번 선택 : 현재 목록 갯수 출력
                // 현재 BookManager에 저장된 책 목록에서 제목으로 책이 있는지 검색합니다.
                int size = T.size();
                ::cout << "배열의 현재 크기는 : " << size << endl;
            }
            else if (choice == 4)
            {
                // 4번 선택 : 목록 최대 갯수 출력
                // 현재 BookManager에 저장된 책 목록에서 저자로 책이 있는지 검색합니다.
                int capacity = T.capacity();
                ::cout << "배열의 최대 크기는 : " << capacity << endl;
            }
            else if (choice == 5) {
                // 5번 선택: 종료
                // 프로그램을 종료하고 사용자에게 메시지를 출력합니다.
                ::cout << "프로그램을 종료합니다." << endl;
                break; // while 루프 종료
            }
            else {
                // 잘못된 입력 처리
                // 메뉴에 없는 번호를 입력했을 경우 경고 메시지를 출력합니다.
                ::cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
            }
        }//while 끝부분
    }

    return 0;
}

