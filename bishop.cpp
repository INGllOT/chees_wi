#include "bishop.h"

Bishop::Bishop(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {
}

bool Bishop::isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece) {

    return true;
}
