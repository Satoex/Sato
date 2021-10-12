// Copyright (c) 2011-2014 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Sato Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SATO_QT_SATOADDRESSVALIDATOR_H
#define SATO_QT_SATOADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SatoAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SatoAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Sato address widget validator, checks for a valid sato address.
 */
class SatoAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SatoAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SATO_QT_SATOADDRESSVALIDATOR_H
