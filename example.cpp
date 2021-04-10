#include "main.h"


int main(){
  App k("base.html");
  Button p;
  p.text = "b1";
  p.style = Style(RED_BTN);
  k.Add(p);
  k.Show();
}
