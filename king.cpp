#include "king.h"

King::King(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {

}


bool King::isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece)  {
    // Calculate the difference in rows and columns
    int rowDiff = abs(endXRow - startXRow);
    int colDiff = abs(endYColumn - startYColumn);

    // Check if the move is one square in any direction
    if (rowDiff > 1 || colDiff > 1) {
        return false;
    }

    // If the destination square is occupied by a piece of the same color, the move is invalid
    if (destinationPiece != nullptr && destinationPiece->getColor() == this->getColor()) {
        return false;
    }

    return true;
}
