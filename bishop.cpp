#include "bishop.h"

Bishop::Bishop(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {
}


bool Bishop::isValidMove(int startXRow, int startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece, QGridLayout *gridLayout) {
    int rowDiff = abs(endXRow - startXRow);
    int colDiff = abs(endYColumn - startYColumn);

    // Czy ruch jest diagonalny
    if (rowDiff != colDiff) {
        return false;
    }

    // Determine the direction of movement
    int rowDirection = (endXRow - startXRow) > 0 ? 1 : -1;
    int colDirection = (endYColumn - startYColumn) > 0 ? 1 : -1;

    // Czy każdy kwadrat wzdłuż ścieżki diagonalnej
    int checkRow = startXRow + rowDirection;
    int checkCol = startYColumn + colDirection;
    while (checkRow != endXRow && checkCol != endYColumn) {

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
