#ifndef DegSensor_H
#define DegSensor_H
#include "Sensors.h"

class DegSensor{
  
  public:
  DegSensor(){
  }
  
  template<class...Args>
  void SetR(Args...args){
    senR = new Sensors(args...);
  }
  
  template<class...Args>
  void SetL(Args...args){
    senL = new Sensors(args...);
  }
  
  template<class...Args>
  void SetF(Args...args){
    senF = new Sensors(args...);
  }
  
  template<class...Args>
  void SetB(Args...args){
    senB = new Sensors(args...);
  }
  void Trace(int);
  float TraceAng(int);
  float TraceDis(int);
  float DisR();
  float DisL();
  float DisF();
  float DisB();
  void Print();

  private:
  Sensors *senR,*senL,*senF,*senB;
  float r,l,f,b;
};



#endif
