const int buttons [] = {7,8,A0,A1,A2,A3};
const char buttonNames [6][6] = {"A","B","UP","RIGHT","LEFT","DOWN"};
int counter [] = {0,0,0,0,0,0};
int currentState [6] = {};
int lastState [6] = {};

void setup() {
  while (!Serial) {}
  Serial.begin(9600);
  Serial.println("Press button to log message");

  for (int i = 0; i < 6; i++) {
     pinMode(buttons[i], INPUT_PULLUP);
  }
}

void loop() {
  for (int i = 0; i < 6; i++) {

    // read the state of the switch/button:
    currentState[i] = digitalRead(buttons[i]);

    String message;

    if(lastState[i] == HIGH && currentState[i] == LOW) {
      counter[i]++;
      message = (String)"Pressed button: '" + buttonNames[i] + "' a total of " + counter[i] + " times";
      Serial.println(message);
    }
    else if(lastState[i] == LOW && currentState[i] == HIGH && counter[i] > 0) {
      message = (String)"Released button: '" +  + buttonNames[i] + "'";
      Serial.println(message);
    }

    // save the the last state
    lastState[i] = currentState[i];
  }
}
