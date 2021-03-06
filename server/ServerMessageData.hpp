/*
   Copyright (C) 2019 Alexandr Akulich <akulichalexander@gmail.com>

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

#ifndef TELEGRAM_SERVER_MESSAGE_DATA_HPP
#define TELEGRAM_SERVER_MESSAGE_DATA_HPP

#include "TelegramNamespace.hpp"

#include <QHash>

namespace Telegram {

namespace Server {

class MessageData
{
public:
    MessageData() = default;
    MessageData(quint32 from, Peer to, const QString &text);

    quint64 globalId() const { return m_globalId; }
    void setGlobalId(quint64 id);

    QString text() const { return m_text; }
    Peer toPeer() const { return m_to; }
    quint32 fromId() const { return m_fromId; }
    quint32 date() const { return m_date; }

    void addReference(const Peer &peer, quint32 messageId);
    quint32 getReference(const Peer &peer) const { return m_references.value(peer); }

protected:
    QHash<Peer, quint32> m_references;
    QString m_text;
    Peer m_to;
    quint64 m_globalId = 0;
    quint32 m_fromId = 0;
    quint32 m_date = 0;
};

} // Server namespace

} // Telegram namespace

#endif // TELEGRAM_SERVER_MESSAGE_DATA_HPP
