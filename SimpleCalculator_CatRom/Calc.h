#ifndef _CALC
#define _CALC

#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <string>
#include <cstring>
#include <cmath>

#define p	3.141593

using namespace std;


void removeWhiteSpace(string &exp);

int getPriority(char c);

bool checkBracket(string exp);

bool checkRealNum(string exp);

bool checkOperator(string exp);

bool checkPi(string exp);

bool checkValid(string exp);

queue<string> convertToPostfix(string exp);

bool checkSizeNum(string num);

float Calculate(string exp);



#endif