/* 23. Napisati program koji u petlji čita 4-bitne vrijednosti s priključaka GPIOD0-GPIOD3. 
Nakon što je vrijednost pročitana potrebno ju je ispisati na zvučnik --> mora emitirati onoliko tonova koliko iznosi pročitana vrijednost. 
Zvučnik je spojen na priključak GPIOE11, a ton se eimitira upisom „1“. Program se mora izvršiti u skolopovlju mikrokontrolera STM32F4076. Za čitanje i pisanje koristiti funkcije printf() i scanf(). 
Potrebno je koristiti redefiniranje ulazno-izlaznih funkcija koje posredno koriste semihost pozive.
Pretpostaviti da je inicijalizacija sučelja Flash memorije i takta već napravljena. 
Dane su funkcije za inicijalizaciju priključaka I funkcija za pauzu: void INIT_GPIOD(void), void INIT_GPIOE(void) I void Pause1(void).
*/
