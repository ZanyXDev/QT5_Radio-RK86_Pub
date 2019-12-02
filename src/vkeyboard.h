#ifndef VKEYBOARD_H
#define VKEYBOARD_H

#include <QObject>
#include <QSet>

class VKeyboard : public QObject
{
    Q_OBJECT
public:
    explicit VKeyboard(QObject *parent = nullptr);
    bool isKeyPressed(quint8 key);
signals:

public slots:
    void setKeyDown(quint8 key);
    void setKeyUp(quint8 key);
private:
    bool AnyKeyDown;
    QSet<quint8> m_keys;
};

#endif // VKEYBOARD_H
