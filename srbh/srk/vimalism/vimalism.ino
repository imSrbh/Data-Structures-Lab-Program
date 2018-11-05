char junk;
String inputString="";

void setup()                    // run once, when the sketch starts
{
 Serial.begin(38400);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(13, OUTPUT);
}

void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      // clear the serial buffer
    if(inputString == "x"){         //in case of 'a' turn the LED on
      digitalWrite(10, HIGH);
      digitalWrite(12, HIGH);
    }
    else if(inputString == "w"){
      digitalWrite(11, HIGH);
      digitalWrite(13, HIGH);
    }
       else if(inputString == "a"){
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
    }
       else if(inputString == "d"){
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
       }

      else
      {
      digitalWrite(10, LOW);
      digitalWrite(12, LOW);  //FOR BY DEFAULT ALL THE VOLTAGES ARE LOW.
      digitalWrite(11, LOW);
      digitalWrite(13, LOW);
      }
    
    inputString = "";
  }
}
