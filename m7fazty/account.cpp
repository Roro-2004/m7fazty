#include "account.h"
#include <QCryptographicHash>
#include<string>
#include<iostream>
using namespace std;
account::account() {}

    string account ::  hashPassword(const QString &password) {
        QByteArray password_bytes = password.toUtf8();
        QByteArray hashed_bytes = QCryptographicHash::hash(password_bytes, QCryptographicHash::Sha256);
        string hashedPassword = hashed_bytes.toHex().toStdString();

        hashedPassword.erase(remove(hashedPassword.begin(), hashedPassword.end(), ','), hashedPassword.end());
        return hashedPassword;
    }
