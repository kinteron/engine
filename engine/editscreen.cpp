#include "editscreen.h"
#include "ui_editscreen.h"

EditScreen::EditScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditScreen)
{
    ui->setupUi(this);
}

EditScreen::~EditScreen()
{
    delete ui;
}
