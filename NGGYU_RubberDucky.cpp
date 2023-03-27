//A hermless prank to Rick Roll your friends

#include<HIDKeyboard.h>

HIDKeyboard Keyboard;

void setup() {
Keyboard.begin();

Keyboard.pressSpecialKey(GUI);
delay(2000);

Keyboard.println("cmd");
Keyboard.pressSpecialKey(ENTER);
delay(1000);
Keyboard.releaseKey();
Keyboard.println("chrome");
delay(1000);
Keyboard.releaseKey();
Keyboard.pressSpecialKey(ENTER);
delay(1000);
Keyboard.releaseKey();

Keyboard.println("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
delay(1000);

Keyboard.pressSpecialKey(ENTER);
delay(1000);
Keyboard.releaseKey();
}

void loop() {

}
