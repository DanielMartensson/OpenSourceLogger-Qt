#ifndef PINMAPWINDOW_H
#define PINMAPWINDOW_H

#include <QWidget>

namespace Ui {
class PinMapWindow;
}

class PinMapWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PinMapWindow(QWidget *parent = nullptr);
    ~PinMapWindow();

private:
    Ui::PinMapWindow *ui;
};

#endif // PINMAPWINDOW_H
