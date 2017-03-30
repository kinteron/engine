#ifndef EDITSCREEN_H
#define EDITSCREEN_H

#include <QMainWindow>

namespace Ui {
class EditScreen;
}

class EditScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditScreen(QWidget *parent = 0);
    ~EditScreen();

private:
    Ui::EditScreen *ui;
};

#endif // EDITSCREEN_H
