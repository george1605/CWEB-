#include <fstream>
#include <cstdlib>
using namespace std;

#define RED_BTN "background:color:red;border:0px solid black;"

#define SBUTTON "<button>"
#define EBUTTON "</button>"

class Style {
public:
  string value = "";
  Style(){
    
  }
  Style(string k){
    
  }
  ~Style(){ value = ""; }
};

class Control {
public:
  string code;
  Style style;
};

class Button : public Control {
  
}

class App {
 public:
  void Add(Control k){
    
  }
};
