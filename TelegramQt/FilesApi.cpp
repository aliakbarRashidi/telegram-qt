#include "FilesApi.hpp"

FileOperation *Backend::getFile(const RemoteFile *file)
{
    return nullptr;
}

FileOperation *Backend::getPeerPicture(const Peer &peer, PeerPictureSize size)
{
    return nullptr;
}


FileOperation *Client::getFile(const RemoteFile *file)
{
    Q_D(Client);
    return d->getFile(file);
}

FileOperation *Client::getPeerPicture(const Peer &peer, PeerPictureSize size)
{
    Q_D(Client);
    return d->getPeerPicture(peer, size);
}
