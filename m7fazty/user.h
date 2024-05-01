#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
#include <QWidget>

namespace Ui {
class user;
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

   // user(const user&) = delete;
    //user& operator=(const user&) = delete;
    string username;
    string password;
    std::string address;
    int age;


private:
    Ui::user *ui;
};

#endif // USER_H
