String input = Serial.readStringUntil('\n');
float num1 = 0;
float num2 = 0;
float result = 0;
char op = 'P';

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Provide numbers to calculate, in the following format: num1 operator num2");
  sscanf(input.c_str(), "%f %c %f", &num1, &op, &num2);

  switch (op) {
    case '+':
      result = num1 + num2;
      break;

    case '-':
      result = num1 - num2;
      break;

    case '*':
      result = num1 * num2;
      break;

    case '/':
      result = num1 / num2;
      break;
  }

  Serial.print(num1);
  Serial.print(" ");
  Serial.print(op);
  Serial.print(" ");
  Serial.print(num2);
  Serial.print(" = ");
  Serial.println(result);
}
