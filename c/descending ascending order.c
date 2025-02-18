#include <stdio.h>
int main() {
int n;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter elements: ");
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Ascending order
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (arr[i] > arr[j]) {
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("Array in Ascending Order: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
// Descending order
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (arr[i] < arr[j]) {
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("Array in Descending Order: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
