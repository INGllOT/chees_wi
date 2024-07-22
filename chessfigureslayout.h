#ifndef CHESSFIGURESLAYOUT_H
#define CHESSFIGURESLAYOUT_H

#include "board.h"
#include <QtWidgets>
#include <QPixmap>
#include <QLabel>

class ChessFiguresLayout : public QWidget{
public:
    ChessFiguresLayout(QWidget *parent = nullptr);

private:
    // Member variables
    QVBoxLayout* layout_;
    QHBoxLayout* mainLayout_;
    QPushButton* playerButton_;
    QPushButton* resetButton_;
    QGridLayout *gridLayout;
    QGridLayout *capturedWhiteLeftLayout;
    QGridLayout *capturedBlackRightLayout;

    int selectedX, selectedY; // To keep track of the selected piece's position
    bool pieceSelected;

    Board board;

    // Methods for creating the chessboard and captured piece sections
    void handleResetButtonClick();
    QGridLayout* returnGridLayoutFromBoardMetrix();
    void onPieceClicked(int row, int col);

};

#endif // CHESSFIGURESLAYOUT_H
