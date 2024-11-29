#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
printf("Witaj podaj jendostke w mm a ja przemienie je na inne jednostki \n");
    float mm;
    scanf("%f", &mm);
    float cm = mm / 10;
    printf("jednostka w cm :  %f\n", cm);
    float dm = mm / 100;
    printf("jednostka w dm :  %f\n", dm);
    float km = mm / 1000;
    printf("jednostka km :  %f\n", km);
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.