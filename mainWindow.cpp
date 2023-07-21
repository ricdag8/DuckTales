#include "mainWindow.h"

MainWindow::MainWindow() : QWidget(0)
{
    _game = Game::instance();

    _layout = new QBoxLayout(QBoxLayout::LeftToRight, this);
    _layout->setSpacing(0);
    _layout->setContentsMargins(0, 0, 0, 0);
    _layout->addItem(new QSpacerItem(0, 0));
    _layout->addWidget(_game);
    _layout->addItem(new QSpacerItem(0, 0));
    setLayout(_layout);

    setStyleSheet("background-color: black;");

    setWindowTitle("DuckTales [NES]");

    //showFullScreen();
}

