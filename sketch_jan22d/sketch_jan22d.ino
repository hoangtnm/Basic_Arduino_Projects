int button = 9;

void setup() {
  Serial.begin(9600);   //Mở cổng Serial ở baudrate 9600 để giao tiếp với máy tính
  pinMode(button, INPUT);  //Cài đặt chân D2 ở trạng thái đọc dữ liệu
}

void loop() {
  int buttonStatus = digitalRead(button);    //Đọc trạng thái button
  Serial.println(buttonStatus);              //Xuất trạng thái button
  delay(200);                                //Chờ 200ms
}
