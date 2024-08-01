#include "queen.h"

Queen::Queen(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {

}

bool Queen::isValidMove(int startXRow, int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece, QGridLayout *gridLayout)  {
    // Różnica w wierszach i kolumnach
    int rowDiff = abs(endXRow - startXRow);
    int colDiff = abs(endYColumn - startYColumn);

    // Czy ruch jest prosty (jak wieża) czy diagonalny (jak goniec)
    bool isStraightMove = (startXRow == endXRow || startYColumn == endYColumn);
    bool isDiagonalMove = (rowDiff == colDiff);

    if (!isStraightMove && !isDiagonalMove) {
        return false;
    }

    int rowDirection = (endXRow - startXRow) != 0 ? (endXRow - startXRow) / abs(endXRow - startXRow) : 0;
    int colDirection = (endYColumn - startYColumn) != 0 ? (endYColumn - startYColumn) / abs(endYColumn - startYColumn) : 0;

    // Czy każdy kwadrat wzdłuż ścieżki
    int checkRow = startXRow + rowDirection;
    int checkCol = startYColumn + colDirection;

    while (checkRow != endXRow || checkCol != endYColumn) {
        QWidget* widget = gridLayout->itemAtPosition(checkRow, checkCol)->widget();
        Piece* piece = qobject_cast<Piece*>(widget);

        if (piece->getColor() != "none") {
            return false;
        }

        checkRow += rowDirection;
        checkCol += colDirection;
    }

    return true;
}
