// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char* str) {
    if (str == nullptr) return 0;

    int count = 0;
    bool inWord = false;
    bool badWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (inWord && !badWord) {
                count++;
            }
            inWord = false;
            badWord = false;
        }
        else {
            if (!inWord) {
                inWord = true;
            }
            if (isdigit(str[i])) {
                badWord = true;
            }
        }
    }

    if (inWord && !badWord) {
        count++;
    }

    return count;
}

unsigned int faStr2(const char* str) {
    if (str == nullptr) return 0;

    int count = 0;
    bool inWord = false;
    bool goodWord = true;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (inWord && goodWord) {
                count++;
            }
            inWord = false;
        }
        else {
            if (!inWord) {
                if (isupper(str[i])) {
                    goodWord = true;
                }
                else {
                    goodWord = false;
                }
                inWord = true;
            }
            else {
                if (!islower(str[i])) {
                    goodWord = false;
                }
            }
        }
    }

    if (inWord && goodWord) {
        count++;
    }

    return count;
}

unsigned int faStr3(const char* str) {
    if (str == nullptr) return 0;

    int wordCount = 0;
    int totalLength = 0;
    int currentLength = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (inWord) {
                wordCount++;
                totalLength += currentLength;
                inWord = false;
            }
        }
        else {
            if (!inWord) {
                inWord = true;
                currentLength = 1;
            }
            else {
                currentLength++;
            }
        }
    }

    if (inWord) {
        wordCount++;
        totalLength += currentLength;
    }

    if (wordCount == 0) return 0;

    return (totalLength + wordCount / 2) / wordCount;
}
