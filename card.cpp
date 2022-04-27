#include "card.h"

#include <QPixmap>
#include <QLabel>
#include <QVBoxLayout>

Card::Card(QString text, QWidget *parent)
    : QWidget{parent}
{
    setProperty("cssClass", "card");
//    setMaximumHeight(70);
//    setMaximumWidth(70);

    m_lay = new QVBoxLayout(this);
    m_picture = new QLabel(this);
    m_text = new QLabel(text, this);
    setLayout(m_lay);

    m_picture->setPixmap(QPixmap(":/profile-png-icon-2.png"));
    m_picture->setScaledContents(true);
//    m_picture->setGeometry(0, 0, 30, 30);
    m_picture->setMaximumHeight(40);
    m_picture->setMaximumWidth(40);

    layout()->addWidget(m_picture);
    layout()->addWidget(m_text);
}

Card::~Card()
{
    delete m_picture;
}
