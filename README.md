## تشخیص شعی با استفاده از سنسور IR

در این آزمایش، از یک سنسور مادون قرمز برای تشخیص حضور شئی استفاده میشود. سنسور IR شامل یک فرستنده و گیرنده 
مادون قرمز است. زمانی که شی در مقابل سنسور قرار گیرد، نور مادون قرمز منعکس شده و توسط گیرنده تشخیص داده می شود.

 در صورت تشخیص شی، مقدار خروجی سنسور به 0 تغییر میکند و LED روشن می شود.
• در صورت عدم تشخیص شی، مقدار خروجی سنسور به 1 تغییر میکند و LED خاموش می ماند.
نتیجه تشخیص توسط سریال مانیتور نیز نمایش داده می شود

### کد برنامه :
``` c++
int led = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0 , INPUT);
  pinMode(led , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ir;
  ir = digitalRead(A0);
  if(ir == 0){
    Serial.print("object detected : ");
    Serial.println(ir);
    digitalWrite(led , HIGH);
  }
  else {
    Serial.print("not detected : ");
    Serial.println(ir);
    digitalWrite(led , LOW);
  }
  delay(30);
}
```
### شماتیک مدار :
![shema](/shematic/9-IRsensor.jpg)
