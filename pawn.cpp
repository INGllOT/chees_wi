#include "pawn.h"

Pawn::Pawn(int x, int y, const QPixmap& pixmap, QWidget* parent, const QString& color)
    : Piece(x, y, pixmap, parent, color) {
}

bool Pawn::isValidMove(int startXRow, int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece, QGridLayout *gridLayout)  {
    int direction = (color == "white") ? 1 : -1; // Determine direction based on pawn color
    int startRow = (color == "white") ? 4 : 3;  // Starting row for initial two-square move
    // qDebug() << "Paw start row/col(" << startXRow << ", " <<   startYColumn <<")";
    // qDebug() << "Paw end row/col(" << endXRow << ", " <<   endYColumn <<")";

    // Pierwszy ruch
    if(isFirstMove == true) {

        if (startRow == endXRow && startYColumn == endYColumn) {

            isFirstMove = false;
            return true;
        }

        if (startRow + 1 == endXRow && startYColumn == endYColumn && this -> getColor() == "white") {

            isFirstMove = false;
            return true;
        }

        if (startRow - 1 == endXRow && startYColumn == endYColumn && this -> getColor() == "black") {

            isFirstMove = false;
            return true;
        }


    } else {
        qDebug() << "Else" ;

        // Kill move
        if(movingPiece->getColor() == "white") {
            //qDebug() << "Capturing move first" << (endXRow == startXRow - 1  && (startYColumn == endYColumn - 1 || startYColumn == endYColumn + 1)) << ", " << (destinationPiece->getColor() == "black") <<")";

            if(endXRow == startXRow - 1  && (startYColumn == endYColumn - 1 || startYColumn == endYColumn + 1) && destinationPiece->getColor() == "black") {
                return true;
            }

        } else if(movingPiece->getColor() == "black") {
            //qDebug() << "Capturing move sec" << ((endXRow == startXRow + 1) && (startYColumn == endYColumn - 1 || startYColumn == endYColumn + 1)) << ", " << (destinationPiece->getColor() == "white") <<")";
            if ((endXRow == startXRow + 1) && (startYColumn == endYColumn - 1 || startYColumn == endYColumn + 1) && destinationPiece->getColor() == "white"){
                return true;
            }
        }

        // Normalny ruch
        //qDebug() << "If (" << ((endXRow == startXRow - 1 && movingPiece->getColor() == "white") && startYColumn == endYColumn) << ", " << (((endXRow == startXRow + 1) && movingPiece->getColor() != "white") && startYColumn == endYColumn) <<")";

        if(movingPiece->getColor() == "white") {
            if(endXRow == startXRow - 1  && startYColumn == endYColumn && destinationPiece->getColor() == "none" ) {
                return true;
            }
        } else {

            if ((endXRow == startXRow + 1) && startYColumn == endYColumn && destinationPiece->getColor() == "none" ){
                return true;
            }
            return false;
        }
    }
    // Zly ruch
    return false;
}
