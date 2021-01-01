#ifndef _CDATA_H_
#define _CDATA_H_

#include <string>

using namespace std;

class CData {
  private:
    int number;
    std::string comment;
  public:
    void init();
    void setNum(int number);
    void setCom(string comment);
    int getNum();
    string getCom();
};

#endif