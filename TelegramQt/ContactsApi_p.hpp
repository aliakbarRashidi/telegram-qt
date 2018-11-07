/*
   Copyright (C) 2018 Alexander Akulich <akulichalexander@gmail.com>

   This file is a part of TelegramQt library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

 */

#ifndef TELEGRAMQT_CLIENT_CONTACTS_API_PRIVATE_HPP
#define TELEGRAMQT_CLIENT_CONTACTS_API_PRIVATE_HPP

#include "ClientApi_p.hpp"
#include "ContactsApi.hpp"
#include "RpcLayers/ClientRpcContactsLayer.hpp"

namespace Telegram {

namespace Client {

class PendingContactsOperation;
class DataStorage;

class ContactsApi;
class ContactsApiPrivate : public ClientApiPrivate
{
    Q_OBJECT
    Q_DECLARE_PUBLIC(ContactsApi)
public:
    explicit ContactsApiPrivate(ContactsApi *parent = nullptr);
    static ContactsApiPrivate *get(ContactsApi *parent);

    PendingContactsOperation *importContacts(const ContactsApi::ContactInfoList &contacts);
    PendingContactsOperation *getContacts();
    ContactList *getContactList();

    DataStorage *dataStorage();
    ContactsRpcLayer *contactsLayer();

    ContactList *m_contactList = nullptr;

protected slots:
    void onContactsImported(PendingContactsOperation *operation, ContactsRpcLayer::PendingContactsImportedContacts *rpcOperation);
    void onGetContactsResult(PendingContactsOperation *operation, ContactsRpcLayer::PendingContactsContacts *rpcOperation);
};

} // Client namespace

} // Telegram namespace

#endif // TELEGRAMQT_CLIENT_CONTACTS_API_PRIVATE_HPP
