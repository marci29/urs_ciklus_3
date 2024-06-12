// isti kao 16.

/* 9. Napisati programsku podršku za obradu prekida čiji zahtjevi dolaze od vanjske jedinice spojene na priključak GPIOD3. 
Jedinica generira digitalni signal s dva stanja čiji su rastući bridovi jednako razmaknuti u vremenu za 10 ms. Prekidna funkcija mora na GPIOB14 generirati pravokutni signal frekvencije 2 Hz. 
GPIO14 pogoni sporu vanjsku jedinicu čiji ulaz podržava dva logička stanja.
Inicijalizaciju ulazno-izlaznog sklopovlja i prekida napraviti u okviru funkcije main(). Prekidu dodijeliti prioritet 2. 
Pretpostaviti da je inicijalizacija Flash kontrolera i izvora takta već napravljena. Također pretpostaviti da je grupiranje prekida već napravljeno te da je PRIGROUP = 0. 
Prije pokretanja programa stanja registara koji upravljaju GPIO nisu poznata. Konfiguraciju priključaka koji se ne koriste nije dopušteno mijenjati. */
