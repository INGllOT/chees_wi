#include "queen.h"

Queen::Queen(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {

}

bool Queen::isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece)  {
    // Różnica w wierszach i kolumnach
    int rowDiff = abs(endXRow - startXRow);
    int colDiff = abs(endYColumn - startYColumn);

    // Czy ruch jest prosty (jak wieża) czy diagonalny (jak goniec)
    bool isStraightMove = (startXRow == endXRow || startYColumn == endYColumn);
    bool isDiagonalMove = (rowDiff == colDiff);

    if (!isStraightMove && !isDiagonalMove) {
        return false;
    }

    return true;
}
