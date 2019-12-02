#include "vkeyboard.h"

VKeyboard::VKeyboard(QObject *parent) : QObject(parent),
    AnyKeyDown (false)
{
    m_keys.clear();
}

void VKeyboard::setKeyDown(quint8 key)
{
    if (AnyKeyDown)
    {
        return;
    }
    if ( !m_keys.contains( key ) )
    {
         m_keys.insert( key );
         AnyKeyDown = true;
    }


}

void VKeyboard::setKeyUp(quint8 key)
{

}
