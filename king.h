#ifndef KING_H
#define KING_H

#include "piece.h"
class King : public Piece
{
public:
    explicit King(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");

};

#endif // KING_H
