#include "pawn.h"
using namespace std;


Pawn::Pawn(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color) : QLabel(parent), m_x(x), m_y(y) {
    setPixmap(pixmap);
    setFixedSize(60, 60);
    setStyleSheet(color);
}

int Pawn::getX() const {
    return m_x;
}

int Pawn::getY() const {
    return m_y;
}

void Pawn::setX(int x) {
    m_x = x;
}

void Pawn::setY(int y) {
    m_y = y;
}

void Pawn::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        emit clickedPawn(m_x, m_y);
    }
    QLabel::mousePressEvent(event);
}
