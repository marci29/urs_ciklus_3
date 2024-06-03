/* 1. Potrebno je napisati funkciju conf za konfiguriranje sklopa GPIOB. Funkcija ima deklaraciju oblika void conf (int c);  
Ako parametar c iznosi 0, konfiguracija sklopa GPIOB se ne izvodi. Ako je c jednak 1, funkcija treba konfigurirati priključke 0-7 sklopa GPIOB kao ulazne priključke. 
Ako je c jednak 2, priključke 0-7 treba konfigurirati kao izlazne priključke s dva logička stanja koja se mogu mijenjati najvećom brzinom. 
Za bilo koju drugu vrijednost parametra c, bitove 8-11 potrebno je konfigurirati kao izlazne priključke s otvorenim odvodom i priteznim otpornikom spojenim prema napajanju. 
Priključke čija konfiguracija nije obuhvaćena danom vrijednošću parametra c nijedopušteno mijenjati. Pretpostaviti da prije poziva funkcije conf stanja registara koji upravljaju sklopom GPIOB nisu poznata. */
