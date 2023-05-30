#include <bits/stdc++.h>

using namespace std;

class User {
    public:
    string username;
    string password;

    User(string username, string password) {
        this->password = password;
        this->username = username;
    }
};

int main() {
    User devan = User("devan","ubpti22");
    cout << devan.username << endl;

    return 0;    
}

