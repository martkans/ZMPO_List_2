# Zaawansowane Metody Programowania Obiektowego – zadanie 2
## Użycie obiektów, klasy wirtualne, metody wirtualne, przetwarzanie drzew

**UWAGA:**
+ Pisząc własny program można użyć innego nazewnictwa niż to przedstawione w treści zadania. Należy jednak użyć spójnej konwencji kodowania, zgodnie z wymaganiami kursu.

Zadanie polega na oprogramowaniu klasy *CMenu*, która pozwoli na łatwe i szybkie tworzenie tekstowego interfejsu użytkownika. Obiekty klasy *CMenu* mają za zadanie wczytać tekst podany przez użytkownika i w zależności od jego treści wykonać jedną z następujących akcji:
+ Poinformować użytkownika, że wprowadził błędne polecenie.
+ Wykonać zadaną akcję.
+ Wejść do podmenu.

**Lista wymogów technicznych do programu**
+ Klasa *CMenu* ma zawierać listę pól (w postaci vektora, lub tablicy) klasy *CMenuItem*.
  
+ Klasa *CMenuItem* jest klasą **czysto wirtualną**, po której dziedziczą klasy *CMenu* i *CMenuCommand*.
  
+ Każdy obiekt *CMenuItem* ma posiadać
    + Pole *s_command* typu *string*.
    + Pole *s_name* typu *string*.
    + Metodę *Run*, która uruchamia działanie obiektu. Typ zwracany przez metodę *Run* zależy od koncepcji wykonania programu prze studenta (może być to np. *void*, *int*, lub inny typ).

+ Działanie metody *Run*, obiektów klasy *CMenu* polega na:
    + Wyświetleniu swojej nazwy i komendy.
    + Wyświetleniu nazw wszystkich pozycji (*s_name*) i komend je wywołujących (*s_command*), które są przypisane do tego menu.
    + Pobraniu od użytkownika tekstu zakończonego naciśnięciem klawisza *<Enter>* (Uwaga: użytkownicy często piszą głupoty, tak więc należy zabezpieczyć się przed spowodowaniem błędu przez prowadzącego).
    + Jeżeli treść wprowadzanego napisu pasuje do wartości pola *s_command*, któregoś z obiektów *CMenuItem* przypisanego do obiektu klasy *CMenu*, dla którego została wykonana metoda *Run*, to należy wywołać metodę *Run* dla tego obiektu, w przeciwnym przypadku należy poinformować użytkownika o błędzie (patrz: przykład na końcu instrukcji).
    + Jeżeli użytkownik wprowadzi komendę *back*, metoda *Run* kończy działanie.

+ Działanie metody *Run* dla obiektów klasy *CMenuCommand*, jest następujące. Każdy obiekt posiada wskaźnik na obiekt **klasy wirtualnej** *CCommand*, która posiada metodę *RunCommand*. Metoda *Run* klasy *CMenuCommand* wywołuje metodę *RunCommand* obiektu klasy *CCommand*, o ile jakiś obiekt klasy *CCommand* został przypisany. Jeżeli nie, to wyprowadza na ekran tekst – *pusta komenda*. Domyślna treść metody *RunCommand* ma wyprowadzać na ekran tekst *Komenda domyślna*.

+ Należy oprogramować klasę *CMenu* tak, żeby możliwe było dodawanie nowych wpisów do menu, oraz usuwanie i dostęp do istniejących już pozycji. Należy pamiętać że w jednym obiekcie *CMenu* nie mogą wystąpić dwa obiekty o tej samej nazwie i/lub komendzie.
+ Należy oprogramować klasę *CMenuCommand* tak, żeby możliwe było definiowanie obiektów *CCommand*.
+ Przerobić program z listy nr 1 tak, aby w całej komunikacji z użytkownikiem używał klasy *CMenu*.

**Autor: Michał Przewoźniczek**