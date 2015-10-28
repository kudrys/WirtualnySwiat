# WirtualnySwiat
Swiat ze zwierzetami

***

|Id |  zwierzę | siła |  inicjatywa |   specyfika metody akcja()   |  specyfika metody kolizja()
|---|----------|------|-------------|------------------------------|-----------------------------
|1  |   wilk   |  9   |      5      |            brak              |            brak
|2  |   owca   |  4   |      4      |            brak              |            brak
|5  |   żółw   |  2   |      1      | W 75% przypadków nie zmienia swojego położenia. |  Odpiera ataki zwierząt o sile <5. Napastnik musi wrócić na swoje poprzednie pole
|9  |   lew    | 11   |      7      |            brak              |  Król zwierząt: żadne zwierzę o sile < 5  nie ośmieli się wejść na pole zajmowane przez lwa

***

|roślina    |  siła      |           specyfika metody akcja()      | specyfika metody kolizja()
|-----------|------------|---------------------------------------- |------------------------------
|guarana    |   0        |                     brak                | Zwiększa siłę zwierzęcia, które zjadło tę roślinę, o 3.
|cierń      |   2        |     Próby rozprzestrzeniania się zawsze  kończą się sukcesem.          | brak

TO DO:
* Pamietac o inicjatywie i wieku(wstepny pomysl to mielic wsystko i ustalac kolejnosc w tablicy)
* Poszukac zwierzat w ASCI
* wylosowac od 1-8 jakie zwierzatko sie utworzy a potem Switch
* porobic metody zwierzatkom
* funkcja przerabiajaca wsp na xy
