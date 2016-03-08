// c program to find the greatest number in page 16
#include<stdio.h>

int main() {
int a,b,c;

printf("\nEnter value of a,b &c :");
scanf("%d %d %d", &a, &b, &c);

if((a>b)&&(a>c)){
printf("\na is the greatest");
}

else if((b>c)&& (b >a)){
printf("\nb is the greatest");
}

else if((c> a)&& (c> b)){
printf("\nc is the greatest");
}

// this final else is for when the values are equal
else{
printf("None is greater");
}

return 0;

}
