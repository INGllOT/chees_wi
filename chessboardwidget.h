#ifndef CHESSBOARDWIDGET_H
#define CHESSBOARDWIDGET_H

#include "board.h"
#include <QtWidgets>
#include <QPixmap>
#include <QLabel>

class ChessBoardWidget : public QWidget {
public:
    ChessBoardWidget(QWidget *parent = nullptr);

private:
    // Member variables
    QVBoxLayout* layout_;
    QHBoxLayout* mainLayout_;
    QPushButton* playerButton_;
    QPushButton* resetButton_;
    QGridLayout *gridLayout;
    int selectedX, selectedY; // To keep track of the selected piece's position
    bool pieceSelected;

    Board board;

    // Methods for creating the chessboard and captured piece sections
    QGridLayout* returnGridLayoutFromBoardMetrix();
};

#endif // CHESSBOARDWIDGET_H
