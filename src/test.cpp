#include<cstdio>
#include<windows.h>
#include<iostream>
#include<format>

int main() {
    printf("hello world\n");
    std::cout << std::format("{} nihao {}", "heel", 123);
    system("pause");
    return 0;
}