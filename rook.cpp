#include "rook.h"

#include "pawn.h"

Rook::Rook(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color) : QLabel(parent), m_x(x), m_y(y) {
    setPixmap(pixmap);
    setFixedSize(60, 60);
    setStyleSheet(color);
}

int Rook::getX() const {
    return m_x;
}

int Rook::getY() const {
    return m_y;
}

void Rook::setX(int x) {
    m_x = x;
}

void Rook::setY(int y) {
    m_y = y;
}

void Rook::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        emit clickedRook(m_x, m_y);
    }
    QLabel::mousePressEvent(event);
}
