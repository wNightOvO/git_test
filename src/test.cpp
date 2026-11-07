#include<cstdio>
#include<windows.h>
#include<iostream>
#include<format>
#include"i_con.hpp"

int main() {
    SetConsoleOutputCP(CP_UTF8); // 设为UTF-8编码
    printf("hello world\n");
    printcc();
    std::cout << std::format("{} nihao {}", "heel", 123);
    system("pause");
    return 0;
}