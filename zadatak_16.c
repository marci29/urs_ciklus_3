/* 24. Napisati programsku podršku za obradu prekida čiji zahtjevi dolaze od vanjske jedinice na GPIOD3. Vanjska jedinica generira signal s 2 stanja koji ima jednolik razmak od 10ms između rastućih bridova. 
Prekidna funkcija na GPIOB14 pogoni sporu vanjsku jedinicu čiji izlaz ima 2 stanja. Potrebno je napraviti inicijalizaciju ulazno-izlaznog sklopovlja u main(), postaviti prioritet prekida na vrijednost 2. 
Pretpostaviti napravljenu inicijalizaciju Flasha i takta, te pretpostaviti da je obavljeno grupiranje prekida i da je PRIGRUP = 0. 
Prije pokretanja stanja GPIO registra nisu poznata a konfiguraciju priključaka koji se ne koriste nije dopušteno mijenjati. */
