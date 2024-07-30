#include "queen.h"

Queen::Queen(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {

}

bool Queen::isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece)  {
    // Calculate the difference in rows and columns
    int rowDiff = abs(endXRow - startXRow);
    int colDiff = abs(endYColumn - startYColumn);

    // Check if the move is either straight (rook-like) or diagonal (bishop-like)
    bool isStraightMove = (startXRow == endXRow || startYColumn == endYColumn);
    bool isDiagonalMove = (rowDiff == colDiff);

    if (!isStraightMove && !isDiagonalMove) {
        return false;
    }

    return true;
}
