int value;
int ledPinA1 = 2;
int ledPinA2 = 3;
int ledPinA3 = 4;

int ledPinB1 = 5;
int ledPinB2 = 6;
int ledPinB3 = 7;

int ledPinC1 = 8;
int ledPinC2 = 9;
int ledPinC3 = 10;

int ledPinD1 = 11;
int ledPinD2 = 12;
int ledPinD3 = 13;

int i;

const int IR1 = 22;
const int IR2 = 23;
const int IR3 = 24;

const int IR4 = 25;
const int IR5 = 26;
const int IR6 = 27;

const int IR7 = 32;
const int IR8 = 33;
const int IR9 = 34;

const int IR10 = 47;
const int IR11 = 48;
const int IR12 = 49;

const int IR13 = 50;
const int IR14 = 51;
const int IR15 = 52;
const int IR16 = 53;
void setup() {
  // put your setup code here, to run once:

pinMode (IR1, INPUT);
pinMode (IR2, INPUT);
pinMode (IR3, INPUT);
pinMode (IR4, INPUT);
pinMode (IR5, INPUT);
pinMode (IR6, INPUT);
pinMode (IR7, INPUT);
pinMode (IR8, INPUT);
pinMode (IR9, INPUT);
pinMode (IR10, INPUT);
pinMode (IR11, INPUT);
pinMode (IR12, INPUT);
pinMode (IR13, INPUT);
pinMode (IR14, INPUT);
pinMode (IR15, INPUT);
pinMode (IR16, INPUT);

pinMode (ledPinA1,OUTPUT);
pinMode (ledPinA2,OUTPUT);
pinMode (ledPinA3,OUTPUT);

pinMode (ledPinB1,OUTPUT);
pinMode (ledPinB2,OUTPUT);
pinMode (ledPinB3,OUTPUT);

pinMode (ledPinC1,OUTPUT);
pinMode (ledPinC2,OUTPUT);
pinMode (ledPinC3,OUTPUT);

pinMode (ledPinD1,OUTPUT);
pinMode (ledPinD2,OUTPUT);
pinMode (ledPinD3,OUTPUT);



/*for(i=0;i<2;i++){
  
  digitalWrite(ledPinB3,HIGH);
  digitalWrite(ledPinC3,HIGH);
  digitalWrite(ledPinD3,HIGH);
  digitalWrite(ledPinA1,HIGH);
  delay(10000);
  digitalWrite(ledPinA1,LOW);
  digitalWrite(ledPinB3,LOW);
  digitalWrite(ledPinA2,HIGH);
  digitalWrite(ledPinB2,HIGH);
  delay(5000);
  digitalWrite(ledPinA2,LOW);
  digitalWrite(ledPinB2,LOW);
  digitalWrite(ledPinC3,LOW);
  digitalWrite(ledPinD3,LOW);
  

  digitalWrite(ledPinA3,HIGH);
  digitalWrite(ledPinC3,HIGH);
  digitalWrite(ledPinD3,HIGH);
  digitalWrite(ledPinB1,HIGH);
  delay(10000);
  digitalWrite(ledPinB1,LOW);
  digitalWrite(ledPinC3,LOW);
  digitalWrite(ledPinB2,HIGH);
  digitalWrite(ledPinC2,HIGH);
  delay(5000);
  digitalWrite(ledPinB2,LOW);
  digitalWrite(ledPinC2,LOW);
  digitalWrite(ledPinA3,LOW);
  digitalWrite(ledPinD3,LOW);


  digitalWrite(ledPinB3,HIGH);
  digitalWrite(ledPinA3,HIGH);
  digitalWrite(ledPinD3,HIGH);
  digitalWrite(ledPinC1,HIGH);
  delay(10000);
  digitalWrite(ledPinC1,LOW);
  digitalWrite(ledPinD3,LOW);
  digitalWrite(ledPinC2,HIGH);
  digitalWrite(ledPinD2,HIGH);
  delay(5000);
  digitalWrite(ledPinC2,LOW);
  digitalWrite(ledPinD2,LOW);
  digitalWrite(ledPinB3,LOW);
  digitalWrite(ledPinA3,LOW);

  
  digitalWrite(ledPinB3,HIGH);
  digitalWrite(ledPinC3,HIGH);
  digitalWrite(ledPinA3,HIGH);
  digitalWrite(ledPinD1,HIGH);
  delay(10000);
  digitalWrite(ledPinD1,LOW);
  digitalWrite(ledPinA3,LOW);
  digitalWrite(ledPinD2,HIGH);
  digitalWrite(ledPinA2,HIGH);
  delay(5000);
  digitalWrite(ledPinD2,LOW);
  digitalWrite(ledPinA2,LOW);
  digitalWrite(ledPinB3,LOW);
  digitalWrite(ledPinC3,LOW);
  
}*/
Serial.begin(9600);
}

void loop() {
  int j,k,l,m,n;
  int sum1=0;
  int sum2=0;
  int sum3=0;
  int sum4=0;
  int Z1 = digitalRead(IR1);
  int Z2 = digitalRead(IR2);
  int Z3 = digitalRead(IR3);
  int Z4 = digitalRead(IR4);
  int Z5 = digitalRead(IR5);
  int Z6 = digitalRead(IR6);
  int Z7 = digitalRead(IR7);
  int Z8 = digitalRead(IR8);
  int Z9 = digitalRead(IR9);
  int Z10 = digitalRead(IR10);
  int Z11 = digitalRead(IR11);
  int Z12 = digitalRead(IR12);
  int Z13 = digitalRead(IR13);
  int Z14 = digitalRead(IR14);
  int Z15 = digitalRead(IR15);
  int Z16 = digitalRead(IR16);

  
  if(Z1 < 1){
    sum1 = sum1+1;
    if(Z2 < 1){
      sum1 = sum1+1;
      if(Z3< 1){
        sum1 = sum1+1;
      }
    }
  }
  Serial.println(sum1);

  if(Z4 < 1){
    sum2 = sum2+1;
    if(Z5 < 1){
      sum2 = sum2+1;
      if(Z6 < 1){
        sum2 = sum2+1;
      }
    }
  }
  Serial.println(sum2);

  if(Z7< 1){
    sum3 = sum3+1;
    if(Z8 < 1){
      sum3 = sum3+1;
      if(Z9 < 1){
        sum3 = sum3+1;
      }
    }
  }
  Serial.println(sum3);

  if(Z10 < 1){
    sum4 = sum4+1;
    if(Z11 < 1){
      sum4 = sum4+1;
      if(Z12 < 1){
        sum4 = sum4+1;
      }
    }
  }
  Serial.println(sum4);

  if(sum1>=sum2 && sum1>=sum3 && sum1>=sum4){
      digitalWrite(ledPinB3,HIGH);
      digitalWrite(ledPinC3,HIGH);
      digitalWrite(ledPinD3,HIGH);
      digitalWrite(ledPinA1,HIGH);
      delay(15000);
      digitalWrite(ledPinA1,LOW);

      if(sum2>=sum3 && sum2>=sum4){
        digitalWrite(ledPinB3,LOW);
      }
      else if(sum3>=sum2 && sum3>=sum4){
        digitalWrite(ledPinC3,LOW);
      }
      else if(sum4>=sum2 && sum4>=sum3){
        digitalWrite(ledPinD3,LOW);
      }
          
          digitalWrite(ledPinA2,HIGH);
          if(sum2>=sum3 && sum2>=sum4){
            digitalWrite(ledPinB2,HIGH);
          }
          else if(sum3>=sum2 && sum3>=sum4){
            digitalWrite(ledPinC2,HIGH);
          }
          else if(sum4>=sum2 && sum4>=sum3){
            digitalWrite(ledPinD2,HIGH);
          }
          delay(5000);
          digitalWrite(ledPinA2,LOW);
          if(sum2>=sum3 && sum2>=sum4){
            digitalWrite(ledPinB2,LOW);
          }
          else if(sum3>=sum2 && sum3>=sum4){
            digitalWrite(ledPinC2,LOW);
          }
          else if(sum4>=sum2 && sum4>=sum3){
            digitalWrite(ledPinD2,LOW);
          }
          digitalWrite(ledPinB3,LOW);
          digitalWrite(ledPinC3,LOW);
          digitalWrite(ledPinD3,LOW);

          if(sum2>=sum3 && sum2>=sum4){
            digitalWrite(ledPinA3,HIGH);
            digitalWrite(ledPinC3,HIGH);
            digitalWrite(ledPinD3,HIGH);
            digitalWrite(ledPinB1,HIGH);
            delay(10000);
            digitalWrite(ledPinB1,LOW);

            if(sum3>=sum4){
              digitalWrite(ledPinC3,LOW);
            }
            else if(sum4>=sum3){
              digitalWrite(ledPinD3,LOW);
            }
            
            digitalWrite(ledPinB2,HIGH);
            if(sum3>=sum4){
              digitalWrite(ledPinC2,HIGH);
            }
            else if(sum4>=sum3){
              digitalWrite(ledPinD2,HIGH);
            }
            delay(5000);
            digitalWrite(ledPinB2,LOW);
            if(sum3>=sum4){
              digitalWrite(ledPinC2,LOW);
            }
            else if(sum4>=sum3){
              digitalWrite(ledPinD2,LOW);
            }
            digitalWrite(ledPinA3,LOW);
            digitalWrite(ledPinC3,LOW);
            digitalWrite(ledPinD3,LOW);
            if(sum3>=sum4){
              
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinC1,HIGH);
              delay(5000);
              digitalWrite(ledPinC1,LOW);
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinC2,HIGH);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinC2,LOW);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinA3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);
            }
            else if(sum4>=sum3){
              
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinD2,HIGH);
              digitalWrite(ledPinC2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinC2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinC1,HIGH);
              delay(5000);
              digitalWrite(ledPinC1,LOW);
              digitalWrite(ledPinC2,HIGH);
              delay(5000);
              digitalWrite(ledPinC2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinD3,LOW);
            }
            
          }
          else if(sum3>=sum2 && sum3>=sum4){
             digitalWrite(ledPinB3,HIGH);
             digitalWrite(ledPinA3,HIGH);
             digitalWrite(ledPinD3,HIGH);
             digitalWrite(ledPinC1,HIGH);
             delay(10000);
             digitalWrite(ledPinC1,LOW);

             if(sum2>=sum4){
              digitalWrite(ledPinB3,LOW);
             }
             else if(sum4>=sum2){
              digitalWrite(ledPinD3,LOW);
             }
             
             digitalWrite(ledPinC2,HIGH);
             if(sum2>=sum4){
              digitalWrite(ledPinB2,HIGH);
             }
             else if(sum4>=sum2){
              digitalWrite(ledPinD2,HIGH);
             }
             delay(5000);
             digitalWrite(ledPinC2,LOW);
             if(sum2>=sum4){
              digitalWrite(ledPinB2,LOW);
             }
             else if(sum4>=sum2){
              digitalWrite(ledPinD2,LOW);
             }
             digitalWrite(ledPinB3,LOW);
             digitalWrite(ledPinA3,LOW);
             digitalWrite(ledPinD3,LOW);
             
             if(sum2>=sum4){
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinB1,HIGH);
              delay(5000);
              digitalWrite(ledPinB1,LOW);
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinB2,HIGH);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinB2,LOW);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);
             }
             else if(sum4>=sum2){
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinD2,HIGH);
              digitalWrite(ledPinB2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinB2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinB1,HIGH);
              delay(5000);
              digitalWrite(ledPinB1,LOW);
              digitalWrite(ledPinB2,HIGH);
              delay(5000);
              digitalWrite(ledPinB2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinC3,LOW);
              digitalWrite(ledPinD3,LOW);
             }
          }
          else if(sum4>=sum2 && sum4>=sum3){
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(10000);
              digitalWrite(ledPinD1,LOW);

              if(sum2>=sum3){ 
                digitalWrite(ledPinB3,LOW);
              }
              else if(sum3>=sum2){
                digitalWrite(ledPinC3,LOW);
              }
              
              digitalWrite(ledPinD2,HIGH);
              if(sum2>=sum3){ 
                digitalWrite(ledPinB2,HIGH);
              }
              else if(sum3>=sum2){
                digitalWrite(ledPinC2,HIGH);
              }
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              if(sum2>=sum3){ 
                digitalWrite(ledPinB2,LOW);
              }
              else if(sum3>=sum2){
                digitalWrite(ledPinC2,LOW);
              }
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinC3,LOW);

              if(sum2>=sum3){
                
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinB1,HIGH);
                delay(5000);
                digitalWrite(ledPinB1,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinB2,HIGH);
                digitalWrite(ledPinC2,HIGH);
                delay(5000);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinC1,HIGH);
                delay(5000);
                digitalWrite(ledPinC1,LOW);
                digitalWrite(ledPinC2,HIGH);
                delay(5000);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
              else if(sum3>=sum2){
                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinC1,HIGH);
                delay(5000);
                digitalWrite(ledPinC1,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinC2,HIGH);
                digitalWrite(ledPinB2,HIGH);
                delay(5000);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinB1,HIGH);
                delay(5000);
                digitalWrite(ledPinB1,LOW);
                digitalWrite(ledPinB2,HIGH);
                delay(5000);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
          }
          
    }
    else if(sum2>=sum1 && sum2>=sum3 && sum2>=sum4){

      digitalWrite(ledPinA3,HIGH);
      digitalWrite(ledPinC3,HIGH);
      digitalWrite(ledPinD3,HIGH);
      digitalWrite(ledPinB1,HIGH);
      delay(15000);
      digitalWrite(ledPinB1,LOW);

      if(sum1>=sum3 && sum1>=sum4){
        digitalWrite(ledPinA3,LOW);
      }
      else if(sum3>=sum1 && sum3>=sum4){
        digitalWrite(ledPinC3,LOW);
      }
      else if(sum4>=sum1 && sum4>=sum3){
        digitalWrite(ledPinD3,LOW);
      }
          
          digitalWrite(ledPinB2,HIGH);
          if(sum1>=sum3 && sum1>=sum4){
            digitalWrite(ledPinA2,HIGH);
          }
          else if(sum3>=sum1 && sum3>=sum4){
            digitalWrite(ledPinC2,HIGH);
          }
          else if(sum4>=sum1 && sum4>=sum3){
            digitalWrite(ledPinD2,HIGH);
          }
          delay(5000);
          digitalWrite(ledPinB2,LOW);
          if(sum1>=sum3 && sum1>=sum4){
            digitalWrite(ledPinA2,LOW);
          }
          else if(sum3>=sum1 && sum3>=sum4){
            digitalWrite(ledPinC2,LOW);
          }
          else if(sum4>=sum1 && sum4>=sum3){
            digitalWrite(ledPinD2,LOW);
          }
          digitalWrite(ledPinA3,LOW);
          digitalWrite(ledPinC3,LOW);
          digitalWrite(ledPinD3,LOW);

          if(sum1>=sum3 && sum1>=sum4){
            digitalWrite(ledPinB3,HIGH);
            digitalWrite(ledPinC3,HIGH);
            digitalWrite(ledPinD3,HIGH);
            digitalWrite(ledPinA1,HIGH);
            delay(10000);
            digitalWrite(ledPinA1,LOW);

            if(sum3>=sum4){
              digitalWrite(ledPinC3,LOW);
            }
            else if(sum4>=sum3){
              digitalWrite(ledPinD3,LOW);
            }
            
            digitalWrite(ledPinA2,HIGH);
            if(sum3>=sum4){
              digitalWrite(ledPinC2,HIGH);
            }
            else if(sum4>=sum3){
              digitalWrite(ledPinD2,HIGH);
            }
            delay(5000);
            digitalWrite(ledPinA2,LOW);
            if(sum3>=sum4){
              digitalWrite(ledPinC2,LOW);
            }
            else if(sum4>=sum3){
              digitalWrite(ledPinD2,LOW);
            }
            digitalWrite(ledPinB3,LOW);
            digitalWrite(ledPinC3,LOW);
            digitalWrite(ledPinD3,LOW);
            if(sum3>=sum4){
              
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinC1,HIGH);
              delay(5000);
              digitalWrite(ledPinC1,LOW);
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinC2,HIGH);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinC2,LOW);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinA3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);
            }
            else if(sum4>=sum3){
              
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinD2,HIGH);
              digitalWrite(ledPinC2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinC2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinC1,HIGH);
              delay(5000);
              digitalWrite(ledPinC1,LOW);
              digitalWrite(ledPinC2,HIGH);
              delay(5000);
              digitalWrite(ledPinC2,LOW);
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinA3,LOW);
            }
          }
          else if(sum3>=sum1 && sum3>=sum4){
             digitalWrite(ledPinB3,HIGH);
             digitalWrite(ledPinA3,HIGH);
             digitalWrite(ledPinD3,HIGH);
             digitalWrite(ledPinC1,HIGH);
             delay(10000);
             digitalWrite(ledPinC1,LOW);

             if(sum1>=sum4){
              digitalWrite(ledPinA3,LOW);
             }
             else if(sum4>=sum1){
              digitalWrite(ledPinD3,LOW);
             }
             
             digitalWrite(ledPinC2,HIGH);
             if(sum1>=sum4){
              digitalWrite(ledPinA2,HIGH);
             }
             else if(sum4>=sum1){
              digitalWrite(ledPinD2,HIGH);
             }
             delay(5000);
             digitalWrite(ledPinC2,LOW);
             if(sum1>=sum4){
              digitalWrite(ledPinA2,LOW);
             }
             else if(sum4>=sum1){
              digitalWrite(ledPinD2,LOW);
             }
             digitalWrite(ledPinB3,LOW);
             digitalWrite(ledPinA3,LOW);
             digitalWrite(ledPinD3,LOW);
             
             if(sum1>=sum4){
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinA1,HIGH);
              delay(5000);
              digitalWrite(ledPinA1,LOW);
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinA2,HIGH);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinA2,LOW);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);
             }
             else if(sum4>=sum1){
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinD2,HIGH);
              digitalWrite(ledPinA2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinA1,HIGH);
              delay(5000);
              digitalWrite(ledPinA1,LOW);
              digitalWrite(ledPinA2,HIGH);
              delay(5000);
              digitalWrite(ledPinA2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);
              digitalWrite(ledPinD3,LOW);
             }
          }
          else if(sum4>=sum1 && sum4>=sum3){
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(10000);
              digitalWrite(ledPinD1,LOW);

              if(sum1>=sum3){ 
                digitalWrite(ledPinA3,LOW);
              }
              else if(sum3>=sum1){
                digitalWrite(ledPinC3,LOW);
              }
              
              digitalWrite(ledPinD2,HIGH);
              if(sum1>=sum3){ 
                digitalWrite(ledPinA2,HIGH);
              }
              else if(sum3>=sum1){
                digitalWrite(ledPinC2,HIGH);
              }
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              if(sum1>=sum3){ 
                digitalWrite(ledPinA2,LOW);
              }
              else if(sum3>=sum1){
                digitalWrite(ledPinC2,LOW);
              }
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinC3,LOW);

              if(sum1>=sum3){
                
                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinA1,HIGH);
                delay(5000);
                digitalWrite(ledPinA1,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinA2,HIGH);
                digitalWrite(ledPinC2,HIGH);
                delay(5000);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinC1,HIGH);
                delay(5000);
                digitalWrite(ledPinC1,LOW);
                digitalWrite(ledPinC2,HIGH);
                delay(5000);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
              else if(sum3>=sum1){
                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinC1,HIGH);
                delay(5000);
                digitalWrite(ledPinC1,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinC2,HIGH);
                digitalWrite(ledPinA2,HIGH);
                delay(5000);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinA1,HIGH);
                delay(5000);
                digitalWrite(ledPinA1,LOW);
                digitalWrite(ledPinA2,HIGH);
                delay(5000);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
          }
    }

    else if(sum3>=sum1 && sum3>=sum2 && sum3>=sum4){

      digitalWrite(ledPinA3,HIGH);
      digitalWrite(ledPinB3,HIGH);
      digitalWrite(ledPinD3,HIGH);
      digitalWrite(ledPinC1,HIGH);
      delay(15000);
      digitalWrite(ledPinC1,LOW);

      if(sum1>=sum2 && sum1>=sum4){
        digitalWrite(ledPinA3,LOW);
      }
      else if(sum2>=sum1 && sum2>=sum4){
        digitalWrite(ledPinB3,LOW);
      }
      else if(sum4>=sum1 && sum4>=sum2){
        digitalWrite(ledPinD3,LOW);
      }
          
          digitalWrite(ledPinC2,HIGH);
          if(sum1>=sum2 && sum1>=sum4){
            digitalWrite(ledPinA2,HIGH);
          }
          else if(sum2>=sum1 && sum2>=sum4){
            digitalWrite(ledPinB2,HIGH);
          }
          else if(sum4>=sum1 && sum4>=sum2){
            digitalWrite(ledPinD2,HIGH);
          }
          delay(5000);
          digitalWrite(ledPinC2,LOW);
          if(sum1>=sum2 && sum1>=sum4){
            digitalWrite(ledPinA2,LOW);
          }
          else if(sum2>=sum1 && sum2>=sum4){
            digitalWrite(ledPinB2,LOW);
          }
          else if(sum4>=sum1 && sum4>=sum2){
            digitalWrite(ledPinD2,LOW);
          }
          digitalWrite(ledPinA3,LOW);
          digitalWrite(ledPinB3,LOW);
          digitalWrite(ledPinD3,LOW);

          if(sum1>=sum2 && sum1>=sum4){
            digitalWrite(ledPinB3,HIGH);
            digitalWrite(ledPinC3,HIGH);
            digitalWrite(ledPinD3,HIGH);
            digitalWrite(ledPinA1,HIGH);
            delay(10000);
            digitalWrite(ledPinA1,LOW);

            if(sum2>=sum4){
              digitalWrite(ledPinB3,LOW);
            }
            else if(sum4>=sum2){
              digitalWrite(ledPinD3,LOW);
            }
            
            digitalWrite(ledPinA2,HIGH);
            if(sum2>=sum4){
              digitalWrite(ledPinB2,HIGH);
            }
            else if(sum4>=sum2){
              digitalWrite(ledPinD2,HIGH);
            }
            delay(5000);
            digitalWrite(ledPinA2,LOW);
            if(sum2>=sum4){
              digitalWrite(ledPinB2,LOW);
            }
            else if(sum4>=sum2){
              digitalWrite(ledPinD2,LOW);
            }
            digitalWrite(ledPinB3,LOW);
            digitalWrite(ledPinC3,LOW);
            digitalWrite(ledPinD3,LOW);
            if(sum2>=sum4){
              
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinB1,HIGH);
              delay(5000);
              digitalWrite(ledPinB1,LOW);
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinB2,HIGH);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinB2,LOW);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinC3,LOW);
              digitalWrite(ledPinA3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);
            }
            else if(sum4>=sum2){
              
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinD2,HIGH);
              digitalWrite(ledPinB2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinB2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinB1,HIGH);
              delay(5000);
              digitalWrite(ledPinB1,LOW);
              digitalWrite(ledPinB2,HIGH);
              delay(5000);
              digitalWrite(ledPinB2,LOW);
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinC3,LOW);
              digitalWrite(ledPinA3,LOW);
            }
          }
          else if(sum2>=sum1 && sum2>=sum4){
             digitalWrite(ledPinC3,HIGH);
             digitalWrite(ledPinA3,HIGH);
             digitalWrite(ledPinD3,HIGH);
             digitalWrite(ledPinB1,HIGH);
             delay(10000);
             digitalWrite(ledPinB1,LOW);

             if(sum1>=sum4){
              digitalWrite(ledPinA3,LOW);
             }
             else if(sum4>=sum1){
              digitalWrite(ledPinD3,LOW);
             }
             
             digitalWrite(ledPinB2,HIGH);
             if(sum1>=sum4){
              digitalWrite(ledPinA2,HIGH);
             }
             else if(sum4>=sum1){
              digitalWrite(ledPinD2,HIGH);
             }
             delay(5000);
             digitalWrite(ledPinB2,LOW);
             if(sum1>=sum4){
              digitalWrite(ledPinA2,LOW);
             }
             else if(sum4>=sum1){
              digitalWrite(ledPinD2,LOW);
             }
             digitalWrite(ledPinC3,LOW);
             digitalWrite(ledPinA3,LOW);
             digitalWrite(ledPinD3,LOW);
             
             if(sum1>=sum4){
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinA1,HIGH);
              delay(5000);
              digitalWrite(ledPinA1,LOW);
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinA2,HIGH);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinA2,LOW);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinD2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);
             }
             else if(sum4>=sum1){
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(5000);
              digitalWrite(ledPinD1,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinD2,HIGH);
              digitalWrite(ledPinA2,HIGH);
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              digitalWrite(ledPinA2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);

              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinA1,HIGH);
              delay(5000);
              digitalWrite(ledPinA1,LOW);
              digitalWrite(ledPinA2,HIGH);
              delay(5000);
              digitalWrite(ledPinA2,LOW);
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinC3,LOW);
              digitalWrite(ledPinD3,LOW);
             }
          }
          else if(sum4>=sum1 && sum4>=sum2){
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinD1,HIGH);
              delay(10000);
              digitalWrite(ledPinD1,LOW);

              if(sum1>=sum2){ 
                digitalWrite(ledPinA3,LOW);
              }
              else if(sum2>=sum1){
                digitalWrite(ledPinB3,LOW);
              }
              
              digitalWrite(ledPinD2,HIGH);
              if(sum1>=sum2){ 
                digitalWrite(ledPinA2,HIGH);
              }
              else if(sum2>=sum1){
                digitalWrite(ledPinB2,HIGH);
              }
              delay(5000);
              digitalWrite(ledPinD2,LOW);
              if(sum1>=sum2){ 
                digitalWrite(ledPinA2,LOW);
              }
              else if(sum2>=sum1){
                digitalWrite(ledPinB2,LOW);
              }
              digitalWrite(ledPinB3,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinC3,LOW);

              if(sum1>=sum2){
                
                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinA1,HIGH);
                delay(5000);
                digitalWrite(ledPinA1,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinA2,HIGH);
                digitalWrite(ledPinB2,HIGH);
                delay(5000);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinB1,HIGH);
                delay(5000);
                digitalWrite(ledPinB1,LOW);
                digitalWrite(ledPinB2,HIGH);
                delay(5000);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
              else if(sum2>=sum1){
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinB1,HIGH);
                delay(5000);
                digitalWrite(ledPinB1,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinB2,HIGH);
                digitalWrite(ledPinA2,HIGH);
                delay(5000);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinA1,HIGH);
                delay(5000);
                digitalWrite(ledPinA1,LOW);
                digitalWrite(ledPinA2,HIGH);
                delay(5000);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
          }
    }

    else if(sum4>=sum1 && sum4>=sum2 && sum4>=sum3){

      digitalWrite(ledPinA3,HIGH);
      digitalWrite(ledPinB3,HIGH);
      digitalWrite(ledPinC3,HIGH);
      digitalWrite(ledPinD1,HIGH);
      delay(15000);
      digitalWrite(ledPinD1,LOW);

      if(sum1>=sum2 && sum1>=sum3){
        digitalWrite(ledPinA3,LOW);
      }
      else if(sum2>=sum1 && sum2>=sum3){
        digitalWrite(ledPinB3,LOW);
      }
      else if(sum3>=sum1 && sum3>=sum2){
        digitalWrite(ledPinC3,LOW);
      }
          
          digitalWrite(ledPinD2,HIGH);
          if(sum1>=sum2 && sum1>=sum3){
            digitalWrite(ledPinA2,HIGH);
          }
          else if(sum2>=sum1 && sum2>=sum3){
            digitalWrite(ledPinB2,HIGH);
          }
          else if(sum3>=sum1 && sum3>=sum2){
            digitalWrite(ledPinC2,HIGH);
          }
          delay(5000);
          digitalWrite(ledPinD2,LOW);
          if(sum1>=sum2 && sum1>=sum3){
            digitalWrite(ledPinA2,LOW);
          }
          else if(sum2>=sum1 && sum2>=sum3){
            digitalWrite(ledPinB2,LOW);
          }
          else if(sum3>=sum1 && sum3>=sum2){
            digitalWrite(ledPinC2,LOW);
          }
          digitalWrite(ledPinA3,LOW);
          digitalWrite(ledPinB3,LOW);
          digitalWrite(ledPinC3,LOW);

          if(sum1>=sum2 && sum1>=sum3){
            digitalWrite(ledPinB3,HIGH);
            digitalWrite(ledPinC3,HIGH);
            digitalWrite(ledPinD3,HIGH);
            digitalWrite(ledPinA1,HIGH);
            delay(10000);
            digitalWrite(ledPinA1,LOW);

            if(sum2>=sum3){
              digitalWrite(ledPinB3,LOW);
            }
            else if(sum3>=sum2){
              digitalWrite(ledPinC3,LOW);
            }
            
            digitalWrite(ledPinA2,HIGH);
            if(sum2>=sum3){
              digitalWrite(ledPinB2,HIGH);
            }
            else if(sum3>=sum2){
              digitalWrite(ledPinC2,HIGH);
            }
            delay(5000);
            digitalWrite(ledPinA2,LOW);
            if(sum2>=sum3){
              digitalWrite(ledPinB2,LOW);
            }
            else if(sum3>=sum2){
              digitalWrite(ledPinC2,LOW);
            }
            digitalWrite(ledPinB3,LOW);
            digitalWrite(ledPinC3,LOW);
            digitalWrite(ledPinD3,LOW);

            if(sum2>=sum3){
                
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinB1,HIGH);
                delay(5000);
                digitalWrite(ledPinB1,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinB2,HIGH);
                digitalWrite(ledPinC2,HIGH);
                delay(5000);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinC1,HIGH);
                delay(5000);
                digitalWrite(ledPinC1,LOW);
                digitalWrite(ledPinC2,HIGH);
                delay(5000);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
              else if(sum3>=sum2){
                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinC1,HIGH);
                delay(5000);
                digitalWrite(ledPinC1,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinC2,HIGH);
                digitalWrite(ledPinB2,HIGH);
                delay(5000);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinB1,HIGH);
                delay(5000);
                digitalWrite(ledPinB1,LOW);
                digitalWrite(ledPinB2,HIGH);
                delay(5000);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
          }
          else if(sum2>=sum1 && sum2>=sum3){
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinC3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinB1,HIGH);
              delay(10000);
              digitalWrite(ledPinB1,LOW);

              if(sum1>=sum3){ 
                digitalWrite(ledPinA3,LOW);
              }
              else if(sum3>=sum1){
                digitalWrite(ledPinC3,LOW);
              }
              
              digitalWrite(ledPinB2,HIGH);
              if(sum1>=sum3){ 
                digitalWrite(ledPinA2,HIGH);
              }
              else if(sum3>=sum1){
                digitalWrite(ledPinC2,HIGH);
              }
              delay(5000);
              digitalWrite(ledPinB2,LOW);
              if(sum1>=sum3){ 
                digitalWrite(ledPinA2,LOW);
              }
              else if(sum3>=sum1){
                digitalWrite(ledPinC2,LOW);
              }
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinC3,LOW);

              if(sum1>=sum3){
                
                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinA1,HIGH);
                delay(5000);
                digitalWrite(ledPinA1,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinA2,HIGH);
                digitalWrite(ledPinC2,HIGH);
                delay(5000);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinC1,HIGH);
                delay(5000);
                digitalWrite(ledPinC1,LOW);
                digitalWrite(ledPinC2,HIGH);
                delay(5000);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
              else if(sum3>=sum1){
                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinC1,HIGH);
                delay(5000);
                digitalWrite(ledPinC1,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinC2,HIGH);
                digitalWrite(ledPinA2,HIGH);
                delay(5000);
                digitalWrite(ledPinC2,LOW);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinA1,HIGH);
                delay(5000);
                digitalWrite(ledPinA1,LOW);
                digitalWrite(ledPinA2,HIGH);
                delay(5000);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
          }
          else if(sum3>=sum1 && sum3>=sum2){
              digitalWrite(ledPinD3,HIGH);
              digitalWrite(ledPinB3,HIGH);
              digitalWrite(ledPinA3,HIGH);
              digitalWrite(ledPinC1,HIGH);
              delay(10000);
              digitalWrite(ledPinC1,LOW);

              if(sum1>=sum2){ 
                digitalWrite(ledPinA3,LOW);
              }
              else if(sum2>=sum1){
                digitalWrite(ledPinB3,LOW);
              }
              
              digitalWrite(ledPinC2,HIGH);
              if(sum1>=sum2){ 
                digitalWrite(ledPinA2,HIGH);
              }
              else if(sum2>=sum1){
                digitalWrite(ledPinB2,HIGH);
              }
              delay(5000);
              digitalWrite(ledPinC2,LOW);
              if(sum1>=sum2){ 
                digitalWrite(ledPinA2,LOW);
              }
              else if(sum2>=sum1){
                digitalWrite(ledPinB2,LOW);
              }
              digitalWrite(ledPinD3,LOW);
              digitalWrite(ledPinA3,LOW);
              digitalWrite(ledPinB3,LOW);

              if(sum1>=sum2){
                
                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinA1,HIGH);
                delay(5000);
                digitalWrite(ledPinA1,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinA2,HIGH);
                digitalWrite(ledPinB2,HIGH);
                delay(5000);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinB1,HIGH);
                delay(5000);
                digitalWrite(ledPinB1,LOW);
                digitalWrite(ledPinB2,HIGH);
                delay(5000);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
              else if(sum2>=sum1){
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinA3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinB1,HIGH);
                delay(5000);
                digitalWrite(ledPinB1,LOW);
                digitalWrite(ledPinA3,LOW);
                digitalWrite(ledPinB2,HIGH);
                digitalWrite(ledPinA2,HIGH);
                delay(5000);
                digitalWrite(ledPinB2,LOW);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinD3,LOW);

                digitalWrite(ledPinB3,HIGH);
                digitalWrite(ledPinC3,HIGH);
                digitalWrite(ledPinD3,HIGH);
                digitalWrite(ledPinA1,HIGH);
                delay(5000);
                digitalWrite(ledPinA1,LOW);
                digitalWrite(ledPinA2,HIGH);
                delay(5000);
                digitalWrite(ledPinA2,LOW);
                digitalWrite(ledPinC3,LOW);
                digitalWrite(ledPinB3,LOW);
                digitalWrite(ledPinD3,LOW);
              }
          }
    }




  
  // put your main code here, to run repeatedly:
//value  = analogRead(A0);
//if (value<600){
//  digitalWrite(ledPin,HIGH);
//  Serial.println(value);
// delay(15000);
//}else {
//  digitalWrite(ledPin,LOW);
//  Serial.println(value);
//  delay(1);
//}
}
