#include "LineCommander.h"
LineCommander sen = LineCommander(200,0,0,0);




void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  sen.SetL(A1,A4,A0);
  sen.SetR(A2,A6,A3);
  sen.SetF(A8,A9);
  sen.SetB(A10,A11);
  /*
  for(int i = 0; i < 200; i++){
    sen.Print();
    Serial.println();
    delay(50);
  }
  */
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(F("deg"));
  Serial.print(sen.Angle(),4);
  Serial.print(F("    distans"));
  Serial.println(sen.Distance(),4);
  delay(50);
  
//  sen.Print();

}
