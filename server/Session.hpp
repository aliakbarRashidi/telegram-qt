#ifndef TELEGRAM_QT_SERVER_USER_SESSION_HPP
#define TELEGRAM_QT_SERVER_USER_SESSION_HPP

#include <QVector>

#include "ServerNamespace.hpp"

namespace Telegram {

namespace Server {

class RemoteClientConnection;
class RpcLayer;
class LocalUser;

class Session
{
public:
    bool isActive() const { return m_connection; }
    RemoteClientConnection *getConnection() const { return m_connection; }
    void setConnection(RemoteClientConnection *connection) { m_connection = connection; }

    quint64 id() const { return sessionId; }

    RpcLayer *rpcLayer() const;

    LocalUser *userOrWantedUser() const { return m_user ? m_user : m_wanterUser; }
    LocalUser *user() const { return m_user; }
    void setUser(LocalUser *user) { m_user = user; }

    LocalUser *wanterUser() const { return m_wanterUser; }
    void setWantedUser(LocalUser *user) { m_wanterUser = user; }

    quint32 layer() const { return m_layer; }
    void setLayer(quint32 layer) { m_layer = layer; }

    quint64 getOldSalt();
    quint64 getServerSalt();
    bool checkSalt(quint64 salt);
    bool generateInitialServerSalt();
    void setInitialServerSalt(quint64 salt);
    QVector<ServerSalt> getSalts(quint32 numberLimit);

    static ServerSalt generateSalt(quint32 validSince);

    quint32 appId = 0;
    quint32 lastSequenceNumber = 0;
    quint64 lastMessageNumber = 0;
    quint64 sessionId = 0;
    QString deviceInfo;
    QString osInfo;
    QString appVersion;
    QString systemLanguage;
    QString languagePack;
    QString languageCode;
    QString ip;
    quint64 timestamp = 0;

protected:
    void addSalt();

    RemoteClientConnection *m_connection = nullptr;
    LocalUser *m_wanterUser = nullptr;
    LocalUser *m_user = nullptr;
    QVector<ServerSalt> m_salts;
    ServerSalt m_oldSalt;
    quint32 m_layer = 0;
};

} // Server namespace

} // Telegram namespace

Q_DECLARE_TYPEINFO(Telegram::Server::Session, Q_MOVABLE_TYPE);

#endif // TELEGRAM_QT_SERVER_USER_SESSION_HPP
