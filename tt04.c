#include <stdio.h>

int main() {
    int per[4] = { 25, 38, 0, 40 }; // 초기값 설정
    int n, div, stu;

    printf("=== 수강신청 관리 프로그램 ===");

    while (1) {
        printf("\n");
        printf("현재 분반별 C프로그래밍1 수강 인원은 다음과 같습니다.(정원: 40명)\n");

        for (int i = 0; i < 4; i++) {
            printf("%d분반 %d명 ", i + 1, per[i]);
        }
        printf("\n");

        printf("명령을 입력하세요.(1.수강인원 추가, 2.수강인원 감소, 기타.종료)> ");
        scanf_s("%d", &n);


        switch (n) {

        case 1:
            printf("분반을 선택하세요 (1~4)> ");
            scanf_s("%d", &div);
            

            if (div - 1 >= 0 && div - 1 <= 3)
            {
                printf("추가할 수강인원을 입력하세요: ");
                scanf_s("%d", &stu);

                if (per[div - 1] + stu <= 40) {
                    per[div - 1] += stu;
                    printf("%d분반의 수강인원이 %d명 추가되었습니다.\n", div, stu);
                }
                else {
                    printf("%d분반은 수강인원 초과입니다.\n", div);
                }
            }
            else {
                printf("잘못된 분반 선택입니다.\n");
            }
            break;

        case 2:
            printf("분반을 선택하세요 (1~4)> ");
            scanf_s("%d", &div);


                if (div - 1 >= 0 && div - 1<= 3)
                {
                    printf("감소할 수강인원을 입력하세요: ");
                    scanf_s("%d", &stu);

                    if (per[div - 1] - stu >= 0) {
                        per[div - 1] -= stu;
                        printf("%d분반의 수강인원이 %d명 감소되었습니다.\n", div, stu);
                    }
                    else {
                        printf("%d분반은 수강인원이 없습니다.\n", div );
                    }
                }
                else {
                    printf("잘못된 분반 선택입니다.\n");
                }
            break;

            default:
                printf("프로그램을 종료합니다.\n");
                break;
            
        }
    }
    return 0;
}
