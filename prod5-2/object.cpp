#include "object.h"
#include <iostream>

int Object::m_objectNum = 0;

int Object::getObjectNum() {
  return m_objectNum;
}

Object::Object() {
  m_objectNum++;
}

Object::~Object() {
  m_objectNum--;
}
