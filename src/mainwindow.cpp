#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    m_keyb = new VKeyboard();

}

void MainWindow::keyPressEvent(QKeyEvent *event)
{

    emit changeKeyState( mapKey( event->key() ),true );
    QMainWindow::keyPressEvent(event);
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    emit changeKeyState( mapKey( event->key() ), false );
    QMainWindow::keyReleaseEvent(event);
}
