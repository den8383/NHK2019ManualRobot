#ifndef LineCommander_H
#define LineCommander_H

#include "LineSensor.h"

class LineCommander{
  public:
  LineCommander(int ,float ,float ,float);
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
  float Angle();
  float Distance();
  float Rotate();
  private:
  int TraceHold;
  float TargetAngle;
  float TargetDistance;
  float TargetRotate;
  float angle;
  float distance;
  float rotate;
  LineSensor *sen;
  
};

#endif
