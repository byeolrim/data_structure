#include <stdio.h>

int main() {
    // 길이가 6인 int형 배열 선언 및 초기화
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };

    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // 배열을 가리키는 포인터 변수 선언
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    // 배열의 값을 뒤바꾸기
    for (int i = 0; i < 6; i++) {
        int temp = *(ptr1 + i); // arr1의 값을 temp에 저장
        *(ptr1 + i) = *(ptr2 + i); // arr2의 값을 arr1에 저장
        *(ptr2 + i) = temp; // temp에 저장된 값을 arr2에 저장
    }

    // 결과 출력
    printf("after swap \n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
