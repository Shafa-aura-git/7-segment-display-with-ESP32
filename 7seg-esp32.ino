const int segA = 12;
const int segB = 13;
const int segC = 33;
const int segD = 25;
const int segE = 26;
const int segF = 14;
const int segG = 27;

const int numbers[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1}, 
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1}, 
  {1, 1, 1, 0, 0, 0, 0}, 
  {1, 1, 1, 1, 1, 1, 1}, 
  {1, 1, 1, 1, 0, 1, 1}  
};

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++){
    displayNumber(i);
    delay(1000);
  }

}

void displayNumber(int num) {
  digitalWrite(segA, numbers[num][0]);
  digitalWrite(segB, numbers[num][1]);
  digitalWrite(segC, numbers[num][2]);
  digitalWrite(segD, numbers[num][3]);
  digitalWrite(segE, numbers[num][4]);
  digitalWrite(segF, numbers[num][5]);
  digitalWrite(segG, numbers[num][6]);
}
