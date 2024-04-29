#ifndef CHESSBOARDWIDGET_H
#define CHESSBOARDWIDGET_H

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

    // Methods for creating the chessboard and captured piece sections
    void createChessBoard();
    void createCapturedPiecesLayouts();
};

#endif // CHESSBOARDWIDGET_H
