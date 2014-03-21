/*
    Copyright (C) 2014 Alexandr Akulich <akulichalexander@gmail.com>

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#ifndef CTELEGRAMCORE_HPP
#define CTELEGRAMCORE_HPP

#include <QObject>
#include <QByteArray>

QT_BEGIN_NAMESPACE
class QTcpSocket;
QT_END_NAMESPACE

struct SDataCenter {
    QString address;
    quint16 port;
};

class CTelegramStream;

class CTelegramCore : public QObject
{
    Q_OBJECT
public:
    static const quint32 appId;
    static const QString appHash;

    explicit CTelegramCore(QObject *parent = 0);

    void setLogfile(const QString &output);

    static quint64 formatTimeStamp(qint64 timeInMs);
    static inline quint64 formatClientTimeStamp(qint64 timeInMs) { return formatTimeStamp(timeInMs) & ~3UL; }

signals:
    void connected();

public slots:
    void sendCode(const QString &phoneNumber);

private slots:
    void whenConnected();
    void acceptData();
    void stateChanged();

private:
    void addHeader(CTelegramStream *stream);
    void sendPackage(const QByteArray &package);

    void connectToDC(const SDataCenter &dc);

    QTcpSocket *m_socket;

    bool m_enableSendInformation;

    QString m_dumpFilename;

    unsigned char m_nonce[256];

};

#endif // CTELECORE_HPP