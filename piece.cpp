#include "piece.h"
using namespace std;


Piece::Piece(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color, const QString& name)
    : QLabel(parent), m_x(x), m_y(y), color(color) {

    setPixmap(pixmap);
    setFixedSize(60, 60);
    isFirstMove = true;
}


// Pomieszane osi x/y
int Piece::getRow() const {
      return m_x;
}

int Piece::getColumn() const {
    return m_y;

}

void Piece::setColumn(int y) {
    m_y = y;
}

void Piece::setRow(int x) {
    m_x = x;
}

void Piece::setPosition(int newRow, int newCol) {
     //qDebug() << "Hello World! Piece clicked at position: (" << newRow << ", " << newCol << " "<< getColor() << ")";
    m_x = newRow;
    m_y = newCol;
}

void Piece::mousePressEvent(QMouseEvent *event) {
    emit clickedPiece(m_x, m_y);
}


QString Piece::getColor() const {
    return color;
}


void Piece::setColor(QString color) const {
    color = color;
}

bool Piece::isValidMove(int startXRow, int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece, QGridLayout *gridLayout)  {

    return false;
}


