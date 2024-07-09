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
    explicit Piece(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, QGridLayout* qGridLayout = nullptr, const QString& color = "");

    // Metody dostępowe do współrzędnych
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void setPosition(int row, int col);


signals:
    void clickedPiece(int x, int y); // Sygnał emitowany po kliknięciu piona

protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    int m_x; // Współrzędna x
    int m_y; // Współrzędna y
    QGridLayout* qGridLayout;
};

#endif // PIECE_H
