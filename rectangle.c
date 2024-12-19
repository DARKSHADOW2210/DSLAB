#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

float calcrec(struct Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    struct Rectangle rect;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);
    float area = calcrec(rect);
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}
