#include <stdio.h>

int main() {
    test("Billy", 40);
    test("Bob", 25);
    test("Joe", 19);
    return 0;
}
void test(char name[],int age) {
    printf("Your name is %s and you are %d years old.\n",name, age);
    return 0;
}