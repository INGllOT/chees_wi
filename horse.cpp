#include "horse.h"

Horse::Horse(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {

}

bool Horse::isValidMove(int startXRow, int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece, QGridLayout *gridLayout)  {
    // Różnica w wierszach i kolumnach
    int rowDiff = abs(endXRow - startXRow);
    int colDiff = abs(endYColumn - startYColumn);

    // Czy ruch jest prawidłowym ruchem w kształcie litery „L”
    if (!((rowDiff == 2 && colDiff == 1) || (rowDiff == 1 && colDiff == 2))) {
        return false;
    }

    return true;
}
