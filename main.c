#include <stdio.h>

#define MAX_SIZE 50

int main() {
    int tickets[MAX_SIZE] = {10, 20, 30, 40, 50};
    int n = 5;
    int choice;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Them ticket\n");
        printf("2. Sua ticket\n");
        printf("3. Xoa ticket\n");
        printf("0. Thoat\n");
        printf("==========================\n");

        printf("Danh sach ticket: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", tickets[i]);
        }
        printf("\n");

        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                if (n >= MAX_SIZE) {
                    printf("Mang da day!\n");
                    break;
                }

                int pos;
                int value;

                printf("Nhap vi tri can them (0 -> %d): ", n);
                scanf("%d", &pos);

                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                printf("Nhap gia tri ticket: ");
                scanf("%d", &value);

                if (value < 0) {
                    printf("Gia tri khong duoc am!\n");
                    break;
                }

                for (int i = n; i > pos; i--) {
                    tickets[i] = tickets[i - 1];
                }

                tickets[pos] = value;
                n++;

                printf("Them ticket thanh cong!\n");
                break;
            }

            case 2: {
                if (n == 0) {
                    printf("Mang dang rong!\n");
                    break;
                }

                int pos;
                int value;

                printf("Nhap vi tri can sua (0 -> %d): ", n - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                printf("Nhap gia tri moi: ");
                scanf("%d", &value);

                if (value < 0) {
                    printf("Gia tri khong duoc am!\n");
                    break;
                }

                tickets[pos] = value;

                printf("Sua ticket thanh cong!\n");
                break;
            }

            case 3: {
                if (n == 0) {
                    printf("Mang dang rong!\n");
                    break;
                }

                int pos;

                printf("Nhap vi tri can xoa (0 -> %d): ", n - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                for (int i = pos; i < n - 1; i++) {
                    tickets[i] = tickets[i + 1];
                }

                n--;

                printf("Xoa ticket thanh cong!\n");
                break;
            }

            case 0:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
