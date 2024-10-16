#include <iostream>
#include <string>
#include <cctype>

bool isNumber(const std::string& s) {
    int i = 0, n = s.size();
    bool seenDigit = false, seenDot = false, seenExponent = false;

    // Skip leading whitespace
    while (i < n && std::isspace(s[i])) i++;

    // Handle optional sign
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

    // Handle exponent part
    if (i < n && (s[i] == 'e' || s[i] == 'E')) {
        i++;
        // Handle optional sign for exponent
        if (i < n && (s[i] == '+' || s[i] == '-')) i++;
        
        // Exponent must have at least one digit
        if (i >= n || !std::isdigit(s[i])) return false;

        while (i < n && std::isdigit(s[i])) i++;
    }

    // Skip trailing whitespace
    while (i < n && std::isspace(s[i])) i++;

    return seenDigit && i == n; // Must have seen at least one digit and consumed all input
}

int main() {
    std::string input;

    // Example inputs for testing
    std::string testCases[] = {"2", "0089", "-0.1", "+3.14", "4.", "-.9", 
                                "2e10", "-90E3", "3e+7", "+6e-1", 
                                "53.5e93", "-123.456e789", 
                                "abc", "1a", "1e", "e3", 
                                "99e2.5", "--6", "-+3", "95a54e53"};

    for (const auto& test : testCases) {  // Corrected here: use const auto&
        std::cout << "Input: \"" << test << "\" is ";
        std::cout << (isNumber(test) ? "valid" : "invalid") << std::endl;
    }

    return 0;  // Ensure this line is correctly placed and terminated with a semicolon
}
