#ifndef GAUSSIANBLUR_H
#define GAUSSIANBLUR_H

#include <qmath.h>
#include <QTextStream>
#include <QImage>
#include <QProgressDialog>
#include <QLabel>


class GaussianBlur
{
private:
    int radius_;
    int size_;
    double diviation_;
    double **matrix_;
    bool values_is_set_;

private:
    double GetNumberOnNormalDistribution(int x, int y, const int center, double sigma) const;
    QRgb** GetPixelMatrix(const QPoint center, const QImage image);
    QRgb GetNewPixelValue(QRgb** matrix);
    QPoint GetCoordinate(const QPoint point, const QSize image_size);
    void NormilizeElementsBySum();

public:
    GaussianBlur(int radius = 1, double sigma = 1.0);
    GaussianBlur(const GaussianBlur &original);
    ~GaussianBlur();

    double GetSumElements() const;
    QImage ApplyGaussianFilterToImage(const QImage input);
    const GaussianBlur &operator = (const GaussianBlur &blur);
    friend QTextStream &operator << (QTextStream &stream, const GaussianBlur &blur);
};

#endif // GAUSSIANBLUR_H
