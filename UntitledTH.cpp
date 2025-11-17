#include <stdio.h>
#include <stdlib.h>
int arr[100]={4,8,9,7,0};
int size = 5;

void addElement(int *arr, int pos, int value) {
    if (pos < 0 || pos > size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = size; i > pos; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + pos) = value;
    size++;

    printf("Da them thanh cong");
    printf("\n");
}

void deleteElement(int *arr, int pos) {
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < size - 1; i++)
        *(arr + i) = *(arr + i + 1);
    size--;

    printf("Da xoa thanh cong");
    printf("\n");
}

void updateElement(int *arr, int pos, int value) {
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    *(arr + pos) = value;

    printf("Da cap nhat thanh cong");
    printf("\n");
}

void displayArray(int *arr) {
    if (size == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("Mang hien tai: ");
    for (int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int choice, pos, value;

    do {
        printf("\n----------- Quan ly danh sach so nguyen ------------\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Hien thi mang\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap vi tri muon them: ");
                scanf("%d", &pos);
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                addElement(arr, pos, value);
                break;
            case 2:
                printf("Nhap vi tri muon xoa: ");
                scanf("%d", &pos);
                deleteElement(arr, pos);
                break;
            case 3:
                printf("Nhap vi tri muon cap nhat: ");
                scanf("%d", &pos);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                updateElement(arr, pos, value);
                break;
            case 4:
                displayArray(arr);
                break;
            case 5:
                printf("Thoat chuong trinh\n");
                exit(0);
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while(choice != 5);
}
