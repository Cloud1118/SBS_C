// 헤더 파일 포함
#include <stdio.h>
#include <string.h>

// 필요한 상수
#define MAX_LEN 10      // 선택 음료 최대 개수
#define True 1          // 참
#define False 0         // 거짓

// 메뉴 번호
#define Add 1
#define Remove 2
#define Check 3
#define Order 4
#define End 5

// 음료 상품 코드
#define Americano 1
#define CafeLatte 2
#define Juice 3
#define Icecream 4
#define Cancel 0

// 음료 상품 가격
#define Americano_Price 2000
#define CafeLatte_Price 3000
#define Juice_Price 3000
#define Icecream_Price 4000

// 선택 음료 구조체 만들기
typedef struct {
    char *foods[MAX_LEN];   // 상품 목록
    int idxOfFoods;         // 상품 번호
    int totalPrice;         // 전체 가격
} ItemList;

// 1. 사용자 선택 메뉴 출력 함수
void select() {
    /* 메뉴를 출력하는 함수 */
    puts("***** SBS 아카데미 카페 *****");
    puts("*** 1. 음료 추가");
    puts("*** 2. 음료 삭제");
    puts("*** 3. 선택 음료 확인");
    puts("*** 4. 선택 음료 주문");
    puts("*** 0. 프로그램 종료");
    puts("***********************************");
}

void showMenu() {
    /* 주문할 수 있는 메뉴를 출력하는 함수 */
    puts("***** 음료 추가 *****");
    puts("*** 1. 아메리카노 (2000)");
    puts("*** 2. 카페라떼 (3000)");
    puts("*** 3. 주스 (3000)");
    puts("*** 4. 아이스크림 (4000)");
    puts("*** 0. 취소");
    puts("*************************");
}

void showRemoveMenu(){
    /* 삭제할 수 있는 음료 목록을 출력하는 함수 */
    puts("***** 음료 삭제 *****");
    puts("*** 1. 아메리카노 (2000)");
    puts("*** 2. 카페라떼 (3000)");
    puts("*** 3. 주스 (3000)");
    puts("*** 4. 아이스크림 (4000)");
    puts("*** 0. 취소");
    puts("*************************");
}

// 2. 음료 추가 함수
void addMenu(ItemList *itemList) {
    /* 사용자가 추가할 음료를 선택하면,
        - ItemList 구조체의 멤버 배열에 해당 음료를 추가
        - 음료수 총 개수를 1 증가
        - 해당 음료수의 가격을 전체 가격에 더함 */
    
    // 음료수는 최대 10개까지만 선택 가능
    if (itemList->idxOfFoods >= MAX_LEN) {
        puts("더 이상 추가할 수 없습니다. (최대 10개)");
        return;
    }

    int choice;
    showMenu();     // 음료 메뉴 출력 (위에서 내려옴)
    printf("메뉴 번호 : ");
    scanf("%d", &choice);

    switch (choice) {
        case Americano:/
            puts ("아메리카노 추가");
            int i = itemList->idxOfFoods;
            itemList->foods[i] = "아메리카노";
            itemList->idxOfFoods++;     // 인덱스 1 증가 (총 개수 +1)
            // 전체 가격 + 해당 음료 가격
            itemList->totalPrice += Americano_Price;
            break;
        case CafeLatte:
            puts ("카페라떼 추가");
            int i = itemList->idxOfFoods;
            itemList->foods[i] = "카페라떼";
            itemList->idxOfFoods++;     // 인덱스 1 증가 (총 개수 +1)
            // 전체 가격 + 해당 음료 가격
            itemList->totalPrice += CafeLatte_Price;
            break;
        case Juice:
            puts ("주스 추가");
            int i = itemList->idxOfFoods;
            itemList->foods[i] = "주스";
            itemList->idxOfFoods++;     // 인덱스 1 증가 (총 개수 +1)
            // 전체 가격 + 해당 음료 가격
            itemList->totalPrice += Juice_Price;
            break;
        case Icecream:
            puts ("아이스크림 추가");
            int i = itemList->idxOfFoods;
            itemList->foods[i] = "아이스크림";
            itemList->idxOfFoods++;     // 인덱스 1 증가 (총 개수 +1)
            // 전체 가격 + 해당 음료 가격
            itemList->totalPrice += Icecream_Price;
            break;

        case Cancel:
            puts("취소합니다.");
            break;
    
        default:
            puts("잘못된 입력입니다.");
            break;
    }
}

// 3. 삭제 - 구조체 멤버 배열에서 항목을 삭제
int removeItem(ItemList *itemList, char* itemToRemove) {
    /* 사용자가 삭제할 음료를 선택하면
        -  ItemList 구조체의 멤버 배열에서 해당 음료를 삭제 */
    int i, rmIdx = -1;  // 삭제할 인덱스
    for ( i = 0; i < itemList->idxOfFoods; i++) {
        // 배열의 음료와, 삭제할 음료 이름이 같은지 확인
        if( !strcmp(itemList->foods[i], itemToRemove) ) {
            rmIdx = i;
            break;
        }
    }

    // 삭제할 항목이 있으면,
    if ( rmIdx >= 0 ) {
        // 뒤에서부터 삭제 항목이 있는 요소까지 하나씩 앞으로 당긴다.
        for ( i = rmIdx; i < itemList->idxOfFoods; i++) {
            itemList->foods[i] = itemList->foods[i+1];  // 하나씩 당겨짐
        }
        
        if( rmIdx == 0 && itemList->idxOfFoods ) {
            itemList->foods[0] = NULL;
        }

        printf("%s를 삭제했습니다.\n", itemToRemove);
        return True;
    }
    else {
        // 삭제할 항목이 없을때, (직접 채워보기)
        // -- "삭제할 항목이 없습니다.", False 반환
    }
    
}

// 4. 삭제 항목 선택 함수
void removeMenu(ItemList * itemList) {
    /* 사용자가 삭제할 음료를 선택하면,
        - 음료가 하나도 선택되지 않았을 경우 -> "더 이상 삭제할 수 없습니다."
        - 선택된 음료가 존재한다면(삭제가능), removeItem() 함수를 호출하여 삭제 요청 */
    
    if (itemList->idxOfFoods <= 0) {
        puts("더 이상 삭제할 수 없습니다.");
        return;
    }

    int choice;
    showRemoveMenu();     // 삭제 음료 메뉴 출력
    printf("메뉴 번호 : ");
    scanf("%d", &choice);

    switch (choice) {
        case Americano:
            if (removeItem(itemList, "아메리카노")) {
                itemList->totalPrice -= Americano_Price;
                (itemList->idxOfFoods)--;
            }
            break;
        case CafeLatte:
            if (removeItem(itemList, "카페라떼")) {
                itemList->totalPrice -= CafeLatte_Price;
                (itemList->idxOfFoods)--;
            }
        case Juice:
            if (removeItem(itemList, "주스")) {
                itemList->totalPrice -= Juice_Price;
                (itemList->idxOfFoods)--;
            }
            break;
        case Icecream:
            if (removeItem(itemList, "아이스크림")) {
                itemList->totalPrice -= Icecream_Price;
                (itemList->idxOfFoods)--;
            }
            break;

        case Cancel:
            puts("취소합니다.");
            break;
    
        default:
            puts("잘못된 입력입니다.");
            break;
    }
}
}

// 5. 메뉴 확인 함수
void checkMenu(ItemList *itemList) {
    /* 사용자가 선택한 음료의 전체 '가격'과 '목록'을 출력*/
    int i = 0;
    printf("주문 전체 가격 : %d \n", itemList->totalPrice);
    for ( i = 0; i < itemList->idxOfFoods; i++) {
        printf("%s \n", itemList->foods[i]);
    }
    printf()

}

// 6. 주문 함수
int order(ItemList *itemlist) {
    /* 주문한 전체 가격을 출력한 후, 주문 여부 재확인
        즉, 최종 주문 여부를 True(1), False(0)로 반환 */
    if (itemList->idxOfFoods <= 0) {
        puts("아무것도 선택하지 않았습니다.");
        return -1;
    }

    int choice;
    checkMenu(itemList);
    puts("정말로 주문하시겠습니까?");

    print("1. 네, 2. 아니오");
    scanf("%d", &choice);

    if( choice==1 )
        return True;
    if( choice==2 )
        return False;
}

// 7. main 함수
int main(void) {

    // 선언
    ItemList itemList;
    itemList.idxOfFoods = 0;
    itemList.totalPrice = 0;
    int choice;

    while(1) {
        // 메뉴 출력
        select();
        printf("메뉴 번호 : ");
        scanf("%d", &choice);

        printf("\n\n");

        switch (choice) {
            // 1. 추가
            case Add:
                        addMenu(&itemList);
                        printf("\n\n");
                        break;
            // 2. 삭제
            case Remove:
                        removeMenu(&itemList);
                        printf("\n\n");
                        break;
            // 3. 확인
            case Check:
                        checkMenu(&itemList);
                        printf("\n\n");
                        break;
            // 4. 주문
            case Order:
                        if( order(&itemList) ) {
                            // 주문결정
                            puts("주문 완료!\n 프로그램을 종료합니다");  // 문자열 출력 함수
                            printf("\n\n");
                            return 0;
                        } else {
                            // 주문 취소
                            puts("주문 보류!");
                            printf("\n\n");
                        }
                        break;
            // 0. 종료
            case End:
                        puts("프로그램을 종료합니다.");
                        return 0;
            default:
                        puts("잘못된 입력입니다. (0~4)번의 번호를 입력해주세요.");
                        break;
        }

    return 0;
}
