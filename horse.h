#ifndef HORSE_H
#define HORSE_H

#include "piece.h"

class Horse: public Piece
{
public:
    explicit Horse(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");
    virtual  bool isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece);

};

#endif // HORSE_H
