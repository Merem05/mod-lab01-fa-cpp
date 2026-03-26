// Copyright 2022 UNN-IASR
#include "fun.h"

#include <clocale>
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << "Test 1\n";

    const char* test1_1 = "Hello world 123 test";
    const char* test1_2 = "abc 123 hello456 World";
    const char* test1_3 = "   Hello  all    World   ";
    const char* test1_4 = "123456";
    const char* test1_5 = "";
    const char* test1_6 = "   ";

    std::cout << "\"" << test1_1 << "\" -> " << faStr1(test1_1) << "\n";
    std::cout << "\"" << test1_2 << "\" -> " << faStr1(test1_2) << "\n";
    std::cout << "\"" << test1_3 << "\" -> " << faStr1(test1_3) << "\n";
    std::cout << "\"" << test1_4 << "\" -> " << faStr1(test1_4) << "\n";
    std::cout << "\"" << test1_5 << "\" -> " << faStr1(test1_5) << "\n";
    std::cout << "\"" << test1_6 << "\" -> " << faStr1(test1_6) << "\n\n";

    std::cout << "Test 2\n";

    const char* test2_1 = "Hello world Test123 abc";
    const char* test2_2 = "ABC def Ghi Jkl";
    const char* test2_3 = "   Hello  All    World   ";
    const char* test2_4 = "Abc123 Def";
    const char* test2_5 = "A b C d E f";

    std::cout << "\"" << test2_1 << "\" -> " << faStr2(test2_1) << "\n";
    std::cout << "\"" << test2_2 << "\" -> " << faStr2(test2_2) << "\n";
    std::cout << "\"" << test2_3 << "\" -> " << faStr2(test2_3) << "\n";
    std::cout << "\"" << test2_4 << "\" -> " << faStr2(test2_4) << "\n";
    std::cout << "\"" << test2_5 << "\" -> " << faStr2(test2_5) << "\n\n";

    std::cout << "Test 3\n";

    const char* test3_1 = "Hello world test";
    const char* test3_2 = "a bb ccc dddd eeeee";
    const char* test3_3 = "   hello  all    world   ";
    const char* test3_4 = "";
    const char* test3_5 = "a b c d e";
    const char* test3_6 = "   ";

    std::cout << "\"" << test3_1 << "\" -> " << faStr3(test3_1) << "\n";
    std::cout << "\"" << test3_2 << "\" -> " << faStr3(test3_2) << "\n";
    std::cout << "\"" << test3_3 << "\" -> " << faStr3(test3_3) << "\n";
    std::cout << "\"" << test3_4 << "\" -> " << faStr3(test3_4) << "\n";
    std::cout << "\"" << test3_5 << "\" -> " << faStr3(test3_5) << "\n";
    std::cout << "\"" << test3_6 << "\" -> " << faStr3(test3_6) << "\n";

    return 0;
}
