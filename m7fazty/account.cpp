#include "account.h"
#include <QCryptographicHash>
#include<string>
#include<iostream>
account::account() {}

    string account ::  hashPassword(const QString &password) {
        QByteArray password_data = password.toUtf8();
        QByteArray hash_data = QCryptographicHash::hash(password_data, QCryptographicHash::Sha256);
        cout<<hash_data.toStdString()<<endl;
        return hash_data.toStdString();
    }
