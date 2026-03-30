#include<iostream>
#include<string>
using namespace std;

int d2b(int n){
    int ans=0;
    int power=1;
    while(n>0){
        int paritydigit =n%2;
        ans = ans+(paritydigit*power);
        power*=10;
        n=n/2;
    }
    return ans;
}

int d2o(int n){
    int ans=0;
    int power =1;
    while(n>0){
        int pd = n%8;
        ans+=pd*power;
        power*=10;
        n=n/8;
    }
    return ans;
}

string d2h(int n){
    string ans = "";
    while(n > 0) {
        int pd = n % 16;
        if(pd < 10) ans = char(pd + '0') + ans;   // 0–9
        else ans = char(pd - 10 + 'A') + ans;     // 10–15 → A–F
        n = n / 16;
    }
    return ans;
}

int b2d(int n){
    int ans=0,p=1;
    while(n>0){
        int lastdigit= n%10;
        ans=ans+(lastdigit*p);
        p*=2;
        n=n/10;
    }
    return ans;
}

int b2o(int n){
    int bin=b2d(n);
    return d2o(bin);
}
string b2h(int n){
    int hex = b2d(n);
    return d2h(hex);
}
int o2d(int n){
    int ans=0,p=1;
    while(n>0){
        int lastdigit= n%10;
        ans=ans+(lastdigit*p);
        p*=8;
        n=n/10;
    }
    return ans;
}
int o2b(int n){
    int bin = o2d(n);
    return d2b(bin);
}
string o2h(int n){
    int hex = o2d(n);
    return d2h(hex);
}
int h2d(string n){
    int ans = 0;
    int base = 1; 

    for(int i = n.size() - 1; i >= 0; i--) {
        char c = n[i];

        int value;
        if(c >= '0' && c <= '9') {
            value = c - '0';          // '0' → 0, '9' → 9
        } else if(c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;     // 'A' → 10, 'F' → 15
        } else if(c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;     // also handles lowercase
        }

        ans += value * base;
        base *= 16;  
    }
    return ans;
}
int h2b(string n){
    int bin = h2d(n);
    return d2b(bin);
}
int h2o(string n){
    int oct = h2d(n);
    return d2o(oct);
}

int main(){
    int choice;
    cout <<"Enter your choice: "<<endl;
    cout << "1.Decimal to Binary" << endl;
    cout << "2.Decimal to Octal" << endl;
    cout << "3.Decimal to Hexadecimal" << endl;
    cout << "4.Binary to Decimal" << endl;
    cout << "5.Binary to Octal" << endl;
    cout << "6.Binary to Hexadecimal" << endl;
    cout << "7.Octal to Decimal" << endl;
    cout << "8.Octal to Binary" << endl;
    cout << "9.Octal to Hexadecimal" << endl;
    cout << "10.Hexadecimal to Decimal" << endl;
    cout << "11.Hexadecimal to Binary" << endl;
    cout << "12.Hexadecimal to Octal" << endl;
    cout << "Enter your choice in option number: ";
    cin>>choice;

    string inp_str;
    cout<<"Enter your input: ";
    cin>>inp_str;

    int n=0;
    if(choice!=11 && choice!=12 && choice!=10) n=stoi(inp_str);

    cout<<"Result: ";
    if(choice == 1) cout << d2b(n); 
    else if(choice == 2) cout << d2o(n);
    else if(choice == 3) cout << d2h(n);
    else if(choice == 4) cout << b2d(n);
    else if(choice == 5) cout << b2o(n);
    else if(choice == 6) cout << b2h(n);
    else if(choice == 7) cout << o2d(n);
    else if(choice == 8) cout << o2b(n);
    else if(choice == 9) cout << o2h(n);
    else if(choice == 10) cout << h2d(inp_str); // Passing string directly
    else if(choice == 11) cout << h2b(inp_str); // Passing string directly
    else if(choice == 12) cout << h2o(inp_str); // Passing string directly
    else cout << "Invalid choice.";
    
    cout << endl;
    return 0;
}