Task 1: 

Да се напише функция replace, която приема низ, търсена дума и дума-заместник и заменя всяко срещане на търсената дума в низа с думата-заместник.

Примерна употреба:

char str[1024] = “Ivan loves cats and dogs”;

replace(str, “cats”, “programming”);

replace(str, “dogs”, “math”);

str съдържа “Ivan loves programming and math”

Task 2:

Да се напише рекурсивна функция, която намира n-тото число от редицата на Фибоначи.

Bonus(Ханойски кули):

Дадени са три стълба. На първият са поставени n диска с различен диаметър, наредени един върху друг от най-големия към най-малкия диск. Да се преместят всички дискове на третия стълб, като се запази подредбата им и при разместванията се спазва правилото винаги да се поставя по-малък диск върху по-голям.