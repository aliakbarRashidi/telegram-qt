#include "DeclarativeDialogInfo.hpp"

#include "Client.hpp"
#include "DataStorage.hpp"

#include <QLoggingCategory>

Q_DECLARE_LOGGING_CATEGORY(c_qmlLoggingCategory)

namespace Telegram {

namespace Client {

DeclarativeDialogInfo::DeclarativeDialogInfo(QObject *parent) :
    DeclarativeClientOperator(parent)
{
}

void DeclarativeDialogInfo::setPeer(const Peer &peer)
{
    if (m_peer == peer) {
        return;
    }
    m_peer = peer;
    emit peerChanged();

    updateInfo();
}

void DeclarativeDialogInfo::setDisplayName(const QString &displayName)
{
    if (m_displayName == displayName) {
        return;
    }
    m_displayName = displayName;
    emit displayNameChanged(displayName);
}

void DeclarativeDialogInfo::updateInfo()
{
    if (!client()) {
        qCWarning(c_qmlLoggingCategory) << this << "Client not set!";
        return;
    }
    if (!m_peer.isValid()) {
        setDisplayName(QString());
        return;
    }
    if (m_peer.type == Peer::User) {
        UserInfo info;
        client()->dataStorage()->getUserInfo(&info, m_peer.id);
        setDisplayName(info.getBestDisplayName());
    } else {
        ChatInfo info;
        client()->dataStorage()->getChatInfo(&info, m_peer);
        setDisplayName(info.title());
    }
}

} // Client

} // Telegram
