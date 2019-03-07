#ifndef LineSensor_H
#define LineSensor_H

#include "DegSensor.h"

class LineSensor{
  public:
  LineSensor(int);
  
  template<class...Args>
  void SetR(Args...args){
   sen->SetR(args...);
  }
  
  template<class...Args>
  void SetL(Args...args){
   sen->SetL(args...);
  }
  
  template<class...Args>
  void SetF(Args...args){
   sen->SetF(args...);
  }
  
  template<class...Args>
  void SetB(Args...args){
   sen->SetB(args...);
  }

  
  void Trace();
  float Angle();
  float Distance();
  void Print();
  
  private:
  int TraceHold;
  DegSensor  *sen;
};
#endif
