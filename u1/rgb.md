Úkolem je vytvořit program, který převede barvu z RGB zápisu do hexadecimálního formátu.

Na vstupu dostanete definici barvy v podobě rgb ( x, y, z ). x, y a z jsou celá čísla v intervalu od 0 do 255 včetně a reprezentují barevnou složku. Cílem je převést tento formát na formát začínající znakem # a následně bez mezer pro každou barevnou složku hexadecimální zápis na dvě pozice například pro hodnotu 12 vypíšete dvě hodnoty 0C. Formát vstupu a výstupu je vidět níže na ukázce práce programu.

Pokud je vstup neplatný, program to musí detekovat a zobrazit chybové hlášení. Chybové hlášení zobrazujte na standardní výstup (ne na chybový výstup). Za chybu považujte:

vstup neobsahuje řetězec rgb,
chybějící čárka nebo závorka,
chybějící barevná složka,
barevná složka není validní číslo,
barevná složka není v rozmezí 0 až 255.

Zadejte barvu v RGB formatu:
rgb ( 255, 0, 0 )
#FF0000
Zadejte barvu v RGB formatu:
    rgb			(  0  ,   255  ,   0   )
#00FF00
Zadejte barvu v RGB formatu:
rgb(0,0,255)
#0000FF
Zadejte barvu v RGB formatu:
rgb ( 127, 127, 0 )
#7F7F00