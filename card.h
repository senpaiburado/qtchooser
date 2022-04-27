#ifndef CARD_H
#define CARD_H

#include <QWidget>

class QLabel;
class QVBoxLayout;

class Card : public QWidget
{
    Q_OBJECT
public:
    explicit Card(QString text, QWidget *parent = nullptr);
    ~Card();

signals:

private:
    QVBoxLayout *m_lay;
    QLabel      *m_picture;
    QLabel      *m_text;

};

#endif // CARD_H
