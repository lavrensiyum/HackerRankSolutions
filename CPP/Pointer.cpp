#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int&pa = *a;
    int&pb = *b;
    int gecici1, gecici2, gecici3;
    gecici1 = *a;
    gecici2 = *b;

    *a = gecici1 + gecici2;
    gecici3 = gecici1 - gecici2;

    if(gecici3<=0){
        gecici3 = -gecici3;
    }
    *b = gecici3;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b; 
    
    scanf("%d %d", &a, &b); // 4, 5
    update(pa, pb);
    printf("%d\n%d", a, b); // 9, 1

    return 0;
}
