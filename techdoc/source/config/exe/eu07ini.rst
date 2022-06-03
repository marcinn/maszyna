Konfiguracja eu07.ini
^^^^^^^^^^^^^^^^^^^^^

Jest to plik tekstowy, w którym umieszczone są parametry uruchomieniowe
Symulatora MaSzyna. Ponieważ nie ma możliwości zmieniania ich z poziomu
symulacji, używany w tym celu jest specjalny program, tzw.
`Starter <Symulator/MaSzyna/Starter>`__. Niektóre parametry są
modyfikowane na tyle rzadko, że można je zmienić jednie przez ręczną
edycję pliku.

W kwadratowym [] nawiasie podana jest wartość domyślna, ustawiana przy
braku wpisu (albo gdy będzie poprzedzony znakami komentarza **//**).

-  Wartość [N/A] oznacza całkowity brak wpisu, jako wartość domyślną

W zwykłym nawiasie () są podane możliwe wartości

-  Zakres wartości cyfrowych jest podawany jako ( X--Y__SkokWartości),
   gdzie X to wartość minimalna, a Y to wartość maksymalna.

.. _parametry_użytkowe:

Parametry użytkowe
==================

Służą do ustalenia sposobu pracy Symulatora zależnie od preferencji
użytkownika.

.. _mousescale_3.2_0.5:

mousescale [3.2 0.5]
--------------------

Czułość myszy w danej osi. Wartość ujemna odwraca kierunek.

.. _feedbackmode_1:

feedbackmode [1]
----------------

Służy do włączenia `informacji
zwrotnych <Symulator/MaSzyna/Informacje_zwrotne>`__, wysyłanych przez
Symulator. Domyślnie zapalane są kontrolki na klawiaturze. Przy 3, lub
wyższych, kran w EN57 i pochodnych, na pozycji luzowania EP, nie jest
automatycznie odbijany do pozycji jazdy.

.. _fullscreen_no:

fullscreen [no]
---------------

*(yes, no)* Po włączeniu symulacja będzie wyświetlana na pełnym ekranie.
Normalnie wyświetlana jest w oknie Windows.

.. _fullscreenwindowed_yes:

fullscreenwindowed [yes]
------------------------

''(yes, no) Po włączeniu symulacja będzie wyświetlania w trybie
pełnoekranowego okna. Tryb ten używa aktualnej rozdzielczości pulpitu
(wpisy width i height są ignorowane).

.. _inactivepause_yes:

inactivepause [yes]
-------------------

Określa, czy symulacja ma się automatycznie zatrzymywać, jeśli okno
Symulatora jest nieaktywne (przełączone w tło). Wyłączenie
automatycznego pauzowania umożliwia korzystanie z innych programów np.
podczas oczekiwania na wolną drogę. Po przełączeniu okna innego programu
na pierwszy plan należy je zmniejszyć tak, by pozostawić sobie podgląd
na okno symulacji. Nadal możliwe jest zatrzymanie programu klawiszem
[Pause], jednak symulacja będzie kontynuowana po przełączeniu jej okna
na pierwszy plan.

Funkcja automatycznej pauzy przy nieaktywności okna jest wyłączana przez
ustawienie **multiplayer** z wartością różną od zera.

.. _lang_pl:

lang [pl]
---------

*(pl, en, cz, hu)* Ustawia język wyświetlania napisów. Domyślnie język
polski (pl), przy wybraniu innego języka, który nie jest obsługiwany,
wyświetlane będą komunikaty w języku angielskim. Dodatkowo parametr ten
ustawia końcówkę nazwy plików dla napisów powiązanych z dźwiękami.
Przykładowo, przy odtwarzaniu dźwięku *radio25.wav* wyświetlona zostanie
zawartość pliku *radio25-pl.txt* dla języka polskiego, *radio25-en.txt*
dla angielskiego, *radio25-cz.txt* dla czeskiego, a *radio25-hu.txt* dla
węgierskiego.

.. _pause_no:

pause [no]
----------

*(yes, no)* Umożliwia zamrożenie symulacji zaraz po wczytaniu scenerii.
Może być przydatne, jeśli podczas wczytywania wykonuje się inne
czynności poza komputerem. Nie ma wpływu na późniejszy przebieg
symulacji. Działa od wersji 382.

.. _width_800:

width [800]
-----------

Szerokość okna albo rozmiar pełnego ekranu, w pikselach.

.. _height_600:

height [600]
------------

Wysokość okna albo rozmiar pełnego ekranu, w pikselach.

.. _sceneryfile_td.scn:

sceneryfile [td.scn]
--------------------

Nazwa scenerii do uruchomienia, jeśli nie została podana jako parametr
(**-s**). Rainsted używany jako starter podaje jako parametr.

.. _humanctrlvehicle_eu07_424:

humanctrlvehicle [EU07-424]
---------------------------

Nazwa pojazdu prowadzonego przez użytkownika, jeśli nie została podana
jako parametr (**-v**).

.. _fieldofview_45:

fieldofview [45]
----------------

*(15--75__1)* Kąt widzenia w pionie (wartość pozioma jest dopasowywana
na podstawie stosunku szerokości/wysokości okna) Aktualna wartość kąta
widzenia podana, w nowym exe, pod F12, w starym na ekranie F8 w trybie
Debugmode.

.. _ui.bg.opacity_0.65:

ui.bg.opacity [0.65]
--------------------

*(0--1__0.01)* Przeźroczystość UI

.. _uitextcolor_255_255_255:

uitextcolor [255, 255, 255]
---------------------------

*(0--255__1, 0--255__1, 0--255__1)* Kolor napisów interfejsu w formacie
R, G, B.

.. _input.gamepad_yes:

input.gamepad [yes]
-------------------

*(yes, no)* Obsługa gamepada. Należy wyłączyć w przypadku podłączonego
PoKeys lub nieużywanego kontrolera gier.

screenshotsdir ()
-----------------

Katalog zapisu zrzutów ekranu wykonanych przez klawisz PrintScreen.

.. _loadinglog_yes:

loadinglog [yes]
----------------

*(yes, no)* Przełącznik pokazywania ostatnich linijek loga podczas
wczytywania.

.. _sound.openal.renderer_devicename:

sound.openal.renderer "devicename"
----------------------------------

Wybieranie implementacji OpenAL. Domyślnie brak wpisu. Np
sound.openal.renderer "OpenAL Soft"

.. _sound.volume_1.25:

sound.volume [1.25]
-------------------

*(1.0--2.0)* Ogólne ustawienie głośności wszystkich dźwięków w
Symulatorze

.. _sound.volume.radio_0.8:

sound.volume.radio [0.8]
------------------------

*(0.0--1.0)* Mnożnik głośności dźwięków z radiotelefonu

.. _sound.volume.vehicle_1.0:

sound.volume.vehicle [1.0]
--------------------------

*(0.0--1.0)* Mnożnik względnej głośności dźwięków wydawanych przez
pojazdy

.. _sound.volume.positional_1.0:

sound.volume.positional [1.0]
-----------------------------

*(0.0--1.0)* Mnożnik względnej głośności pozycjonowanych dźwięków
emitowanych przez eventy scenerii

.. _sound.volume.ambient_0.8:

sound.volume.ambient [0.8]
--------------------------

*(0.0--1.0)* Mnożnik względnej głośności dźwięków globalnych (o ujemnym
zakresie) emitowanych przez eventy scenerii

.. _sound.volume.paused_0.0:

sound.volume.paused [0.0]
-------------------------

*(0.0--1.0)* Stopień wyciszenia dźwięku po spauzowaniu symulatora

.. _parametry_scenerii:

Parametry scenerii
==================

Przeznaczone są raczej do umieszczenia w scenerii, pomiędzy **config** a
**endconfig**. Służą do nadania scenerii specyficznego charakteru.

.. _joinduplicetedevents_no:

joinduplicetedevents [no]
-------------------------

*(yes, no)* Grupowanie eventów o identycznych nazwach. Standardowo nazwy
eventów powinny być unikalne w skali scenerii, inaczej sceneria może
błędnie działać. Niemniej możliwe jest też umyślne nadawanie tych samych
nazw, aby uprościć niektóre operacje wykonywane przez eventy. Używanie
tego parametru leży wyłącznie w gestii autora scenerii/scenariusza.
Działa od wersji 382.

.. _latitude_52:

latitude [52]
-------------

*(90--(-90)__1)* Szerokość geograficzna środka scenerii, używana dla
wyliczenia kąta padania promieni słonecznych po włączeniu **movelight**.
Północna półkula to plus, południowa to minus. Docelowo szerokość będzie
zapisana w scenerii.

.. _movelight__1:

movelight [-1]
--------------

''((-1)--365__1) Włącza zależność kierunku padania światła od godziny
oraz daty.

      Od 1 do 365 wyliczana jest wysokość Słońca nad horyzontem w danym
      dniu (na szerokości określonej parametrem **latitude**, domyślnie
      52°N).
      0 Dzień jest pobierany z kalendarza komputera. Aby w nocy uzyskać
      ciemność, należy również ustawić **doubleambient no**
      -1 ??.

.. _multiplayer_0:

multiplayer [0]
---------------

Wartość 1 włącza obsługę `komunikacji z innym
programem <Komunikacja_z_programami_trzecimi>`__. Ma też pewien wpływ na
symulację, np. wyłącza możliwość chwilowego zatrzymania klawiszem
[Pause]. Zewnętrzny program może służyć do sterowania ruchem na
scenerii, albo umożliwiać synchronizację jazdy wieloosobowej przez sieć
komputerową.

Aktualnie współpraca działa tylko z programem Rainsted.

.. _scenario.time.offset_na:

scenario.time.offset [N/A]
--------------------------

O ile godzin powinna zostać przesunięta domyślna godzina rozpoczęcia
scenariusza i zdefiniowane rozkłady jazdy (dopuszczalne są także
wartości z ułamkiem np 3.5 i/lub przesuniecie wstecz, np. -2.0).

.. _scenario.time.current_na:

scenario.time.current [N/A]
---------------------------

*(yes, no)* Umożliwia uruchomienie scenerii z aktualnym czasem na
komputerze. Możliwe kilkuminutowe opóźnienie spowodowane ładowaniem
scenerii. **Domyślny wpis to brak całego wpisu**

.. _scenario.time.override_na:

scenario.time.override [N/A]
----------------------------

Umożliwia uruchomienie scenerii z wskazanym czasem. Dopuszczalne są
także wartości z ułamkiem np 3.5

.. _scenario.weather.temperature_na:

scenario.weather.temperature [N/A]
----------------------------------

Umożliwia uruchomienie scenerii z ustaloną temperaturą otoczenia X
stopni, w st. Celsjusza

.. _createswitchtrackbeds_yes:

createswitchtrackbeds [yes]
---------------------------

*(yes, no)* Automatyczna generacja podsypek rozjazdów

.. _parametry_graficzne___nowy_renderer_z_shaderami:

Parametry graficzne - nowy renderer z shader'ami
================================================

Opcje działające tylko na nowym rendererze, z shaderami, od Milka.

.. _gfx.skippipeline_noyes:

gfx.skippipeline (no/yes)
-------------------------

Ustawia uproszczony tryb renderowania bezpośrednio do backbuffera.
Wyłącza prawidłową implementację HDR i wszystkie efekty takie jak
motionblur. Ustawienia z kategorii framebuffer, format i postfx będą
ignorowane.

.. _gfx.framebuffer.width_x:

gfx.framebuffer.width (x)
-------------------------

Szerokość renderowanego obrazu (nie okienka!)

.. _gfx.framebuffer.height_y:

gfx.framebuffer.height (y)
--------------------------

Wysokość renderowanego obrazu (nie okienka!)

.. _gfx.framebuffer.fidelity_x:

gfx.framebuffer.fidelity (x)
----------------------------

Górna wielkośc rysowanego buffera, zmienia rozdzielczość pionową -
rozdzielczość pozioma jest dobierana proporcjonalnie do parametrów
gfx.framebuffer.width i gfx.framebuffer.height

   *0* - 480p
   *1* - 720p
   *2* - 1080p
   *3* - 1440p

.. _gfx.shadowmap.enabled_yesno:

gfx.shadowmap.enabled (yes/no)
------------------------------

Włączyć cienie

.. _gfx.extraeffects_yesno:

gfx.extraeffects (yes/no)
-------------------------

Dodatkowe efekty realizowane przez shadery (np. mapowanie paralaksy)

.. _gfx.shadows.cab.range_x:

gfx.shadows.cab.range (X)
-------------------------

Promień zasięgu źródeł cieni z zewnątrz kabiny, w metrach

**Od Exe @TMJ 191205, parametr działa tylko na silniku "legacy"**

.. _gfx.envmap.enabled_yesno:

gfx.envmap.enabled (yes/no)
---------------------------

Lustrzane odbicia

.. _gfx.postfx.motionblur.enabled_yesno:

gfx.postfx.motionblur.enabled (yes/no)
--------------------------------------

Rozmycie powodowane ruchem

.. _gfx.postfx.motionblur.shutter_0.01:

gfx.postfx.motionblur.shutter (0.01)
------------------------------------

Symulowany 'czas naświetlania' efektu rozmycia w sekundach.

.. _gfx.postfx.motionblur.format_rg16frg32f:

gfx.postfx.motionblur.format (rg16f/rg32f)
------------------------------------------

Format framebuffera prędkości piksela.

.. _gfx.format.color_rgb8rgb16frgb32fr11f_g11f_b10f:

gfx.format.color (rgb8/rgb16f/rgb32f/r11f_g11f_b10f)
----------------------------------------------------

Format framebufforów koloru.

.. _gfx.format.depth_z16z24z32z32f:

gfx.format.depth (z16/z24/z32/z32f)
-----------------------------------

Format framebufforów głębokości.

.. _map.enabled_yesno:

map.enabled (yes/no)
--------------------

Uruchamia funkcję minimapy (dostępną pod klawiszem Tab)

.. _gfx.smoke_yes_yes_no:

gfx.smoke [yes] (yes, no)
-------------------------

Wyświetlanie dymu

.. _gfx.smoke.fidelity_1_1_4:

gfx.smoke.fidelity [1] (1->4)
-----------------------------

Mnożnik ilości cząstek dymu (im wyżej, tym lepiej wygląda ale zmniejsza
wydajność)

.. _gfx.skiprendering_no_noyes:

gfx.skiprendering [no] (no,yes)
-------------------------------

Wyłącza w ogóle wizualizacje symulacji, pozostawiając jedynie UI

.. _gfx.postfx.chromaticaberration.enabled_yes_yesno:

gfx.postfx.chromaticaberration.enabled [yes] (yes,no)
-----------------------------------------------------

Wyłącznik/Włącznik efektu aberracji chromatycznej

.. _gfx.reflections.fidelity_0:

gfx.reflections.fidelity [0]
----------------------------

(0--2__1) Parametr określający elementy otoczenia uwzględniane przy
malowaniu odbić. Może przyjąć wartości z zakresu:

   *0* - tryb dotychczasowy, malowana jest tylko geometria terenu
   *1* - malowana jest geometria terenu oraz dodatkowo pobliskie modele
   statyczne
   *2* - malowana jest geometria terenu, pobliskie modele statyczne oraz
   dodatkowo pobliskie pojazdy

.. _parametry_wydajnościowe:

Parametry wydajnościowe
=======================

Zmieniając te parametry można zwiększyć wydajność symulacji kosztem
jakości. Zalecane jest pozostawienie wartości domyślnych, chyba że
występują problemy z wydajnością (niski FPS).

.. _adjustscreenfreq_no:

adjustscreenfreq [no]
---------------------

Synchronizacja częstotliwości ramek z częstotliwością monitora. Ma
zastosowanie tylko na pełnym ekranie. Powinna zostać włączona, jeśli
występują problemy. FPS zostanie ograniczony do częstotliwości
odświeżania monitora. **Tylko dla starych exe Ra.**

.. _vsync_no:

vsync [no]
----------

Ogranicznik klatek do 60 fps.

.. _convertmodels_0:

convertmodels [0]
-----------------

| Opcje dla tworzenia plików modeli E3D z T3D. Modele E3D wczytują się
  szybciej, dzięki temu skraca się czas uruchomienia scenerii.
| Suma bitowa następujących parametrów:

#. +1 Włączenie generowania plików e3d.
#. +2 Optymalizacja przez wymnożenie macierzy transformacji dla obiektów
   bez zadeklarowanej animacji.
#. +4 Dodanie "banana"; obiektu trzymającego wszystkie potomne, jeśli
   jest modelem pojazdu.
#. +8 Zmniejszenie precyzji współrzędnych.
#. +16 Wyłączenie zapisu fazy renderowania submodelu.

.. _file.binary.terrain_yes:

file.binary.terrain [yes]
-------------------------

Generowanie plików terenu binarnego SBT. Wyłączenie drastycznie wydłuża
czas wczytywania mapy. Zalecane tylko dla pracujących nad mapami.

.. _decompressdds_no:

decompressdds [no]
------------------

Wartość **yes** włącza programową (tzn. poza OpenGL) dekompresję tekstur
DDS. Automatycznie zmieniany na **yes**, jeśli OpenGL nie obsługuje
dekompresji S3TC (brak *GL_EXT_texture_compression_s3tc*). Programowa
dekompresja DDS może wydłużyć wczytywanie, zalecane jest użycie tekstur
TGA w takim przypadku. Parametr wprowadzony w 2009 roku, ale aż do
wersji 372 włącznie nie był obsługiwany poprawnie. Programowa
dekompresja jest jednak uszkodzona i powoduje wyświetlenie tekstur z
poziomymi liniami.

.. _defaultext_dds:

defaultext [dds]
----------------

Określa, jakie tekstury będą poszukiwane w pierwszej kolejności, jeśli
rozszerzenie tekstury nie zostało podane jawnie. Przed wersją 150
używane do kategorycznego określenia rozszerzenia dla takich plików, w
późniejszych wersjach jako sprawdzanie plików w pierwszej kolejności.
Opcja dodana w Paczce Całościowej 2009, wcześniej tekstury bez
rozszerzenia nazwy pliku zawsze były rozumiane jako BMP.

.. _enabletraction_yes:

enabletraction [yes]
--------------------

Do wersji 411: włącza poszukiwanie sieci trakcyjnej, co przekłada się na
animację odbieraków. Wyłączenie powoduje, że odbieraki są podnoszone na
stałą wysokość, co może poprawić FPS.

Od wersji 412 zostało zoptymalizowane poszukiwanie sieci trakcyjnej i
nie ma już potrzeby wyłączania go ze względu na wydajność. Parametr
odpowiada teraz za możliwość połamania pantografu, jeśli drut jezdny
znajdzie się poniżej ślizgu. Ze względu na niedoskonałość scenerii może
być konieczne zablokowanie możliwości połamania pantografu
(**enabletraction no**) do czasu ulepszenia sieci trakcyjnej.

.. _fpsaverage_20.0:

fpsaverage [20.0]
-----------------

Średnia wartość FPS dla regulacji promienia scenerii. Im większa
wartość, tym promień będzie mniejszy. Na słabym sprzęcie nie da żadnego
efektu (promień scenerii będzie zawsze minimalny). Działa od wersji 351.

.. _fpsdeviation_5.0:

fpsdeviation [5.0]
------------------

Dopuszczalne odchylenie FPS od wartości średniej (histereza) dla
regulacji promienia scenerii. Im większa wartość, tym wahania FPS będą
większe. Zbyt mała wartość spowoduje zauważalne migotanie oddalonych
obiektów, zbyt duża trwale ograniczy promień scenerii. Działa od wersji
351.

.. _fpsradiusmax_3000.0:

fpsradiusmax [3000.0]
---------------------

Maksymalny promień renderowania scenerii [m]. Regulacja promienia
scenerii nie przekroczy podanej wartości, dzięki czemu FPS będzie mógł
być większy niż podana średnia. Na słabym sprzęcie nie da żadnego efektu
(promień scenerii będzie zawsze minimalny). Działa od wersji 351.

.. _glutfont_no:

glutfont [no]
-------------

Włącza alternatywny sposób renderowania napisów 2D (te 3 linijki u góry)
dla starszych kart graficznych, które nie potrafią wyświetlać
standardowych napisów. Wymagane jest znalezienie w systemie albo
lokalnym katalogu biblioteki *GLUT32.DLL*. Jeśli biblioteka nie zostanie
znaleziona, włączane jest wyświetlanie standardowe z zapisaniem
informacji w *log.txt*. Działa od wersji 157.

.. _loadtraction_yes:

loadtraction [yes]
------------------

Umożliwia całkowite wyłączenie sieci trakcyjnej, łącznie z wczytywaniem
modeli słupów oraz znaków związanych z siecią (We). Działa poprzez
pominięcie wszelkich modeli (dokładniej plików INC) z podkatalogów
*scenery/tr/* oraz *scenery/tra/*.

.. _modifytga_7:

modifytga [7]
-------------

Wartości niezerowe włączają możliwość modyfikacji plików TGA w celu
zwiększenia prędkości ich wczytywania. Modyfikowanie plików TGA powinno
być wykonywane przede wszystkim na etapie tworzenia paczki całościowej
oraz dodatków. Poszczególne opcje mają postać flag bitowych.

-  **+1** plik zostanie zapisany bez kompresji, jeśli po skompresowaniu
   jest dłuższy
-  **+2** zostaną obcięte niepotrzebne bajty na końcu pliku (zwykle
   napis "TRUEVISION-XFILE.")
-  **+4** końcówka pliku (do 128 pikseli) zostanie zapisana bez
   kompresji, aby nie dochodziło do przepełnienia bufora

Kompresja zastosowana dla TGA jest wydajna przede wszystkim, jeśli
występują linie poziome pikseli o identycznym kolorze. Ma to rzadko
miejsce w przypadku tekstur fotorealistycznych. Zalecane jest używanie
tekstur DDS, jednak są osoby, które cenią sobie jakość obecną w TGA, a
usuwaną przez kompresję DDS. Optymalizacja plików TGA zwiększa
efektywność ich wczytywania bez utraty jakości.

Specjalna wartość parametru **modifytga -1** uruchomi (zamiast
symulacji) tryb optymalizacji wszystkich znalezionych plików TGA. Ten
sam efekt można uzyskać podając parametr **-modifytga** przy
uruchomieniu *EU07.EXE*.

.. _maxtexturesize_4096:

maxtexturesize [4096]
---------------------

Zmniejszanie rozmiarów tekstur DDS i TGA do kwadratu o podanym boku.
Może zwiększyć wydajność kosztem jakości. Niezależnie od tego parametru
zbyt duże tekstury DDS i TGA są automatycznie skalowane do maksymalnego
rozmiaru obsługiwanego przez kartę graficzną. Na niektórych starszych
kartach graficznych zauważalny jest znaczny wzrost wydajności po
ustawieniu wartości 512.

.. _maxcabtexturesize_na:

maxcabtexturesize [n/a]
-----------------------

Zmiejszanie rozmiarów tekstur **kabin** (DDS i TGA) do kwadratów o
podanym boku. Może zwiększyć wydajność kosztem jakości. Niezależnie od
tego parametru zbyt duże tekstury DDS i TGA są automatycznie skalowane
do maksymalnego rozmiaru obsługiwanego przez kartę graficzną. Na
niektórych starszych kartach graficznych zauważalny jest znaczny wzrost
wydajności po ustawieniu wartości 512.

.. _multisampling_2:

multisampling [2]
-----------------

Wartość różna od zera włącza zwiększenie rozmiarów renderowanego okna,
które jest następnie skalowane do rozmiaru użytkowego, co poprawia
rozmycie krawędzi. Wartość 1 zwiększa dwukrotnie, 2 - czterokrotnie, 3 -
ośmiokrotnie. W przypadku znacznego spadku FPS wskazane jest
wypróbowanie innych rozmiarów okna oraz wyświetlania na pełnym ekranie.
Funkcja jest automatycznie wyłączana w przypadku wykrycia spadku FPS
(slowmotion 1).

Od `wersji 408 <Symulator/MaSzyna/EU07.EXE_408>`__ również automatycznie
wyłączana po wykryciu karty Intel.

.. _anisotropicfiltering_8:

anisotropicfiltering [8]
------------------------

Próbowanie filtrowania anizotropowego. Dopuszczalne wartości 1, 2, 4, 8
lub 16.

.. _smoothtraction_yes:

smoothtraction [yes]
--------------------

Prymitywna metoda wygładzania drutów. Rysuje je grubsze, a na niektórych
kartach graficznych błędnie (są ciensze z jednego końca). Na OpenGL 1.3
lub nowszym zalecane używanie **multisampling**.

.. _usevbo_yes_yes_no:

usevbo [yes] (yes, no)
----------------------

Parametr włącza tryb wyświetlania VBO zamiast starszego trybu Display
Lists. Ponieważ tryb VBO jest z reguły bardziej wydajny niż Display
Lists, jest on trybem domyślnym. Tryb Display List może być przydatny na
przedpotopowych sterownikach, nie radzących sobie z VBO.

.. _python.enabled_yes_yesno:

python.enabled [yes] (yes,no)
-----------------------------

Włącznik/Wyłącznik generowania wszystkich tekstur pythonem - Ekrany,
znaki itd.

.. _pyscreenrendererpriority_normal_normal_lower_lowest_idle_off:

pyscreenrendererpriority [normal] (normal, lower, lowest, idle, off)
--------------------------------------------------------------------

Ilość razy odświeżania pythonowego renderera ekranów w kabinach **na
sekundę**. Zmniejszając częstotliwość odświeżania ekranu, powinno
zwiększyć płynność symulacji na słabszych komputerach. *normal* to 5
razy na sek, *lower* to 2 razy, a *lowest* to 1 raz. *off* kompletnie
wyłącza generowanie ekranów.

.. _python.threadedupload_yes_yesno:

python.threadedupload [yes] (yes/no)
------------------------------------

Wysyłanie wygenerowanych obrazów ekranów przy użyciu osobnego wątku.

.. _python.mipmaps_yes_yesno:

python.mipmaps [yes] (yes/no)
-----------------------------

Generowanie mipmap dla tekstur stworzonych skryptami pythona.

.. _dynamiclights_3:

dynamiclights [3]
-----------------

Ilość świateł OpenGL przypisywana pojazdom. Dopuszczalny zakres wartości
to 1-7. W miarę współczesne karty graficzne nie powinny mieć specjalnych
kłopotów z obsługa 7 źródeł, ale jest to kwestia indywidualnych testów.

.. _shadows_yes:

shadows [yes]
-------------

Włączenie cieni od światła słonecznego.

.. _shadowtune_4096_250_400_300:

shadowtune [4096 250 400 300]
-----------------------------

Parametry jakości cieni. Gdzie: - Szerokość i wysokość tekstury na jaką
renderuje się shadowmapa. Domyślnie 4096. (to zajmuje sporo vramu, np.
2048 to 16MiB, 4096 to 64MiB, 8192 to 256MiB). - Jak szeroka ma być
projekcja przez którą rzucane jest światło. Poza obszarem projekcji
cienie nie są rzucane. Oczywiście żeby zwiększyć projekcję bez utraty
jakości należy też zwiększyć rozdzielczość shadowmapy. Domyślnie 250. -
Tutaj można sobie ustawić dużo, jednym ograniczeniem jest dokładność
shadowmapy czyli 32bitowego floata. Jeżeli będzie za mało to obiekty
które są niżej nie będą rzucać cienia, widoczne przy wylatywaniu kamerą
w górę. Domyślnie 400. - Odległość punktu projekcji światła od
obserwatora w kierunku słońca. Jeżeli jest za mało to obiekty które są
niżej nie będą rzucać cienia, a przy wysokich kątach padania światła
projekcja będzie się wrzynać w teren i ograniczać efektywny promień
projekcji. Żeby miało sens to musi być mniejsze od głębokości projekcji.
Domyślnie 300.

.. _gfxrenderer_full:

gfxrenderer [full]
------------------

      *simple* Bardzo uproszczony renderer

      *legacy* Stary renderer, bez shaderów, wymaga bibliotek GL

      *full* Nowy renderer, z shaderami, wymaga bibliotek GL3.3+

Wpis ustawia silnik do generowania grafiki.

.. _splinefidelity_1:

splinefidelity [1]
------------------

Parametr służy do zaokrąglania torów na łukach. Domyślna wartość (1),
oznacza że łuk jest rysowany z prostych kawałków o długości 2m.
Maksymalna wartość to 4, gdzie długość prostej to 0.5m.

.. _fullphysics_yes:

fullphysics [yes]
-----------------

Ustawienie na *no* wyłącza ograniczenie maksymalnego kroku fizyki. Może
poprawić wydajność i spowodować bezsensowne obliczenia fizyki!

.. _gfx.resource.move_no:

gfx.resource.move [no]
----------------------

[yes, no] Czy symulator może przesyłać dane pomiędzy pamięcią RAM i
pamięcią karty graficznej, *yes* oznacza transfer dwukierunkowy, *no*
oznacza tylko w kierunku z pamięci RAM do pamięci kraty graficznej
(zwiększa zużycie RAM'u)

.. _gfx.resource.sweep_yes:

gfx.resource.sweep [yes]
------------------------

[yes, no] Przełącznik ten pozwala wyłączyć w ogóle mechanizm usuwania
nieużywanych tekstur z pamięci karty graficznej. Potencjalnie eliminuje
problem znikających tekstur. *no*, zwiększa zapotrzebowanie na pamięć
karty graficznej oraz wyłącza usuwanie tekstur w pamięci karty głównej.

.. _compresstex_yes:

compresstex [yes]
-----------------

Gdy włączone żąda od sterownika kompresji ładowanych tekstur (nie wpływa
na tekstury już skompresowane, DDS). Wyłączenie poprawi jakość na paczce
TGA, kosztem wydajności i zajętości pamięci graficznej.

.. _sound.maxsources_30:

sound.maxsources [30]
---------------------

Ustawia żądaną ilość slotów źródeł dźwiękowych w implementacji OpenAL.
(ustawienie nie jest zobowiązujące dla implementacji)

gfx.reflections.framerate
-------------------------

Częstotliwość odświeżania odbić otoczenia, w ilościach aktualizacji na
sekundę

gfx.drawrange.factor.max
------------------------

*(1.0--3.0)* Maksymalny mnożnik zasięgu rysowania dla scenerii.

gfx.shadow.angle.min
--------------------

*(0.2--1.0)* Dopuszczalna długość malowanych cieni, gdzie 0.2 oznacza
brak skracania długości cieni a 1.0 powoduje największe ograniczenie ich
długości.

.. _parametry_testowe:

Parametry testowe
=================

Parametry te służą do testowania scenerii lub pewnych warunków
symulacji. Przy normalnym użytkowaniu powinno się pozostawić wartości
domyślne.

.. _debugmode_no:

debugmode [no]
--------------

Specjalny tryb do testowania scenerii. Wyłącza możliwość wykolejenia
przy zbyt dużej prędkości oraz uszkodzenia lokomotywy. Wyłącza
ograniczenie przestrzeni kabiny. Zmienia działanie niektórych klawiszy.

Od `wersji 390 <Symulator/MaSzyna/EU07.EXE_390>`__ automatycznie
uruchamia AI w pojeździe wybranym do jazdy, co usprawnia testowania
scenerii.

.. _debuglog_3:

debuglog [3]
------------

Wyświetlanie i zapisywanie do pliku *log.txt* informacji o działaniu
programu. Plik ten zawiera konfigurację komputera, prawidłowość
wczytania modeli i tekstur, listę wykonanych eventów. Zapisują się
również pojawiające się błędy. Plik ten jest podstawą do rozwiązywania
problemów z uruchomieniem i działaniem symulacji.

Od wersji 351 parametr ustawia się liczbą będącą maską bitową. Wartość
**+1** oznacza zapis do pliku, a **+2** - wyświetlanie w oknie logu.
Dotychczasowe wartości **yes** oraz **no** są traktowane odpowiednio
jako **3** oraz **0**. Wartość **+4** włącza logowanie nazw wczytywanych
torów, co pomaga odnaleźć wadliwe odcinki. Wartość **+8** włącza
logowanie zmian w tabelkach skanowania pojazdów. (Od wersji 477, w
473-476 włączone cały czas, wcześniej brak.)

.. _multiplelogs_no:

multiplelogs [no]
-----------------

Zapisywanie plików log i errors do osobnego katalogu pod unikalnymi
nazwami. Do porównań logów podczas testów.

.. _livetraction_yes:

livetraction [yes]
------------------

Uwzględnienie (spadków) napięcia w sieci.

.. _physicslog_no:

physicslog [no]
---------------

Służy do testowania pojazdów oraz AI. Może być również używane do zapisu
przebiegu jazdy w celu wygenerowania obrazu "taśmy Haslera". Zapis nie
działał od wersji 236 do 350 włącznie z powodu przepisania kodu AI na
inny język.

.. _soundenabled_yes:

soundenabled [yes]
------------------

Włącza dźwięki przestrzenne.

.. _logs.filter_x:

logs.filter X
-------------

gdzie X to suma flag typów komunikatów, które nie powinny być logowane.

1 - Komunikaty ogólne

2 - Komunikaty o brakach i błędach w plikach

4 - Komunikaty o błędach w modelach 3d (nieprawidłowe skalowanie,
wektory normalne itp.)

8 - Komunikaty o błędach w teksturach

16 - Komunikaty o błędach w skryptach LUA

32 - Komunikaty o błędach w plikach materiałów

64 - Komunikaty o błędach w kodzie shaderów

128 - Komunikacja sieciowa TCP

256 - Komunikaty o wczytywaniu plików dźwiękowych

512 - Komunikaty o błędach sieci trakcyjnej

.. _crashdamage_yes:

crashdamage [yes]
-----------------

Włącza uszkodzenia sprzęgów i wykolejenia od zderzeń.

randomseed
----------

Ziarno losowania dla zdarzeń losowych. Wpis pozwala uzyskać powtarzalne
wyniki wszystkich testów pseudolosowych w kolejnych sesjach.

.. _dynamicbraketest_no:

dynamicbraketest [no]
---------------------

Włącza wykonywanie hamowania kontrolnego przez pociągi prowadzone przez
AI.

.. _map.manualswitchcontrol_no:

map.manualswitchcontrol [no]
----------------------------

Włącza kontrolę wszystkich rozjazdów z poziomu minimapy.

.. _vr.backend_openvr:

vr.backend [openvr]
-------------------

Zadeklarowanie architektury VR.

.. _vr.enabled_no:

vr.enabled [no]
---------------

Włącza obsługę systemu VR.

extraviewport
-------------

Konfiguracja dodatkowego ekranu. Powtórzyć wpis dla każdego monitora.

``monitor width height range pax pay paz pbx pby pbz pcx pcy pcz pex pey pez``

Projekcja definiowana jest parametrami, gdzie pa/b/c to pozycje rogów
monitora a pe to pozycja oka. Zgodnie z
https://web.archive.org/web/20170709174143/https://csc.lsu.edu/~kooima/articles/genperspective/index.html

Przykładowo:

| ``extraviewport Generic_PnP_Monitor:1920,0 1920 1080 0.5 0.75 -0.2 -0.9 0.75 -0.2 -0.2 0.75 0.195 -0.9 0.0 0.0 0.0``
| ``extraviewport MAIN 1920 1080 0.5 -0.835 -0.2 -0.9 0.375 -0.2 -0.9 -0.835 0.46 -0.825 0.0 0.0 0.0``
| ``extraviewport Generic_PnP_Monitor:-1920,0 1920 1080 0.5 -1.2 -0.2 -0.2 -1.2 -0.2 -0.9 -1.2 0.195 -0.2 0.0 0.0 0.0``

.. _parametry_przejściowe:

Parametry przejściowe
=====================

Niektóre parametry były używane we wcześniejszych wersjach i nie są już
stosowane. Nie ma potrzeby jawnego ustawiania tych wartości.

.. _bpp_32:

bpp [32]
--------

Ilość bitów na kolor piksela. Dostępne są wartości 32 i 16. Większość
obecnych kart pracuje na kolorze 32-bitowym. Podanie wartości 16 może
uniemożliwić uruchomienie. Parametr zostanie najprawdopodobniej
usunięty.

(uwaga: parametr prehistoryczny, nie obslugiwany/ignorowany przez obecne
wersje symulatora)

.. _doubleambient_no:

doubleambient [no]
------------------

Podwójna jasność światła. W dotychczasowych EU07.EXE (do wersji 120)
były ustawiane dwa światła ambient (oświetlenie "w cieniu"): GL_LIGHT0
oraz GL_LIGHT_MODEL_AMBIENT. W efekcie prawie wszystko było maksymalnie
oświetlone, a efekty związane ze światłem diffuse (oświetlenie
kierunkowe "w słońcu") były praktycznie niezauważalne. Ponieważ używanie
dwóch świateł w ten sposób sprawia problemy, w nowszych wersjach
planowane jest użycie tylko jednego światła (GL_LIGHT0). Aby jednak na
sceneriach nie było zbyt ciemno przy starych wpisach **light**, należy
użyć **doubleambient yes**. Od wersji 324 wartością domyślną jest
**no**, a w przyszłych wersjach możliwość ustawienia obu świateł naraz
zostanie usunięta. Paczka Całościowa 2011 ma parametry światła
dostosowane do **doubleambient no**.

(uwaga: parametr prehistoryczny, nie obslugiwany/ignorowany przez obecne
wersje symulatora)

.. _freefly_no_0_0_0:

freefly [no 0 0 0]
------------------

Pierwsza wartość **yes** teoretycznie powinna ustawić tryb swobodnego
latania, jednak obsługa tego jest wyłączona. Kolejne trzy liczby używane
są do ustalenia współrzędnych kamery numer 0 i są używane jako
początkowa pozycja kamery w trybie **ghostview** (gdy zostanie wybrany
"pojazd" o takiej nazwie). Parametr pochodzi z czasów, gdy była tylko
jedna sceneria i nie dało się wyjść z pojazdu. Obecnie jego przydatność
jest znikoma i najpewniej zostanie usunięty.

.. _newaircouplers_yes:

newaircouplers [yes]
--------------------

Włączenie nowych węży powietrznych. Stare modele miały inne nazwy węży w
modelach i występowały problemy z ich dopasowaniem. Obecnie większość
taboru posiada już nowe węże. Parametr może być usunięty w przyszłych
wersjach.

.. _renderalpha_yes:

renderalpha [yes]
-----------------

Włączenie osobnej fazy renderowania dla obiektów z przezroczystymi
teksturami (z kanałem alfa). Obiekty przezroczyste muszą być renderowane
osobno (później), aby nie zasłaniały znajdujących się za nimi obiektów
nieprzezroczystych. Parametr był używany w początkowej fazie rozwoju
Symulatora i w przypadku błędnego działania drugiej fazy można
renderować wszystkie obiekty w jednej. Obsługa tego parametru została
całkowicie usunięta od wersji 200, ponieważ ilość i zakres zastosowania
tekstur z przezroczystością praktycznie uniemożliwiają używanie programu
przy wyłączonych przezroczystościach. Dwie fazy renderowania
(nieprzezroczyste, przezroczyste) działają zawsze, dodatkowo podzielone
są na pod-fazy (np. druty i linie renderowane są na samym końcu fazy
przezroczystych).

(uwaga: parametr prehistoryczny, nie obslugiwany/ignorowany przez obecne
wersje symulatora)

.. _skyenabled_yes:

skyenabled [yes]
----------------

Włącza niebo 3D.

.. _timeatmolight_yes:

timeatmolight [yes]
-------------------

Włącznie zmiany światła i mgły w zależności od czasu. Mechanizm nie
działał zadowalająco i został całkowicie wyłączony w wersji 135.
Zastąpił go tryb **movelight** (od wersji 162), który ustawia kierunek
padania promieni Słońca zależnie od podanego dnia roku oraz godziny.

.. _wireframe_no:

wireframe [no]
--------------

Włączenie powoduje wyświetlanie linii zamiast trójkątów terenu. Być może
kiedyś było przydatne przy testowaniu powstających scenerii.

.. _scalespeculars_yes:

scalespeculars [yes]
--------------------

Skalowanie parametru siły odblasków światła (specular highlights) dla
modeli 3d. Ponieważ parametr poprzednio obsługiwany nie był, większość
modeli ma go ustawiony na coś w stylu (150, 150, 150) wartość ta jest
zazwyczaj zbyt wysoka dla materiałów innych niż takie, które światło
odbijają doskonale (szyby, wypolerowany metal) W związku z tym domyślnie
exe modyfikuje podana wartość parametru specular do 25% wartości dla
geometrii nieprzezroczystej, i 150% podanej wartości dla geometrii
półprzezroczystej, która w założeniu powinny być wyłącznie szyby itp.

.. _ddsupperorigin_no:

ddsupperorigin [no]
-------------------

Ładowanie tekstur DDS z przyjętym standardowo originem górny-lewy
realizowane wewnętrznie poprzez flip wczytywanych tekstur. Ze względów
historycznych domyślna wartość pozostaje na niestandardowe *no*.

--------------

.. raw:: mediawiki

   {{MaSzyna wersje}}

`Kategoria: MaSzyna <Kategoria:_MaSzyna>`__

`Category:Exe <Category:Exe>`__ `Category:Formaty plików
symulatora <Category:Formaty_plików_symulatora>`__
