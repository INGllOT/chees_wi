#ifndef ROOK_H
#define ROOK_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QMouseEvent>

class Rook : public QLabel {
    Q_OBJECT

public:
    explicit Rook(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");

    // Metody dostępowe do współrzędnych
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

signals:
    void clickedRook(int x, int y); // Sygnał emitowany po kliknięciu piona

protected:
    void mousePressEvent(QMouseEvent* event) override;

private:
    int m_x; // Współrzędna x
    int m_y; // Współrzędna y
};

#endif // ROOK_H
