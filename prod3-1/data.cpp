#include "data.h"

void CData::init() 
{
  number = 0;
  comment = "";
};

void CData::setNum(int num) {
  number = num;
};

void CData::setCom(string com) {
  comment = com;
};

int CData::getNum() {
  return number;
};

string CData::getCom() {
  return comment;
}
