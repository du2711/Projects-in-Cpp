#include <iostream>
#include <string>

using namespace std;

// --- CORE CONVERSIONS TO AND FROM DECIMAL ---

string d2b(long long n) {
    if (n == 0) return "0";
    string ans = "";
    while(n > 0) {
        ans = to_string(n % 2) + ans;
        n /= 2;
    }
    return ans;
}

string d2o(long long n) {
    if (n == 0) return "0";
    string ans = "";
    while(n > 0) {
        ans = to_string(n % 8) + ans;
        n /= 8;
    }
    return ans;
}

string d2h(long long n) {
    if (n == 0) return "0";
    string ans = "";
    while(n > 0) {
        int pd = n % 16;
        if(pd < 10) ans = char(pd + '0') + ans;   
        else ans = char(pd - 10 + 'A') + ans;     
        n /= 16;
    }
    return ans;
}

long long b2d(string n) {
    long long ans = 0, base = 1;
    for(int i = n.size() - 1; i >= 0; i--) {
        if(n[i] == '1') ans += base;
        base *= 2;
    }
    return ans;
}

long long o2d(string n) {
    long long ans = 0, base = 1;
    for(int i = n.size() - 1; i >= 0; i--) {
        ans += (n[i] - '0') * base;
        base *= 8;
    }
    return ans;
}

long long h2d(string n) {
    long long ans = 0, base = 1;
    for(int i = n.size() - 1; i >= 0; i--) {
        char c = n[i];
        long long value = 0; 
        if(c >= '0' && c <= '9') value = c - '0';          
        else if(c >= 'A' && c <= 'F') value = c - 'A' + 10;     
        else if(c >= 'a' && c <= 'f') value = c - 'a' + 10;     

        ans += value * base;
        base *= 16;   
    }
    return ans;
}

// --- CHAINED CONVERSIONS ---

string b2o(string n) { return d2o(b2d(n)); }
string b2h(string n) { return d2h(b2d(n)); }

string o2b(string n) { return d2b(o2d(n)); }
string o2h(string n) { return d2h(o2d(n)); }

string h2b(string n) { return d2b(h2d(n)); }
string h2o(string n) { return d2o(h2d(n)); }


int main() {
    int choice;
    cout << "--- Universal Number System Converter ---\n";
    cout << "1. Decimal to Binary\n";
    cout << "2. Decimal to Octal\n";
    cout << "3. Decimal to Hexadecimal\n";
    cout << "4. Binary to Decimal\n";
    cout << "5. Binary to Octal\n";
    cout << "6. Binary to Hexadecimal\n";
    cout << "7. Octal to Decimal\n";
    cout << "8. Octal to Binary\n";
    cout << "9. Octal to Hexadecimal\n";
    cout << "10. Hexadecimal to Decimal\n";
    cout << "11. Hexadecimal to Binary\n";
    cout << "12. Hexadecimal to Octal\n";
    cout << "Enter your choice (1-12): ";
    cin >> choice;

    string inp_str;
    cout << "Enter your input: ";
    cin >> inp_str;

    cout << "Result: ";
    
    // For choices 1, 2, 3, we need to pass a long long to the functions. 
    // stoll() converts a string to a 'long long' integer.
    
    if (choice >= 1 && choice <= 3) {
        long long dec_input = stoll(inp_str);
        if(choice == 1) cout << d2b(dec_input); 
        else if(choice == 2) cout << d2o(dec_input);
        else if(choice == 3) cout << d2h(dec_input);
    } 
    // All other functions safely take strings!
    else {
        if(choice == 4) cout << b2d(inp_str);
        else if(choice == 5) cout << b2o(inp_str);
        else if(choice == 6) cout << b2h(inp_str);
        else if(choice == 7) cout << o2d(inp_str);
        else if(choice == 8) cout << o2b(inp_str);
        else if(choice == 9) cout << o2h(inp_str);
        else if(choice == 10) cout << h2d(inp_str); 
        else if(choice == 11) cout << h2b(inp_str); 
        else if(choice == 12) cout << h2o(inp_str); 
        else cout << "Invalid choice.";
    }
    
    cout << endl;
    return 0;
}