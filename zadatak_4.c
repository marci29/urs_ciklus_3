/* 8. Napisati program koji na serijsko sučelje jednom ispiše sve karaktere iz 8-bitne ASCII tablice. Treba ih ispisati redom bez obzira radi li se o alfanumeričkim ili specijalnim znakovima. 
Program se mora izvršavati u sklopovlju STM32F407μC. Kao izlaznu jedinicu koristiti redefiniranje ulazno-izlaznih funkcija koje neposredno koriste semihosting.
Pretpostavite da je zadana funkcija za inicijalizaciju sklopa USART2 i pripadajućih GPIO priključaka (init_USART2). 
Slanje podataka preko USART započinje njegovim upisom u najniži bajt registra USART2_DR. Slanje je završeno nakon što se postavi bit 7 u registru USART2_SR. 
Spomenuti bit automatski se briše nakon upisa novog podatka u USART2_DR. */
