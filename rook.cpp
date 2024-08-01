#include "rook.h"

Rook::Rook(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {

}

bool Rook::isValidMove(int startXRow, int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece, QGridLayout *gridLayout)  {

    int rowDirection = (endXRow - startXRow) != 0 ? (endXRow - startXRow) / abs(endXRow - startXRow) : 0;
    int colDirection = (endYColumn - startYColumn) != 0 ? (endYColumn - startYColumn) / abs(endYColumn - startYColumn) : 0;

    // Sprawdź każdy kwadrat wzdłuż ścieżki
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

    if (startXRow != endXRow && startYColumn != endYColumn) {
        return false;
    }

    return true;
}
