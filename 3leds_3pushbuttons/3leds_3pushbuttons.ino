const int ledPin1 = 13;
    const int ledPin2 = 11;
    const int ledPin3 = 12;
    const int button1 = 2;
    const int button2 = 3;
    const int button3 = 4;
    int buttonState1 = 0;
    int buttonState2 = 0;
    int buttonState3 = 0;
    
    void setup(){
      pinMode(ledPin1, OUTPUT);
      pinMode(button1, INPUT);
      pinMode(ledPin2, OUTPUT);
      pinMode(button2, INPUT);
      pinMode(ledPin3, OUTPUT);
      pinMode(button3, INPUT);
    }
    
    void loop(){
      buttonState1 = digitalRead(button1);
      buttonState2 = digitalRead(button2);
      buttonState3 = digitalRead(button3);

      if (buttonState1 == HIGH){
        digitalWrite(ledPin1, HIGH);
      }
      else{
        digitalWrite(ledPin1, LOW);
      }
      
      if (buttonState2 == HIGH){
        digitalWrite(ledPin2, HIGH);
      }
      else{
        digitalWrite(ledPin2, LOW);
      }
      
      if (buttonState3 == HIGH){
        digitalWrite(ledPin3, HIGH);
      }
      else{
        digitalWrite(ledPin3, LOW);
      }
      
    }
