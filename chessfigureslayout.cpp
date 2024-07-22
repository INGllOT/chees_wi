#include <QtWidgets>
#include <QPixmap>
#include <QLabel>
#include "chessfigureslayout.h"
#include "bishop.h"
#include "horse.h"
#include "king.h"
#include "pawn.h"
#include "piece.h"
#include "queen.h"
#include "rook.h"


ChessFiguresLayout::ChessFiguresLayout(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QHBoxLayout *mainLayout = new QHBoxLayout;


    // Ustawienie przycisku z kolejnoscia ruchu gracza
    playerButton_ = new QPushButton("white", this);
    playerButton_->setFlat(true);
    playerButton_->setStyleSheet("font-weight: bold; background-color: lightblue;");
    playerButton_->setFixedSize(180, 40);
    playerButton_->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    playerButton_->setEnabled(false);

    // Dodanie przycisku resetu
    QPushButton *resetButton = new QPushButton("Reset", this);
    resetButton->setFixedSize(100, 40); // Ustawienie rozmiaru przycisku


    // Tworzenie pola planszy szachowej
    //gridLayout = new QGridLayout;

    for(int row = 0; row < 8; ++row) {
        for(int col = 0; col < 8; ++col) {

            // Zmienna przechowująca wskaźnik na pionka
            Piece *piece = nullptr;
            QLabel *square = new QLabel(this);
            square->setFixedSize(60, 60);
            // Ustawienie obrazka pionka na polu planszy
            if(row == 0 && (col == 0 || col == 7)) {
                if((row + col) % 2 == 0) {
                    piece = new Rook(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook.png"), this, "black");
                } else {
                    piece = new Rook(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook.png"), this, "black");
                }
            } else if(row == 0 && (col == 6 || col == 1)) {
                if((row + col) % 2 == 0) {
                    piece = new Horse(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/horse.png"), this, "black");
                } else {
                    piece = new Horse(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/horse.png"), this, "black");
                }
            } else if(row == 0 && (col == 2 || col == 5)) {
                if((row + col) % 2 == 0) {
                    piece = new Bishop(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/bishop.png"), this, "black");
                } else {
                    piece = new Bishop(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/bishop.png"), this, "black");
                }
            } else if(row == 0 && col == 3) {
                if((row + col) % 2 == 0) {
                    piece = new Queen(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/queen.png"), this, "black");
                } else {
                    piece = new Queen(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/queen.png"), this, "black");
                }
            } else if(row == 0 && col == 4) {
                if((row + col) % 2 == 0) {
                    piece = new King(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/king.png"), this, "black");
                } else {
                    piece = new King(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/king.png"), this, "black");
                }
            } else if(row == 1) {
                if((row + col) % 2 == 0) {
                    piece = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/pawn.png"), this, "black");
                } else {
                    piece = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/pawn.png"), this, "black");
                }
            } else if(row == 7 && (col == 6 || col == 1)) {
                if((row + col) % 2 == 0) {
                    piece = new Horse(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/horse1.png"), this, "white");
                } else {
                    piece = new Horse(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/horse1.png"), this, "white");
                }
            } else if(row == 7 && col == 0) {
                if((row + col) % 2 == 0) {
                    piece = new Rook(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook1.png"), this, "white");
                } else {
                    piece = new Rook(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook1.png"), this, "white");
                }
            } else if(row == 7 && col == 7) {
                if((row + col) % 2 == 0) {
                    piece = new Rook(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook1.png"), this, "white");
                } else {
                    piece = new Rook(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook1.png"), this, "white");
                }
            } else if(row == 7 && (col == 2 || col == 5)) {
                if((row + col) % 2 == 0) {
                    piece = new Bishop(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/bishop1.png"), this, "white");
                } else {
                    piece = new Bishop(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/bishop1.png"), this, "white");
                }
            } else if(row == 7 && col == 3) {
                if((row + col) % 2 == 0) {
                    piece = new Queen(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/queen1.png"), this, "white");
                } else {
                    piece = new Queen(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/queen1.png"), this, "white");
                }
            } else if(row == 7 && col == 4) {
                if((row + col) % 2 == 0) {
                    piece = new King(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/king1.png"), this, "white");
                } else {
                    piece = new King(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/king1.png"), this, "white");
                }
            } else if(row == 6) {
                if((row + col) % 2 == 0) {
                    piece = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/pawn1.png"), this, "white");
                } else {
                    piece = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/pawn1.png"), this, "white");
                }
            } else {
                if((row + col) % 2 == 0) {
                    piece = new Piece(row, col, QPixmap(""), this, "none");
                } else {
                    piece = new Piece(row, col, QPixmap(""), this, "none");
                }
            }
            connect(piece, &Piece::clickedPiece, this, &ChessFiguresLayout::onPieceClicked);

            connect(piece, &Piece::clickedPiece, [=](int x, int y){
                // qDebug() << "Hello World! Piece clicked at position: (" << x << ", " << y << ")";
            });

            board.setPiece(row, col, piece); // Add piece to internal board representation
        }
    }

    returnGridLayoutFromBoardMetrix();

    // Tworzenie pól na zbite figury po lewej stronie planszy
    capturedWhiteLeftLayout = new QGridLayout;
    for(int row = 0; row < 8; ++row) {
        for(int col = 0; col < 2; ++col) {
            QLabel *square = new QLabel(this);
            square->setFixedSize(60, 60);

            square->setFixedSize(60, 60); // Ustawienie rozmiaru przycisku
            if((row + col) % 2 == 0) {
                square->setStyleSheet("background-color: white;");
            } else {
                square->setStyleSheet("background-color: gray;");
            }
            capturedWhiteLeftLayout->addWidget(square, row, col);
        }
    }

    // Tworzenie pól na zbite figury po prawej stronie planszy
    capturedBlackRightLayout = new QGridLayout;
    for(int row = 0; row < 8; ++row) {
        for(int col = 0; col < 2; ++col) {
            QLabel *square = new QLabel(this);
            square->setFixedSize(60, 60);
            if((row + col) % 2 == 0) {
                square->setStyleSheet("background-color: white;");
            } else {
                square->setStyleSheet("background-color: gray;");
            }
            capturedBlackRightLayout->addWidget(square, row, col);
        }
    }

    mainLayout->addLayout(capturedWhiteLeftLayout);
    mainLayout->addLayout(gridLayout);
    mainLayout->addLayout(capturedBlackRightLayout);

    layout->addWidget(playerButton_, 0, Qt::AlignCenter);
    layout->addLayout(mainLayout);
    layout->addWidget(resetButton, 0, Qt::AlignCenter);
    setLayout(layout);
}


void ChessFiguresLayout::onPieceClicked(int row, int col) {

    if (!pieceSelected) {
        selectedX = col;
        selectedY = row;
        pieceSelected = true;
        qDebug() << "pieceSelected";

        // Klikniecie na plansze bez pionka, resetuje 'boolean pieceSelected'
        if(qobject_cast<Piece*>(gridLayout->itemAtPosition(selectedY, selectedX)->widget())->getColor() == "none") {
            pieceSelected = false;
            qDebug() << "!pieceSelected <- you clcked on empty field";
        }

    } else  {

        auto movingPiece = qobject_cast<Piece*>(gridLayout->itemAtPosition(selectedY, selectedX)->widget());
        auto destinationPiece = qobject_cast<Piece*>(gridLayout->itemAtPosition(row, col)->widget());

        qDebug() << "Row and column" << selectedY << ", " << selectedX << ")";
        qDebug() << "Row and column" << movingPiece->getRow() << ", " << destinationPiece->getColumn() << ")";

        if(movingPiece->isValidMove(selectedY, selectedX, row , col, destinationPiece, movingPiece)){

        if (movingPiece && movingPiece->getColor() == playerButton_->text()) {
            // Sprawdzanie czy kolej gracza
            qDebug() << "Sprawdzanie czy kolej gracza";

           // board.movePiece(selectedY, selectedX, row, col);

            if(movingPiece->getColor() == destinationPiece->getColor()) {
                // Poruszanie pionkiem w ten sam kolor
                qDebug() << "Poruszanie pionkiem w ten sam kolor";

            } else if(movingPiece->getColor() != "none" && destinationPiece->getColor() == "none") {
                // Poruszanie pionkiem w puste miejsce
                qDebug() << "Poruszanie pionkiem w puste miejsce";

                movingPiece->setPosition(row, col);
                gridLayout->addWidget(movingPiece, row, col);

                destinationPiece->setPosition(selectedY, selectedX);
                gridLayout->addWidget(destinationPiece, selectedY, selectedX);

                update();

            } else if(destinationPiece->getColor() != "none" && movingPiece->getColor() != "none" && movingPiece->getColor() != destinationPiece->getColor()) {
                // Poruszanie pionkiem w miejsce przeciwnego pionka/ koloru
                qDebug() << "kill move";
                capturedBlackRightLayout->addWidget(destinationPiece, 1, 1);

                movingPiece->setPosition(row, col);
                gridLayout->addWidget(movingPiece, row, col);

                destinationPiece->setPosition(selectedY, selectedX);
                destinationPiece->setPixmap(QPixmap(""));
                gridLayout->addWidget(destinationPiece, selectedY, selectedX);

                update();
            }

            if(movingPiece->getColor() == "white") {
                // zmiana kolejnosci koloru po przejsciu ponka
                playerButton_->setText("black");
            } else {
                playerButton_->setText("white");
            }

            playerButton_->update();
        }
 }

        pieceSelected = false;
        qDebug() << "!pieceSelected";

    }
}


QGridLayout* ChessFiguresLayout::returnGridLayoutFromBoardMetrix(){
    gridLayout = new QGridLayout;

    for(int row = 0; row < 8; ++row) {
        for(int col = 0; col < 8; ++col) {

            gridLayout->addWidget(board.piece[row][col], row, col);
        }
    }

    return gridLayout;
}


