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
    explicit Piece(int y , int x, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "", const QString& name = "");
    QString name;
    QString getColor() const;

    int getColumn() const ;
    int getRow() const;

    bool isFirstMove;

    void setRow(int row);
    void setColumn(int col);
    void setX(int x);
    void setY(int y);
    void setPosition(int row, int col);
    void setColor(QString color) const;

    virtual bool isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece);


signals:
    void clickedPiece(int x, int y);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    QString color;


private:
    int m_x;
    int m_y;
};

#endif // PIECE_H
