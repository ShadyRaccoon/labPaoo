CafeaBase nu este clasa de baza mostenita de CafeaCopyMove, ci doar o varianta de clasa care nu are o implementare explicita a constructorilor de copiere si mutare pentru a demonstra necesitatea lor

======================================================================
======================================================================
out/build/ > make
out/build/ > ./cafea 
======================================================================
======================================================================

./cafea
Constructor normal apelat!
Primul obj cafea
Pret: 25 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Serveste cu scortisoara extra
Pumpkin Spice Latte
--------------------------------------------------------------
Copy constructor apelat!
Copie nealterata
Pret: 25 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Serveste cu scortisoara extra
Pumpkin Spice Latte
--------------------------------------------------------------
Copia modificata:
Pret: 25 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Fara zahar
Ceva de la Starbucks
--------------------------------------------------------------
Originalul
Pret: 25 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Serveste cu scortisoara extra
Pumpkin Spice Latte
--------------------------------------------------------------
Move constructor apelat!
Obiectul mutat:
Pret: 25 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Serveste cu scortisoara extra
Pumpkin Spice Latte
--------------------------------------------------------------
Obiectul original dupa mutare:
Pret: 0 lei



--------------------------------------------------------------
Destructor apelat!
Destructor apelat!
Destructor apelat!
--------------------------------------------------------------
--------------------------------------------------------------
Constructor normal apelat!
Obiect original c1:
Pret: 25 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Serveste cu scortisoara extra
Pumpkin Spice Latte
--------------------------------------------------------------
Copia lui c1 c2:
Pret: 25 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Serveste cu scortisoara extra
Pumpkin Spice Latte
--------------------------------------------------------------
Copie modificata c2:
Pret: 33 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Fara zahar
Pumpkin Spice Latte
--------------------------------------------------------------
Obiect original c1:
Pret: 25 lei
Lapte|Cafea|Pumpkin spice|Scortisoara|
Serveste cu scortisoara extra
Pumpkin Spice Latte
--------------------------------------------------------------
Destructor apelat!
free(): double free detected in tcache 2
Aborted (core dumped)