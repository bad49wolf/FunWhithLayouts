#include "hpp/dialog3.h"

Dialog3::Dialog3(QWidget *parent):QWidget(parent){
createWidgets();
placeWidgets();
}

 void Dialog3::createWidgets(){
   grid_layout = new QGridLayout;
   nums={ "9", "8", "7","6", "5", "4","3", "2", "1", };
   lcd = new QLCDNumber;
   lcd->setSegmentStyle(QLCDNumber::Filled);
}

void Dialog3::placeWidgets(){
    layout = new QVBoxLayout();
    layout->setSpacing(2);
    layout->addWidget(lcd);
    layout->addLayout(grid_layout);
    int pos = 0;
    for (int i=0; i<3; i++) {
     for (int j=0; j<3; j++) {
       auto *button = new QPushButton(nums[pos], this);
       button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
       grid_layout->addWidget(button, i, j);
       pos++;
     }
    }
    auto *button_0 = new QPushButton("0", this);
    auto *button_enter = new QPushButton("enter", this);
    grid_layout->addWidget(button_0, 4, 0);
    grid_layout->addWidget(button_enter, 4, 1,4,2);
    setLayout(layout);
  }






