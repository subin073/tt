

#include <stdio.h>

int main(void) {

        int i, j;
    int num = 0;
    printf("정수를 입력하세요: ");
    scanf("%d",&num);


        for(i = 0; i < num; i++)  //외부 for문: 개행의 역할. i는 0부터 10까지 반복한다. 반복할 때마다 1씩 증가한다.
            {
            for(j = 0; j < num - i; j++) //내부 for문 첫번째. j는 0부터 10-i번까지 1씩 증가하며 반복한다.
            {
                printf(" "); //공백을 출력해 준다.
            }

            for(j = 0; j < 2 * i + 1; j++) //내부 for문 두번째. j는 0부터 2*i+1번까지 1씩 증가하며 반복한다.
            {


                if(j == 1 || j == 2*i - 1){
                    printf("*"); //별을 출력해 준다.
                } else{
                    printf(" ");
                }
            }

            printf("\n"); //개행한다.

        }

        //  마지막줄
    printf(" ");
    for(i = 1; i< num * 2; i++){
        printf("*");

    }
    printf("\n");

    //첫 번째 막대기
    for(i = 1; i < 2; i++){
        for (int j = 1; j < num * i + 1; j++) {
            printf(" ");
        }
    }
    printf("|");
    printf("\n");

    //두 번째 막대기
    for(i = 1; i < 2; i++){
        for (int j = 1; j < num * i + 1; j++) {
            printf(" ");
        }
    }
    printf("|");
    printf("\n");



}
