#include<stdio.h>

int main() {
int base, height;
float area;

printf("\nEnter the base of the Right Angled triangle: ");
scanf("%d", &base);

printf("\nEnter the height of the Right Angled Triangle: ");
scanf("%d", &height);

area = 0.5 * base * height;
printf("\nArea of the right angledtriangle : %f", area);

return 0;
}
