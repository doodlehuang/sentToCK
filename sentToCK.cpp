#include <iostream>
int main()
{
    using namespace std;
    int msg = 1, sent = 0;
    for (int day = 1; day <= 30; day++) {
        cout << "[Day" << day << "] Messages: " << msg <<endl;
        sent += msg;
        msg *= 2;
    }
    cout << "Total sent: " << sent <<endl;
    return 0;
}
