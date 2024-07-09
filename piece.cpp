#include "piece.h"
using namespace std;


Piece::Piece(int x, int y, const QPixmap& pixmap, QWidget* parent, QGridLayout* qGridLayout, const QString& color)
    : QLabel(parent), m_x(x), m_y(y), qGridLayout(qGridLayout) {

    setPixmap(pixmap);
    setFixedSize(60, 60);
    setStyleSheet(color);
}

int Piece::getX() const {
    return m_x;
}

int Piece::getY() const {
    return m_y;
}

void Piece::setX(int x) {
    m_x = x;
}

void Piece::setY(int y) {
    m_y = y;
}




void Piece::setPosition(int newRow, int newCol) {
    m_x = newRow;
    m_y = newCol;
}

void Piece::mousePressEvent(QMouseEvent *event) {
    emit clickedPiece(m_x, m_y);
}

