const int buttons [] = {7,8,A0,A1,A2,A3};
const char buttonNames [6][6] = {"A","B","UP","RIGHT","LEFT","DOWN"};
int counter [] = {0,0,0,0,0,0};
int currentState [6] = {};
int lastState [6] = {};

const int PIN_RED   = 10;
const int PIN_GREEN = 3;
const int PIN_BLUE  = 9;

struct rgbcolor {
  uint8_t r;   // red value
  uint8_t g;   // green value
  uint8_t b;   // blue value
} colors[] = {
  {255, 0, 0},
  {0, 255, 0},
  {0, 0, 255},
  {255, 255, 0},
  {0, 255, 255},
  {255, 0, 255},
};


void setup() {
  while (!Serial) {}
  Serial.begin(9600);
  Serial.println("Press button to log message");

  for (int i = 0; i < 6; i++) {
     pinMode(buttons[i], INPUT_PULLUP);
  }

  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
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

      setColor(colors[i]);
    }
    else if(lastState[i] == LOW && currentState[i] == HIGH && counter[i] > 0) {
      message = (String)"Released button: '" +  + buttonNames[i] + "'";
      Serial.println(message);

      setColor({0, 0, 0});
    }

    // save the the last state
    lastState[i] = currentState[i];
  }
}

void setColor(rgbcolor color) {
  analogWrite(PIN_RED,   255 - color.r);
  analogWrite(PIN_GREEN, 255 - color.g);
  analogWrite(PIN_BLUE,  255 - color.b);
}
