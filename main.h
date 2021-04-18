#include <fstream>
#include <map>
#include <functional>
#include <cstdlib>
using namespace std;

class Control {

};

class Head {
public:
  map<string,string> info;
};

class Body {
public:
  
};

class Root {
  Head* head;
  Body* body;
};

class App {
public:
 string URL = "localhost:8080";
 Root root(){

 }
 string Html(){

 }
};
