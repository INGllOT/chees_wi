#include "king.h"

King::King(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {

}


bool King::isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece)  {
    // Różnica w wierszach i kolumnach
    int rowDiff = abs(endXRow - startXRow);
    int colDiff = abs(endYColumn - startYColumn);

    // Czy ruch obejmuje jedno pole w dowolnym kierunku
    if (rowDiff > 1 || colDiff > 1) {
        return false;
    }

    // Jeśli pole docelowe jest zajęte przez pionek tego samego koloru, ruch jest nieważny
    if (destinationPiece != nullptr && destinationPiece->getColor() == this->getColor()) {
        return false;
    }

    return true;
}
