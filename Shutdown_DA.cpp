#include<HIDKeyboard.h>

HIDKeyboard K;
void setup() {
K.begin();

K.pressSpecialKey(GUI);
K.releaseKey();
delay(3000);

K.println("cmd");
delay(1000);


K.pressSpecialKey(Enter);
delay(3000);


K.println("shutdown /s");
delay(1000);
K.pressSpecialKey(Enter);
delay(3000);
}

void loop() {


}
