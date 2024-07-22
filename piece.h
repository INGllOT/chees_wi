#ifndef PIECE_H
#define PIECE_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QGridLayout>


class Piece : public QLabel {
    Q_OBJECT

public:
    explicit Piece(int y , int x, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");
    bool isFirstMove;

    // Metody dostępowe do współrzędnych
    int getColumn() const ;
    int getRow() const;

    void setRow(int row);
    void setColumn(int col);
    void setX(int x);
    void setY(int y);
    void setPosition(int row, int col);
    QString getColor() const;
    bool isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece);


signals:
    void clickedPiece(int x, int y); // Sygnał emitowany po kliknięciu piona

protected:
    void mousePressEvent(QMouseEvent *event) override;
    QString color;

private:
    int m_x; // Współrzędna x
    int m_y; // Współrzędna y
};

#endif // PIECE_H
