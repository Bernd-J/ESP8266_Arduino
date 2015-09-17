/*
* Kleine Beispielsketche um den 
* Einstieg in die direkte ESP8266 Programmierung via Arduino IDE zu erleichtern
*
* verwendet wurden an 
*
* Softwarekomponenten:
* Arduino 1.6.4
* https://github.com/esp8266/Arduino version 1.6.4-673-g8cd3697
*
* Hardware:
* verwendet wird ein ESP8266 Modul
* für die serielle Schnittstelle kann jedes verwendet werden,
* alle bieten diese beiden Ports
* jeweils gekennzeichnet mit:
* RxD für den Dateneingang des Modules, hier wird der TxD des Senders angeschlossen 
* TxD für den Datenausgang des Modules, hier wird der RxD des Senders angeschlossen
* Achtung!! Diese Module arbeiten mit 3,3 Volt.
* 5 Volt TTL Pegel führt zum Tode des Modules,
* daher durch geeignete Massnahmen
* (Converter, R-Netz bzw. Transistorschaltung) oder ganz einfach
* durch Nutzen einen USB --> ser. 3,3V Converters
* sicherstellen dass diese Spannung nicht überschritten wird.
* 
* zu finden sind weitere Sketche unter:
* http://homec4u.wordpress.com/
* https://github.com/Bernd-J/ESP8266_Arduino
*
* Gesammelt, aufbereitet und getestet durch:
* mailto:ek2tt@gmx.de
* benutzt leidenschaftlich gerne für die Hausautomation:
* https://www.symcon.de
* Forum dazu:
* https://www.symcon.de/forum/
* die neuesten Beiträge im Forum:
* https://www.symcon.de/forum/search.php?do=getdaily
* eigene Leiterplatten für schnelle Problemlösungen:
* Shopadresse folgt demnächst neu, http://bjes.dyndns.org/
* Materiallisten dazu:
* http://bjes.dyndns.org/Materiallisten/BJ_Materialliste.ods
*
* Dieser Sketch zeigt auf wie:
* die serielle Schnittstelle zur Ausgabe genutzt werden kann
*
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(10);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Ich sende was. ");
    delay(1000);

}
