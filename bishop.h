#ifndef BISHOP_H
#define BISHOP_H

#include "piece.h"

class Bishop: public Piece
{
public:
    explicit Bishop(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");
    virtual  bool isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece, QGridLayout *gridLayout);

};

#endif // BISHOP_H
