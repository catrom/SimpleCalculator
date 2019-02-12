#include "Calc.h"


void removeWhiteSpace(string &exp) {
	exp.erase(remove(exp.begin(), exp.end(), ' '), exp.end());
}

int getPriority(char c) {
	if (c == '^') return 3;
	if (c == '*' || c == '/') return 2;
	if (c == '+' || c == '-') return 1;

	return 0; // not operator
}

bool checkBracket(string exp) {
	int balance = 0;
	int n = exp.length();

	for (int i = 0; i < n; i++) {
		if (exp[i] == '(') {
			balance++;
			if (i > 0 && isdigit(exp[i - 1]))
				return 0;
		}
		else if (exp[i] == ')') {
			balance--;
			if (i < n - 1 && isdigit(exp[i + 1]))
				return 0;
		}

		if (balance < 0)
			return false;
	}

	return balance == 0;
}

bool checkRealNum(string exp) {
	char *s = (char*)exp.c_str();
	char *ptr = strtok(s, "+-*/^()p");

	while (ptr) {
		int len = strlen(ptr);
		int cntDot = 0;

		if (ptr[0] == '.')
			return 0;

		for (int i = 0; i < len; i++) {
			if (!isdigit(ptr[i]) && ptr[i] != '.')
				return 0;
			if (ptr[i] == '.') cntDot++;
		}

		if (cntDot > 1) return 0;
		ptr = strtok(NULL, "+-*/^()p");
	}

	return 1;
}

bool checkOperator(string exp) {
	int n = exp.length();

	for (int i = 0; i < n; i++) {
		if (getPriority(exp[i])) {
			if (i == 0 || i == n - 1)
				return 0;
			if ((!isdigit(exp[i - 1]) && exp[i - 1] != 'p' && exp[i - 1] != ')') ||
				(!isdigit(exp[i + 1]) && exp[i + 1] != 'p' && exp[i + 1] != '('))
				return 0;
		}
	}

	return 1;
}

bool checkPi(string exp) {
	int n = exp.length();

	for (int i = 0; i < n; i++) {
		if (exp[i] == 'p') {
			if ((i > 0 && (isdigit(exp[i - 1]) || exp[i - 1] == 'p')) ||
				(i < n - 1 && (isdigit(exp[i + 1]) || exp[i + 1] == 'p')))
				return 0;
		}
	}

	return 1;
}

bool checkValid(string exp) {
	return exp.size() > 0 && checkBracket(exp) && checkRealNum(exp) && checkOperator(exp) && checkPi(exp);
}

queue<string> convertToPostfix(string exp) {
	stack<char> Stack;
	queue<string> Postfix;

	for (int i = 0; i < exp.length(); i++) {
		if (isdigit(exp[i])) {
			string num;

			while (i < exp.length() && (isdigit(exp[i]) || exp[i] == '.')) {
				num += exp[i];
				i++;
			}

			Postfix.push(num);
			i--;
		}
		else if (exp[i] == '(' || exp[i] == ')') {
			if (exp[i] == '(') {
				Stack.push(exp[i]);
			}
			else {
				char c = Stack.top();
				Stack.pop();

				while (c != '(') {
					Postfix.push(string(1, c));

					c = Stack.top();
					Stack.pop();
				}
			}
		}
		else if (exp[i] == 'p') {
			Postfix.push("p");
		}
		else {
			while (!Stack.empty()) {
				int curPriority = getPriority(exp[i]),
					prePriority = getPriority(Stack.top());

				if (prePriority >= curPriority) {
					Postfix.push(string(1, Stack.top()));
					Stack.pop();
				}
				else break;
			}

			Stack.push(exp[i]);
		}
	}

	while (!Stack.empty()) {
		Postfix.push(string(1, Stack.top()));
		Stack.pop();
	}

	return Postfix;
}

bool checkSizeNum(string num) {
	int c = 0;

	for (int i = 0; i < num.length() && num[i] != '.'; i++, c++);

	return c < 10;
}

float Calculate(string exp) {
	stack<float> Result;
	queue<string> Postfix = convertToPostfix(exp);

	while (!Postfix.empty()) {
		string pop = Postfix.front();
		Postfix.pop();

		if (isdigit(pop[0])) {
			if (!checkSizeNum(pop))
				return -99999.9;
			Result.push(stof(pop));
		}
		else if (pop[0] == 'p')
			Result.push(p);
		else {
			float a = Result.top(); Result.pop();
			float b = Result.top(); Result.pop();

			if (pop == "^") Result.push(pow(b, a));
			else if (pop == "*") Result.push(b * a);
			else if (pop == "/") Result.push(b / a);
			else if (pop == "+") Result.push(b + a);
			else if (pop == "-") Result.push(b - a);
		}
	}
	
	if (!checkSizeNum(to_string(Result.top())))
		return -99999.9;

	return Result.top();
}