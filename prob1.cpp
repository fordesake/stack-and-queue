#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;

        if (isdigit(x[0]) || (x[0] == '-' && x.length() > 1)) {
            s.push(stoi(x));
        } 
        else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            if (x == "+") s.push(a + b);
            else if (x == "-") s.push(a - b);
            else if (x == "*") s.push(a * b);
            else if (x == "/") s.push(a / b);
        }
    }

    cout << s.top();
    return 0;
}