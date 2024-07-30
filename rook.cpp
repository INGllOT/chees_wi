#include "rook.h"

Rook::Rook(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {

}

bool Rook::isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece)  {
    if (startXRow != endXRow && startYColumn != endYColumn) {
        return false;
    }
    return true;
}
