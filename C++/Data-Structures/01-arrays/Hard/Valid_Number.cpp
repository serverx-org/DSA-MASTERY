/* Given a string s, return whether s is a valid number.
A valid number is defined using one of the following definitions:
1. An integer number followed by an optional exponent.
2. A decimal number followed by an optional exponent.
3. An integer number is defined with an optional sign '-' or '+' followed by digits.
4. A decimal number is defined with an optional sign '-' or '+' followed by one of the following definitions:
5. Digits followed by a dot '.'.
6. Digits followed by a dot '.' followed by digits.
7. A dot '.' followed by digits.
8. An exponent is defined with an exponent notation 'e' or 'E' followed by an integer number.
9. The digits are defined as one or more digits.
For example, all the following are valid numbers:
"2", "0089", "-0.1", "+3.14", "4.", "-.9", "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789", 
while the following are not valid numbers: "abc", "1a", "1e", "e3", "99e2.5", "--6", "-+3", "95a54e53".
Example 1:  Input: s = "0" ; Output: true
Example 2:  Input: s = "e" ; Output: false */
    
#include <iostream>
#include <string>
#include <cctype>

bool isNumber(const std::string& s) {
    int i = 0, n = s.size();
    bool seenDigit = false, seenDot = false, seenExponent = false;
    
    while (i < n && std::isspace(s[i])) i++;

    if (i < n && (s[i] == '+' || s[i] == '-')) i++;

    // Process digits and decimal point
    while (i < n && (std::isdigit(s[i]) || s[i] == '.')) {
        if (s[i] == '.') {
            if (seenDot) return false; // Second dot found
            seenDot = true;
        } else {
            seenDigit = true;
        }
        i++;
    }
    if (i < n && (s[i] == 'e' || s[i] == 'E')) {
        i++;
        if (i < n && (s[i] == '+' || s[i] == '-')) i++;
        if (i >= n || !std::isdigit(s[i])) return false;
        while (i < n && std::isdigit(s[i])) i++;
    }
    while (i < n && std::isspace(s[i])) i++;
    return seenDigit && i == n; 
}
int main() {
    std::string input;
    std::string testCases[] = {"2", "0089", "-0.1", "+3.14", "4.", "-.9", 
                                "2e10", "-90E3", "3e+7", "+6e-1", 
                                "53.5e93", "-123.456e789", 
                                "abc", "1a", "1e", "e3", 
                                "99e2.5", "--6", "-+3", "95a54e53"};

    for (const auto& test : testCases) { 
        std::cout << "Input: \"" << test << "\" is ";
        std::cout << (isNumber(test) ? "valid" : "invalid") << std::endl;
    }

    return 0;
}
