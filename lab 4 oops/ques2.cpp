#include <iostream>
using namespace std;

class userAccount
{
    private:
    string username;
    int loginattempts;
    string accountstatus;
    public:
    userAccount(string u,int a,string s)
    {
        username=u;
        loginattempts=a;
        accountstatus=s;
    }
    friend void checkAccount(userAccount u);
};
void checkAccount(userAccount u)
{
    cout << " usename:"<< u.username << endl;
    cout << " login attempts:" << u.loginattempts << endl;
    if(u.loginattempts>=3)
    {
        cout << "account locked" << endl;
    }
    else
    cout << " account active" << endl;
}
int main()
{
    userAccount u("nancy",2,"active");
    checkAccount(u);
    return 0;
}