#ifndef ROOK_H
#define ROOK_H

#include "piece.h"

class Rook: public Piece
{
public:
    explicit Rook(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");


};

#endif // ROOK_H
