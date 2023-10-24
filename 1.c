#include <stdio.h>
/* 230122004-Md. Abu Sayed */
int Duplicates(int arr[], int size) {
for (int i = 0; i < size; i++) {
for (int j = i + 1; j < size; j++) {
if (arr[i] == arr[j]) {
return 1;
}
}
}
return 0;
}
int main() {
int arr[10];
for (int i = 0; i < 10; i++) {
printf("Enter 10 integers [%d]: ", i);
scanf("%d", &arr[i]);
}
if (Duplicates(arr, 10)) {
printf("Duplicate element(s) found: ");
for (int i = 0; i < 10; i++) {
for (int j = i + 1; j < 10; j++) {
if (arr[i] == arr[j]) {
printf("%d ", arr[i]);
break;
}
}
}
} else {
printf("No Duplicates");
}
return 0;
}