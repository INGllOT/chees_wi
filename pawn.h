#ifndef PAWN_H
#define PAWN_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QMouseEvent>

class Pawn : public QLabel {
    Q_OBJECT

public:
    explicit Pawn(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");

    // Metody dostępowe do współrzędnych
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void printHello();

signals:
    void clickedPawn(int x, int y); // Sygnał emitowany po kliknięciu piona

protected:
    void mousePressEvent(QMouseEvent* event) override;

private:
    int m_x; // Współrzędna x
    int m_y; // Współrzędna y
};

#endif // PAWN_H
