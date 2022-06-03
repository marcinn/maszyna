Plik charakterystyk (FIZ)
^^^^^^^^^^^^^^^^^^^^^^^^^

Plik charakterystyki (\*.fiz, dawniej \*.chk) zawiera parametry fizyczne
pojazdu, które są wykorzystywane przez symulator do symulowania jego
ruchu.

Wstęp
=====

Poprawny wpis wygląda następująco:

``Param. Category=train M=40000 Vmax=160 HeatingP=20 LightP=0.56``

Wpisy są zapisane czytelniej poniżej. Należy stosować poprawny format
przy pisaniu pliku fizyki. W przypadku podania tabelki jako przykładu,
należy nie wpisywać literek na samej górę, one są tylko w celu lepszej
ilustracji. Zostawienie literek może skutkować wysypaniem programu!

Wartości w [ ] są wartościami domyślnymi, a wartości w ( ) to są możliwe
wartości

Wartości pól przekroju połączeń w pneumatyce dla uproszczenia fizyki
stosowane są wartości w l/m (litr na metr), gdzie 1 l/m odpowiada polu
przekroju 1000 mm^3^. Dla przekroju 1 l/m i prędkości przepływu
powietrza 1 m/s otrzymuje się strumień objętości 1 l/s (litr na
sekundę).

.. _wspólne_wpisy_dla_wszystkich_typów:

Wspólne wpisy dla wszystkich typów
==================================

.. _param._sekcja_parametrów:

Param. (Sekcja parametrów)
--------------------------


.. note::
    *- - - !!! - - - Kropka na końcu, a nie dwukropek - - - !!! - - -*


**Category=**
    (train / road / ship / airplane)

**Type=[none]**
    *(none / pseudodiesel / ezt / sn61 / et22 / et40 /
    et41 / et42 / ep05 / 181 / 182 / dmu)*

    Typ pojazdu kolejowego:
        - *dmu* - szynobusy i spalinowe zespoły trakcyjne

**M=**
    Masa służbowa, *X masa w kG*

**Mred=**
    Masa zredukowana, *X masa w kG*

   **Vmax=** - Prędkość maksymalna, *X prędkość w km/h*

   **PWR=** - Moc własna pojazdu, *X moc w kW* - tylko jednostki z
   własnym napędem, tzn. lokomotywy oraz zestawy trakcyjne

   **SandCap=** - Masa piasku, *X masa w kG*

   **HeatingP=** - Moc użyta do ogrzewania, *X moc w kW*

   **LightP=** - Moc użyta do oświetlenia, *X moc w kW*

--------------

--------------

.. _load_sekcja_ładunków:

Load: (Sekcja ładunków)
-----------------------

   **MaxLoad=** Maksymalna ilość ładunku

   **LoadQ=** (pieces, tonns) Sposób liczenia ładunku, jednostki czy
   tony ładunku

   **OverLoadFactor=** Procentowa możliwość przeładowania pojazdu
   (całkowita ilość miejsc/ilość miejsc siedzących)

   **LoadAccepted=** Typ ładunku (pantstate - na start z podniesionym
   pantografem na elektrowozie) **Listę odseparujemy "," bez spacji.**

   **LoadMinOffset=** Przesunięcie, w metrach, modelu ładunku, przy
   minimalnym załadowaniu. Minus to przesunięcie w dół. Jeśli ładunków
   jest więcej niż wartości przesunięcia, ostatnia podana wartość będzie
   użyta dla pozostałych ładunków. **Listę odseparujemy "," bez
   spacji.**

   **LoadSpeed=** Prędkość ładowania na sekundę

   **UnLoadSpeed=** Prędkość rozładowania na sekundę

--------------

--------------

.. _dimensions_sekcja_wymiarów:

Dimensions: (Sekcja wymiarów)
-----------------------------

   **L=** Długość, w m

   **H=** Wysokość, w m

   **W=** Szerokość, w m

   **Cx=** Współczynnik czołowego oporu aerodynamicznego

   **Floor=** Wysokość podłogi nad główką szyny; do pozycjonowania
   uniwersalnych ładunków.

--------------

--------------

.. _wheels_sekcja_kół:

Wheels: (Sekcja kół)
--------------------

   **D=** Średnica kół napędowych, w m

   **Dl=** Średnica kół tocznych, w m (gdy inna od napędowych; dla
   parowozów)

   **Dt=** Średnica kół tocznych, w m (gdy inna od napędowych; dla
   parowozów)

   **AIM=** Moment bezwładności kół, w kGm^2

   **Tw=** Rozstaw szyn, w m

   **Axle=** (2'2' / 3'3' / Bo'Bo' / Co'Co') Układ osi

   **Ad=** Rozstaw osi na wózku

   **Bd=** Rozstaw czopów, w m; Dla bezwózkowych, rozstaw osi

   **Rmin=** Minimalny promień łuku po którym może się dany pojazd
   poruszać, w m

   **BearingType=** (Roll / Slide) Typ łożysk używany w danym pojeździe

--------------

--------------

.. _brake_sekcja_hamulcowa:

Brake: (Sekcja hamulcowa)
-------------------------

   **BrakeValve=** *( / W / W_Lu_VI / W_Lu_L / W_Lu_XR / K / Kg / Kp /
   Kss / Kkg / Kkp / Kks / Hikg1 / Hikss / Hikp1 / KE / SW / EStED /
   NESt3 / ESt3 / LSt / ESt4 / ESt3AL2 / EP1 / EP2 / M483 / CV1_L_TR /
   CV1 / CV1_R / Other)* - Podtyp hamulca zespolonego / typ zaworu
   hamulca

   **NBpA=** *(0 / 1 / 2 / 4)* - Liczba elementów ciernych na oś

   **MBF=** - Maksymalna siła hamowania (głównie dla hamulców
   uproszczonych)

   **Size=** - Rozmiar zaworu rozrządczego z rodziny ESt

   **TBF=** - Siła hamowania magnetycznego hamulca szynowego, *X = siła
   w kN*

   **MaxBP=** - Maksymalne ciśnienie w cylindrze hamulcowym, *X =
   ciśnienie w bar*

   **MaxASBP=** - Ciśnienie przyhamowania przeciwpoślizgowego, *X =
   ciśnienie w bar*

   **BCN=** - Liczba cylindrów hamulcowych, *X = liczba w sztukach*

   **MaxLBP=** - Maksymalne ciśnienie hamulca dodatkowego, *X =
   ciśnienie w bar*

   **TareMaxBP=** - Maksymalne ciśnienie hamulca przy nastawie próżny,
   *X = ciśnienie w bar*

   **MedMaxBP=** - Maksymalne ciśnienie hamulca w stanie średni (ładowny
   I), *X = ciśnienie w bar*

   **BCR=** - Średnica cylindra hamulcowego, *X = średnica w m*

   **BCD=** *(brakecyldist)* - Skok tłoka cylindra hamulcowego przy
   hamowaniu, *X = skok tłoka w m*

   **BCS=** *(brakecylspring)* - Siła nacisku sprężyny powrotnej
   cylindra hamulcowego, *X = siła w kN*

   **BSA=** *(brakeslackadj)* - Siła nacisku nastawiacza skoku tłoka, *X
   = siła w kN*

   **BRE=** *(brakerigeff)* - Sprawność przekładni hamulcowego w czasie
   jazdy

   **BCM=** - Przełożenie przekładni hamulcowej od cylindra do
   wszystkich obsługiwanych kół - gdy jest niezmienna

   **BCMlo=** - Przełożenie przekładni hamulcowej w stanie próżnym

   **BCMHi=** - Przełożenie przekładni hamulcowej w stanie ładownym

   **BVV=** *(brakevvolume)* - Pojemność zbiornika pomocniczego, *X =
   pojemność w l*

   **BM=** *(brakemethod)* *(P10-Bg / P10-Bgu / FR513 / FR510 / Cosid /
   P10yBg / P10yBgu / Disk1 / Disk1+Mg / Disk2]* - Rodzaj materiału pary
   ciernej hamulca

   **RM=** *(rapidmult)* - Stosunek ciśnienia wysokiego do niskiego
   stopnia hamowania przy trybie Rapid

   **RV=** - Prędkość przełączania wysokiego stopnia hamowania Rapid, *X
   = prędkość w km/h*

   **HiPP=** - Maksymalne robocze ciśnienie w PG, *X = ciśnienie w bar*

   **LoPP=** - Minimalne robocze ciśnienie w PG, *X = ciśnienie w bar*

   **Vv=** - Pojemność zbiornika głównego pojazdu, *X = pojemność
   zbiornika w m3*

   **MinCP=** - Ciśnienie załączania sprężarki, *X = ciśnienie w bar*:

      *Gdy sprężarka jest napędzana ze silnika spalinowego, po
      osiągnięciu MaxCP, powietrze jest upuszczane do tej wartości*

   **MaxCP=** - Ciśnienie wyłączania sprężarki, *X = ciśnienie w bar*:

      *Gdy sprężarka jest napędzana ze silnika spalinowego, osiąga to
      ciśnienie, a potem upuszcza do MinCP*

   **MinCP_B=** - Ciśnienie załączania sprężarki, gdy aktywna jest
   kabina nr 2; podanie tej wartości powoduje, że wartość podana jako
   "MinCP" odnosi się do aktywnej kabiny nr 1 *X = ciśnienie w bar*:

   **MaxCP_B=** - Ciśnienie wyłączania sprężarki, gdy aktywna jest
   kabina nr 2; podanie tej wartości powoduje, że wartość podana jako
   "MaxCP" odnosi się do aktywnej kabiny nr 1 *X = ciśnienie w bar*:

   **CompressorSpeed=** - Wydajność sprężarki, *X = wydajność w m3/s*

   **CompressorPower=** - Zasilanie sprężarki:

      *Main* - z obwodu WN - nie wymaga przetwornicy
      *Converter* - automatycznie - po załączeniu przetwornicy
      *Engine* - automatycznie - wraz z pracą silnika
      *Coupler1* - zasilane z przetwornicy w innym pojeździe od strony
      sprzęgu 1
      *Coupler2* - zasilane z przetwornicy w innym pojeździe od strony
      sprzęgu 2

   **CompressorTankValve=** - Zachowanie przy przekroczeniu ciśnienia w
   zbiorniku głównym, gdy sprężarka napędzana jest ze silnika
   spalinowego:

      *No* - sprężarka pompuje do atmosfery, zbiornik powoli sam się
      opróżnia, po osiągnięciu MinCP, sprężarka bije do zbiornika
      *Yes* - sprężarka cały napełnia zbiornik, zawór spuszcza ciśnienie
      ze zbiornika przy osiągnięciu MaxCP

   **AirLeakRate=** - Modyfikator prędkości wycieku powietrza z
   elementów układu hamulcowego; prędkość standardowa = 1.0

   **MaxEVP=** - Ciśnienie otwarcia (wyższe) zaworu bezpieczeństwa
   zbiornika głównego, *X = ciśnienie w bar*

   **MinEVP=** - Ciśnienie zamknięcia (niższe) zaworu bezpieczeństwa
   zbiornika głównego, *X = ciśnienie w bar*

   **EVArea=** - Przekrój wylotowy zaworu bezpieczeństwa zbiornika
   głównego, *X = przekrój w l/m*

   **UBB1=** *(brak wpisu)* - Istnienie uniwersalnego guzika hamulcowego
   1:

      *1* - odluźniacz
      *2* - odblok PG / mostkowanie hamulca bezpieczeństwa
      *4* - impuls wysokiego ciśnienia
      *8* - przycisk asymilacji / kontrolowanego przeładowania
      *16* - przycisk przyhamowania przeciwpoślizgowego

   **UBB2=** *(brak wpisu)* - Istnienie uniwersalnego guzika hamulcowego
   2

   **UBB3=** *(brak wpisu)* - Istnienie uniwersalnego guzika hamulcowego
   3

   **LPOn=[-1]** - Ciśnienie zablokowania przewodu głównego

   **LPOff=[-1]** - Ciśnienie odblokowania przewodu głównego

   **HandlePipeUnlockPos=[-3]** - Minimalna pozycja kranu odblokowująca
   przewód główny

   **ReleaserPowerPosLock=** *(Yes / No)* - Uzależnienie możliwości
   popełnienia PG od pozycji nastawnika jazdy:

      *Yes (domyślnie dla pojazdów z napędem spalinowym lub
      spalinowo-elektrycznym!)* - uzależnienie
      *No (domyślnie dla pozostałych pojazdów trakcyjnych!)* - brak
      uzależnienia

--------------

--------------

.. _springbrake_sekcja_hamulca_sprężynowego:

SpringBrake: (Sekcja hamulca sprężynowego)
------------------------------------------

   **Volume=** Objętość komór siłowników sprężynowych, l

   **MBF=** Współczynnik siły nacisku, kN/bar

   **MaxSP=** Maksymalne ciśnienie napełniania siłowników sprężynowych,
   bar

   **ResetP=** Ciśnienie zazbrojenia siłowników sprężynowych, bar

   **MinFP=** Ciśnienie pełnego zrównoważenia nacisku sprężyny, bar

   **PressOff=** Ciśnienie przełączenia sygnalizacji hamulca w stan
   wyluzowania, bar

   **PressOn=** Ciśnienie przełączenia sygnalizacji hamulca w stan
   zahamowania, bar

   **ValveOnArea=** Przekrój zaworu opróżniającego siłownik, l/m

   **ValveOffArea=** Przekrój zworu napełniającego siłownik, l/m

   **ValvePNBArea=** Przekrój zaworu łączągo z hamulcem pneumatycznym,
   l/m

   **MTC=** Flaga bitowa wymaganego sposobu łączenia sprzęgu, aby
   przesyłać sygnały sterujące hamulcem w trakcji wielokrotnej, np. 132
   dla konieczności połączenia wózkiem Jacobsa - umożliwia to
   przesyłanie komend np. w obrębie jednostki (połączonej na stałe), ale
   nie przesyłania ich do kolejnych ukrotnionych jednostek

--------------

--------------

.. _blending_sekcja_łączenia_trybów_hamowania:

Blending: (Sekcja łączenia trybów hamowania)
--------------------------------------------

   **MED_Vmax=** Prędkość maksymalna dla obliczeń chwilowej siły
   hamowania EP w MED. Wartość wyrażona w km/h

   **MED_Vmin=** Prędkość minimalna dla obliczeń chwilowej siły
   hamowania EP w MED. Wartość wyrażona w km/h

   **MED_Vref=** Prędkość referencyjna dla obliczeń dostępnej siły
   hamowania EP w MED. Wartość wyrażona w km/h

   **MED_amax=** Maksymalne opóźnienie hamowania służbowego w MED.
   Wartość wyrażona w m/s2

   **MED_EPVC=** (Yes, No) Czy korekcja hamowania EP z uwzględnieniem
   prędkości jazdy gdy przestaje działać hamulec ED

   **MED_Ncor=** (Yes, No) Czy korekcja hamowania EP z uwzględnieniem
   wpływu nacisku klocków na współczynnik tarcia

   **MED_MinBrakeReqED=** Minimalna wartość żądania hamowania (z zakresu
   0..1), przy której włącza się hamulec ED

   **MED_FrEDFactor=[1]** Mnożnik siły hamowania ED w obliczeniach
   łączenia trybów hamowania EP+ED - *zmienna jest liczbą rzeczywistą -
   float*

   **MED_FirstDelayED=[0]** Opóźnienie pomiędzy wdrożeniem hamowania a
   uruchomieniem hamowania ED. Wartość wyrażona w sekundach - *zmienna
   jest liczbą rzeczywistą - float*

   **MED_ScndDelayED=[0]** Opóźnienie pomiędzy kolejnymi etapami
   zwiększania siły hamowania ED. Wartość wyrażona w sekundach -
   *zmienna jest liczbą rzeczywistą - float*

--------------

--------------

.. _dcemued_sekcja_konfiguracji_hamulca_eped_dla_pojazdów_z_silnikami_szeregowymi:

DCEMUED: (Sekcja konfiguracji hamulca EP+ED dla pojazdów z silnikami szeregowymi)
---------------------------------------------------------------------------------

   **CouplerCheck=** W których sprzęgach sprawdzać stan hamowania ED
   zespołu - suma bitowa z 1 (przód) i 2 (tył)

   **EP_min_Im=** Prąd hamowania ED, przy którym już zostaje wyłączony z
   działania hamulec EP członu, w A - wartość polecana dla członów
   silnikowych

   **EP_max_Vel=** Prędkość, poniżej której załącza się hamulec EP
   członu przy hamowaniu ED, w km/h - wartość polecana dla członów
   tocznych

   **EP_delay=** Czas zwłoki ewentualnego zadziałania hamulca EP przy
   hamowaniu ED, w s

--------------

--------------

.. _doors_sekcja_drzwi:

Doors: (Sekcja drzwi)
---------------------

   **OpenCtrl=** *(Passenger / AutomaticCtrl / DriverCtrl / Conductor /
   Mixed)* - Sposób kontroli otwierania drzwi:

      *Passenger* - **typ domyślny przy braku definicji**; drzwi są
      otwierane ręcznie, ignorują ewentualne zdalne komendy
      *AutomaticCtrl* - drzwi działają automatycznie
      *DriverCtrl* - drzwi kontrolowane są przez mechanika prowadzącego
      skład, i reagują tylko na zdalne komendy
      *Conductor* - drzwi kontrolowane są przez kierownika pociągu,
      reagują tylko na zdalne komendy
      *Mixed* - drzwi mogą być otwierane zarówno ręcznie, jak i zdalnie

   **CloseCtrl=** *(Passenger / AutomaticCtrl / DriverCtrl / Conductor /
   Mixed)* - Sposób kontroli zamykania drzwi:

      *Passenger* - **typ domyślny przy braku definicji**; drzwi są
      zamykane ręcznie, ignorują ewentualne zdalne komendy
      *AutomaticCtrl* - drzwi działają automatycznie
      *DriverCtrl* - drzwi kontrolowane są przez mechanika prowadzącego
      skład, i reagują tylko na zdalne komendy
      *Conductor* - drzwi kontrolowane są przez kierownika pociągu,
      reagują tylko na zdalne komendy
      *Mixed* - drzwi mogą być zamykane zarówno ręcznie, jak i zdalnie

   **DoorStayOpen=** - Czas przez jaki drzwi automatyczne pozostają
   otwarte, w sekundach

   **OpenSpeed=** - Prędkość animacji otwierania drzwi

   **CloseSpeed=** - Prędkość animacji zamykania drzwi

   **DoorMaxShiftL=** - Szerokość (lub kąt) pełnego otwarcia drzwi
   lewych

   **DoorMaxShiftR=** - Szerokość (lub kąt) pełnego otwarcia drzwi
   prawych

   **DoorOpenMethod=** *(Shift / Rotate / Fold / Plug)* - Typ drzwi:

      *Shift* - przesuwne
      *Rotate* - obrotowe **domyślne**
      *Fold* - obrotowo-składane
      *Plug* - odskokowo-przesuwne

   **DoorVoltage=[0]** *(0 / 12 / 110)* - Napięcie obwodu NN wymagane do
   sterowania drzwiami:

      *0* = 0V / otwieranie mechaniczne
      *12* = 12V
      *110* = 110V

   **DoorClosureWarning=[No]** *(Yes / No)* - Buczek przed zamknięciem
   drzwi

   **DoorClosureWarningAuto=[No]** *(Yes / No)* - Przy wciśnięciu
   przycisku zamykania drzwi, załącza się buczek, po puszczeniu,
   następuje zamykanie drzwi

   **DoorCloseDelay=** - Opóźnienie zamykania drzwi, w sekundach.

   **DoorBlocked=** *(Yes / No)* - Czy jest blokada drzwi

   **DoorMaxShiftPlug=** - Wielkość odskoku dla drzwi typu Plug
   (odskokowi-przesuwnych), w metrach

   **DoorPermitList=** ''(konfiguracja|konfiguracja|konfiguracja|etc) -
   Konfiguracja programatora drzwi. Liczba w zakresie 0-3 gdzie 0=brak
   zezwoleń, 1=zezwolenie obsługi drzwi lewych, 2=prawych, 3=wszystkich

   **DoorPermitListDefault=** - Domyślnie ustawiona pozycja pokrętła z
   zestawu zdefiniowanego przez wpis DoorPermitList, pozycje numerowane
   są od 1

   **DoorAutoCloseRemote=[No]** *(Yes / No)* - Automatyczne zamykanie
   drzwi otwartych centralnie po upływie czasu

   **DoorAutoCloseVel=[-1]** - Prędkość przy jakiej następuje
   automatyczne zamykanie drzwi, domyślnie ustawiona na -1, czyli brak
   automatycznego zamykania.

   **PlatformMaxSpeed=** ?

   **PlatformMaxShift=** - Wartość przesunięcia w metrach lub kąt obrotu
   dla całkowicie rozłożonego stopnia

   **PlatformSpeed=** - Prędkość animacji stopnia, gdzie 1.0 odpowiada
   animacji trwającej jedna sekundę, wartość 0.5 dwom sekundom, itp.

   **PlatformOpenMethod=** *(Shift, Rot)* - Typ animacji stopnia

   **MirrorMaxShift=** - Kąt obrotu dla całkowicie rozłożonego lusterka

   **MirrorVelClose=** - Prędkość pojazdu trakcyjnego przy której
   następuje automatyczne zamykanie luster zewnętrznych

   **DoorOpenDelay=** - Opóźnienie otwarcia drzwi, *X = opóźnienie w
   sekundach*

   **DoorOpenWithPermit=** - Otwarcie drzwi w pociągu poprzez
   przytrzymanie impulsowego przycisku zezwolenia otwarcia, *X = sekund
   przytrzymania przycisku*

   **DoorNeedPermit=[No]** *(Yes / No)* - Otwieranie drzwi przez
   pasażerów wymaga udzielenia zgody przez maszynistę.

   '''DoorsPermitLightBlinking=[0] - Miganie lampki podania zezwolenia
   otwarcia drzwi na stronę:

      *0* - światło ciągłe
      *1* - światło ciągłe, gdy otwarte którekolwiek drzwi lub wysunięty
      którykolwiek stopień; miganie tylko przy podanym zezwoleniu
      *2* - światło ciągłe, gdy otwarte którekolwiek drzwi; miganie przy
      podanym zezwoleniu; stan wysunięcia stopnii nie ma znaczenia
      *3* - miganie niezależnie od stanu otwarcia drzwi i wysunięcia
      stopnia

--------------

--------------

.. _buffcoupl._sekcja_sprzęgów:

BuffCoupl. (Sekcja sprzęgów)
----------------------------

--------------

*- - - !!! - - - Kropka na końcu, a nie dwukropek - - - !!! - - -*

--------------

   **CType=** - Typ sprzęgu:

      *Automatic* - sprzęg automatyczny, np Schafenbega, BSI, SA3, AAR,
      itd.
      *Screw* - sprzęg śrubowy
      *Chain* - łańcuch
      *Bare* - hak samochodowy (ignoruje wartości z *.fiz*)
      *Articulated* - połączenie stałe (ignoruje wartości z *.fiz*)

   **kB=** - Stała sprężystości zderzaka, *X = % tłumienności (1.0)*

   **DmaxB=** - Tolerancja ścisku zderzaka *(0.1)*

   **FmaxB=** - Tolerancja rozciągania zderzaka *(1000.0)*

   **kC=** - Stała sprężystości sprzęgu, *X = % tłumienności (1.0)*

   **DmaxC=** - Tolerancja ścisku sprzęgu *(0.1)*

   **FmaxC=** - Tolerancja rozciągania sprzęgu *(1000.0)*

   **beta=** - Tłumienie *(0.0)*

   **AllowedFlag=** - Numer sprzęgowy, *X = suma bitowa liczb
   odpowiadających aktywowanym sprzęgom*:

      *1* - sprzęg mechaniczny
      *2* - przewód hamulcowy
      *4* - przewodu sterowania wielokrotnego
      *8* - przewody wysokiego napięcia
      *16* - przejście
      *32* - powietrze 8 bar
      *64* - ogrzewanie
      *128* - blokada rozprzęgnięcia/sprzęg stały
      *256* - *(tylko wraz ze sprzęgiem stałym!)* - przewód elektryczny
      24V
      *512* - *(tylko wraz ze sprzęgiem stałym!)* - przewód elektryczny
      110V
      *1024* - *(tylko wraz ze sprzęgiem stałym!)* - przewód elektryczny
      3x400V **Na razie brak obsługi tego sprzęgu**

   **AutomaticFlag=** - Numer sprzęgowy automatycznie łączony przy
   zatrzaśnięciu sprzęgu automatycznego

   **PowerFlag=** - Napięcia przenoszone sprzęgiem stałym, *X = suma
   bitowa następujących*:

      *256* - 24V
      *512* - 110V
      *1024* - 3x400V

   **PowerCoupling=[128]** - Numer sprzęgowy sprzęgu wymaganego by
   przekazać napięcia 24/110/3x400V do sąsiedniego pojazdu, *X = flaga
   bitowa sprzęgu*. Domyślnie jako sprzęg stały

   **ControlType=** - Identyfikator tekstowy, będący abstrakcją rodzaju
   komunikacji i/lub połączenia używanego przy przesyłaniu sygnałów
   sterowania wielokrotnego. Przy sprzęganiu pojazdów zapięcie
   ukrotnienia możliwe jest tylko miedzy sprzęgami z tym samym
   identyfikatorem.

--------------

--------------

.. _light_sekcja_oświetlenia:

Light: (Sekcja Oświetlenia)
---------------------------

   **Light=** (Generator) ?

   **LGeneratorEngine=** (WheelsDriven) ?

   **LMaxVoltage=** Maksymalne napięcie, w Woltach

   **AlterLight=** (Accu) ?

   **AlterLMaxVoltage=** (24) ?

   **AlterLCap=** (495) ?

   **AlterLRS=** (Generator) ?

--------------

--------------

.. _clima_sekcja_ogrzewania:

Clima: (Sekcja Ogrzewania)
--------------------------

   **Heating=** Źródło zasilania dla ogrzewania

      *Transducer* - ??
      *Generator* - Z prądnicy
      *Accumulator* - ??
      *CurrentCollector* - Bezpośrednio z pantografu (bez wł. wył.
      szyb.)
      *PowerCable* - Z przewodu zasilania/ogrzewania
      *Heater* - ??
      *Internal* - ??
      *Main* - Zasilanie gdy wył. szyb. jest zał. i pantograf
      podniesiony

   Parametry dla **Heating=Generator**\

      **HGeneratorEngine=** (Main) Typ silnika napędzającego prądnice;
      na ten moment faktycznie obsługiwany jest tylko typ Main
      oznaczajacy spięcie z 'głownym' silnikiem pojazdu
      **HGeneratorMinRPM=** Dolna wartość zakresu 'roboczego' prądnicy,
      w obrotach na minutę
      **HGeneratorMinVoltage=** Napięcie generowane przy dolnej roboczej
      prędkosci obrotowej
      **HGeneratorMaxRPM=** Górna wartość zakresu 'roboczego' prądnicy,
      w obrotach na minutę
      **HGeneratorMaxVoltage=** Napięcie generowane przy górnej roboczej
      prędkości obrotowej

   Parametry dla **Heating=PowerCable**\

      **HPowerTrans=** ( ElectricPower / SteamPower ) Postać
      dostarczanej energii, gdzie Electric...=Prąd, Steam...=Para wodna)

   **HMaxVoltage=** Napięcie elektrycznego ogrzewania, w Woltach

--------------

--------------

.. _security_sekcja_systemu_bezpieczeństwa:

Security: (Sekcja Systemu Bezpieczeństwa)
-----------------------------------------

   **AwareSystem=** - Definicja obecności systemów bezpieczeństwa w
   pojeździe trakcyjnym, *(Active, CabSignal, SeparateAcknowledge)*

   **AwareDelay=** - Czas pomiędzy aktywacjami czuwaka w sekundach.

   **EmergencyBrakeDelay=** - Czas od aktywacji sygnału dźwiękowego do
   aktywacji hamulca nagłego w sekundach.

   **EmergencyBrakeWarningSignal=** - Definicja opcjonalnej,
   automatycznej aktywacji syreny pojazdu przy wdrożonym hamowaniu
   awaryjnym, *suma bitowa liczb odpowiadających aktywowanym syrenom*:

      *1:* syrena niskotonowa
      *2:* syrena wysokotonowa
      *4:* gwizdawka

   **RadioStop=** - Definicja działania sygnału Radio-Stop, *(Yes, No)*

   **SoundSignalDelay=** Czas do aktywacji sygnału dźwiękowego w
   sekundach.

   **MagnetLocation=** Odległość czujnika SHP od czoła pojazdu w
   metrach. Domyślnie połowa długości pojazdu.

   **MaxHoldTime=** Czas przytrzymania przycisku CA, po którym włączają
   się lampki ostrzegawcze

--------------

--------------

.. _cntrl._sekcja_sterowania:

Cntrl. (Sekcja sterowania)
--------------------------

--------------

*- - - !!! - - - Kropka na końcu, a nie dwukropek - - - !!! - - -*

--------------

   **FuelStart=[Manual]** *(Automatic / Manual)* - Sposób uruchomienia
   pompy paliwowej

   **OilStart=[Manual]** *(Automatic / Manual / Mixed)* - Sposób
   uruchomienia pompy oleju

   **WaterStart=** *(Manual / Battery)* - Metoda uruchomienia pompy
   wodnej, z przełącznika, czy wraz z baterią

   **MainInitTime=** - Czas od otrzymania wysokiego napięcia do
   możliwości uruchomienia wyłącznika szybkiego/głównego obwodu, *X -
   czas w sekundach*

   **BrakeSystem=[Individual]** *(Pneumatic / ElectroPneumatic /
   Individual)* - Rodzaj zastosowanego hamulca zespolonego

   **BCPN=** - *(brakectrlposno)* - ?

   **BrakeDelays=** - Możliwe nastawy opóźnienia hamulca:

      *GPR*
      *GPR+Mg*
      *GP*
      *G*
      *PR*
      *PR+Mg*
      *P*
      *R*

   **BrakeDelay1=** - ?

   **BrakeDelay2=** - ?

   **BrakeDelay3=** - ?

   **BrakeDelay4=** - ?

   **BrakeOpModes=** - Tryb pracy hamulca:

      *PN* - Tylko kontrola pneumatyczna i próba szczelności
      *PNEPMED* - Kontrola pneumatyczna, elektropnumatyczna,
      elektrodynamiczna, i próba szczelności

   **BrakeHandle=** *(FV4a / D2 / MHZ_EN57 / MHZ_K5P / MHZ_K8P / MHZ_6P
   / M394 / Knorr / Westinghouse / FVel6 / St113 / FVE408)* - Typ kranu
   na hamulcu pociągowym

   **HAO=[N/A]** - asymilacja się automatycznie włącza na pozycji FS

   **HMO=[N/A]** - napełnianie uderzeniowe na przycisk

   **OMP=[N/A]** - maksymalny wzrost ciśnienia w przewodzie głównym
   podczas asymilacji hamulca, *X [bar]*

   **OPD=[N/A]** - prędkość spadku ciśnienia w przewodzie głównym po
   asymilacji hamulca, *X [bar/s]*

   **HGDP1=[N/A]** - Handle_GenericDoubleParameter1 - parametr ogólny,
   dla MHZ to wielkość impulsu wysokiego ciśnienia

   **HGDP2=[N/A]** - Handle_GenericDoubleParameter2 - współczynnik
   zwiększenia napełniania. Dla wartości domyślnej przekrój w
   impulsowych zaworach maszynisty 5-cio i 6-cio pozycyjnych wynosi
   1+HGDP2 przekroju nominalnego

   **MaxBPMass=** - ?

   **ASB=** *(Manual / Automatic / Yes)* ?

   **LocalBrake=** *(ManualBrake / PneumaticBrake / HydraulicBrake)* -
   Sposób przenoszenia siły na hamulcu pomocniczym

   **LocBrakeHandle=** *(FD1 / Knorr / Westinghouse)* - Typ kranu na
   hamulcu pomocniczym

   **ManualBrake=[No]** ''(Yes / No) - Definicja obecności ręcznego
   hamulca postojowego

   **DynamicBrake=** *(Passive / Switch / Reversal / Automatic)* ?

   **DBAM=** - Liczba amperomierzy wskazujących prąd hamowania
   elektrodynamicznego

   **MCPN=** - Liczba pozycji nastawnika jazdy, nie licząc pozycji
   początkowej, tzn. 0

   **SCPN=** - Liczba pozycji nastawnika bocznikowania, nie licząc
   pozycji początkowej, tzn. 0

   **SCIM=[N/A]** *(1)* - Bocznik jako pozycje nastawnika jazdy

   **DirChangeMaxPos=[N/A]** - Maksymalna pozycja nastawnika jazdy, dla
   której dozwolona jest zmiana kierunku

   **EIMCtrlAddZeros=[No]** *(Yes / No)* - Czy nastawnik ma dzielone
   pozycje neutralne, na *0 Jazdy* i *0 Hamowania*

   **EIMCtrlEmergency=[No]** *(Yes / No)* - Definiowanie możliwości
   aktywacji hamowania nagłego głównym nastawnikiem pojazdu trakcyjnego

   **EIMCtrlType=[0]** *(0 / 1 / 2 / 3)* - Typ zadajnika jazdy

   **AutoRelay=[No]** *(Optional / Yes / No)* - Przekaźnik samoczynnego
   rozruchu

   **CoupledCtrl=[No]** *(Yes / No)* - Czy boczniki traktowane są jako
   pozycje nastawnika głównego

   **Camshaft=[No]** *(Yes / No)* - Czy pojazd ma wał kułakowy:

      *Yes (domyślnie dla elektrycznych zespołów trakcyjnych!)* - tak
      *No* - nie

   **LocalBrakeTraxx=[N/A]** *(Yes)* - Traxxowy hamulec pomocniczy

   **ScndS=[No]** *(Yes / No)* - Bocznikowanie na pozycji szeregowej
   przy pracy PSR

   **IniCDelay=** - Opóźnienie pomiędzy załączeniem pozycji 1 nastawnika
   a kolejnymi, bądź pomiędzy 1% mocy a resztą, *X = czas w sekundach*

   **SCDelay=** *(ctrldelay)* - Zwiększenie pozycji nastawnika w ciągu
   sekundy lub opóźnienie zamknięcia dalszych styczników rozruchowych,
   *X = czas w sekundach*

   **SCDDelay=** *(ctrldowndelay)* - Opóźnienie otwarcia styczników
   rozruchowych, *X = czas w sekundach*

   **FSCircuit=[No]** *(Yes / No)* - Szybkie wejście na pozycję
   szeregową *(Tylko dla 303E)*

   **SBD=** *(stopbrakedecc)* - ?

   **BatteryStart=[N/A]** *(N/A / Disabled)* - Sposób załączenia
   baterii:

      *N/A* - bateria znajduje się w pojeździe
      *Disabled* - brak baterii w pojeździe (zasilanie z innego wagonu,
      danym sprzęgiem elektrycznym)

   **ConverterStart=[Manual]** - Sposób załączenia przetwornicy:

      *Manual* - przyciskiem
      *Automatic* - wraz z wyłącznikiem głównym
      *Direction* - po nastawieniu nawrotnika
      *Disabled* - brak przetwornicy w pojeździe (zasilanie z innego
      wagonu, danym sprzęgiem elektrycznym)

   **ConverterStartDelay=** - W przypadku automatycznego załączania
   przetwornicy czas opóźnienia załączenia, *X = czas w sekundach*

   **ConverterOverloadRelayStart=** *(Converter / Manual)* - Reset
   przekaźnika nadmiarowego przetwornicy:

      *Converter (domyślnie w elektrycznych zespołach trakcyjnych!)* -
      wyłączeniem przetwornicy
      *Manual (domyślnie w lokomotywach!* - osobnym przełącznikiem

   **ConverterOverloadWhenMainIsOff=** *(Yes / No)* Czy reset
   przekaźnika nadmiarowego przetwornicy wymaga załączenia wyłącznika
   szybkiego:

      *Yes (domyślnie w elektrycznych zespołach trakcyjnych!)* - tak
      *No (domyślnie w pozostałych!)* - nie

   **PantCompressorStart=[Manual]** *(Manual / Automatic / Mixed)* -
   Sposób załączenia sprężarki pantografów

   **PantAutoValve=** *(Yes / No)* - Czy zawór sprężarki pantografów
   jest automatyczny:

      *Yes (domyślnie w elektrycznych zespołach trakcyjnych!)* - tak
      *No (domyślnie w pozostałych!)* - nie

   **MotorBlowersStart=** - Sposób uruchomienia wentylatorów silników
   trakcyjnych:

      *Manual* - start z przełącznika
      *Automatic* - start wraz z silnikiem
      *Mixed* - start albo z przełącznika, albo wraz z silnikiem
      *Battery* - start wraz z załączeniem baterii
      *Converter* - start wraz z załączeniem przetwornicy

   **PantEPValveStart=[Automatic]** ''(Automatic / Manual / Mixed) -
   Metoda kontroli zaworu elektropneumatycznego pantografów. Domyślnie
   automatyczna - pozostałe metody pozwalają na sterowanie zaworem
   poprzez urządzenia pantselected_sw: oraz pantselectedoff_sw:

   **PantEPValveSpring=[Yes]** *(Yes / No)* - Typ zaworu
   elektropneumatycznego pantografów. Domyślnie monostabilny - w
   pozostałych przypadkach bistabilny

   **PantValveStart=[Manual]** *(Automatic / Manual / Mixed)* - Metoda
   kontroli zaworu indywidualnego pantografu. Domyślnie ręczna -
   sterowanie zaworem poprzez urządzenia pantfront_sw: pantfrontoff_sw:
   (pantograf przedni) oraz pantrear_sw: pantrearoff_sw: (pantograf
   tylny) lub alternatywnie urządzeniem pantselect_sw:

   **PantValveSpring=[Yes]** *(Yes / No)* - Typ zaworu indywidualnego
   pantografu. Domyślnie monostabilny - w pozostałych przypadkach
   bistabilny

   **PantValveSolenoid=[Yes]** *(Yes / No)* - Źródło zasilania zaworu.
   Domyślnie prądem elektrycznym - w pozostałych przypadkach
   mechanicznie czyli niezależnie od stanu obwodu NN pojazdu

   **CompartmentLightsStart=[N/A]** *(Manual)* - Kontrola oświetlenia w
   przedziałach pasażerskich przez maszynistę

   **GroundRelayStart=** - Reset przekaźnika ziemnozwarciowego po
   odłączeniu baterii:

      *Manual (domyślnie dla Electricseriesmotor i Dieselelctric!)* -
      ręcznie z przełącznika
      *Automatic (domyślnie dla elektrycznych zespołów trakcyjnych!)* -
      automatycznie

   **MainStart=** - Metoda zamknięcia wyłącznika szybkiego

      ''Automatic - automatycznie po otrzymaniu wysokiego napięcia

   **ReleaseParkingBySpringBrake=[No]** *(Yes / No)* - Luzowanie hamulca
   postojowego przy aktywacji hamulca sprężynowego

   **ReleaseParkingBySpringBrakeWhenDoorIsOpen=** - Luzowanie hamulca
   postojowego przy aktywacji hamulca sprężynowego, kiedy drzwi są
   otwarte

   **SpringBrakeCutsOffDrive=** *(Yes / No)* - Aktywacja hamulca
   sprężynowego wyłącza układ napędowy

   **SpringBrakeDriveEmergencyVel=**- Maksymalna prędkość jazdy z
   zaciągniętym hamulcem sprężynowym, po przekroczeniu której następuje
   nagłe hamowanie pojazdu

   **AutomaticCabActivation=[Yes]** *(Yes / No)* - automatyczna
   aktywacja kabiny po wejściu do niej (tzw. zmostkowany rozrząd)

   **InactiveCabFlag=[0]** - Definicja automatycznych akcji powiązanych
   z aktywacją i dezaktywacją kabiny, *suma bitowa liczb odpowiadających
   aktywowanym funkcjom*:

      *1:* wdrożenie hamowania nagłego przy dezaktywacji
      *2:* automatyczne schowanie i rozłożenie lusterek (obecnie nie
      działa)
      *4:* automatyczne podniesienie drugiego pantografu przy
      dezaktywacji kabiny (docelowo również wdrożenie stanu przełącznika
      pantografu po aktywacji)
      *8:* automatyczne załączenie świateł końca pociągu (sygnał Pc5 -
      dwa czerwone) na obu czołach po dezaktywacji kabiny; zastosowanie
      stanu przełącznika świateł przy aktywacji kabiny
      *16:* automatyczne nadanie uprawnień na obie strony przy przy
      dezaktywacji kabiny (docelowo również wdrożenie stanu przełącznika
      zezwolenia na drzwi po aktywacji
      *32:* załączenie hamulca sprężynowego przy dezaktywacji kabiny
      *64:* wyluzowanie hamulca sprężynowego przy aktywacji kabiny
      *128:* wyzerowanie kierunku ruchu przy dezaktywacji kabiny

--------------

--------------

Tabelka hamulcowa na nowej linii, bezpośrednio poniżej sekcji Cntrl.

| ````
| ``A   B   C       D   E``
| ``-1 0.7  -1  15 Pneumatic``
| `` 0 0.5  -1  9  Pneumatic``
| `` 1 0.46 -1  9  Pneumatic``
| `` 2 0.42 -1  9  Pneumatic``
| `` 3 0.38 -1  9  Pneumatic``
| `` 4 0.34 -1  9  Pneumatic``
| `` 5 0.29 -1  9  Pneumatic``
| `` 6 0    -1  15 Pneumatic``

A - Nr pozycji kranu

B - Ciśnienie w PG, w MPa

C - Ciśnienie w cylindrze hamulcowym (-1 - nie dotyczy) ??

D - Szybkość napełnienia ??

E - [Pneumatic / ElectroPneumatic] Typ ??

--------------

--------------

.. _circuit_sekcja_elektrycznego_obwodu_napędowego:

Circuit: (Sekcja elektrycznego obwodu napędowego)
-------------------------------------------------

*Do użycia tylko w pojazdach elektrycznych i spalinowych z przekładnią
elektryczną.*

   **CircuitRes=** Rezystancje silnika i obwodu, w Omach

   **ImaxLo=** Maksymalne natężenie prądu na "niskim rozruchu", w
   Amperach

   **ImaxHi=** Maksymalne natężenie prądu na "wysokim rozruchu", w
   Amperach

   **IminLo=** Prąd przełącznika automatycznego rozruchu, oraz używane
   przez AI

   **IminHi=** Prąd przełącznika automatycznego rozruchu, oraz używane
   przez AI

   **TUHEX_Sum=** Nastawiona suma prądu wzbudzenia i prądu wirnika przy
   hamowaniu ED

   **TUHEX_Diff=** Próg (dokładność) regulacji TUHEX_Sum

   **TUHEX_MaxIw=** Maksymalny prąd wzbudzenia, jaki może nastawić
   regulator (wpływa na ograniczenie siły hamowania ED przy małych
   prędkościach)

   **TUHEX_MinIw=** Minimalny prąd wzbudzenia wynikający z
   charakterystyki magnesowanie silnika trakcyjnego (fi0)

   **TUHEX_Stages=** Liczba różnych stopni hamowania ED; gdy wartość
   jest większa od 0 należy zdefiniować poszczególne poziomy TUHEX_Sum1,
   TUHEX_Sum2 i TUHEX_Sum3

--------------

--------------

.. _engine_sekcja_napędowa:

Engine: (Sekcja Napędowa)
-------------------------

   **EngineType=** - Typ przekładni mocy z silnika na koła

      *DieselElectric* - Pojazd spalinowy z przekładnią elektryczną
      *DieselEngine* - Pojazd spalinowy z przekładnią mechaniczną
      *ElectricInductionMotor* - Pojazd elektryczny z silnikiem
      asynchroniczny, z napędem z falownika
      *ElectricSeriesMotor* - Pojazd elektryczny, z rozruchem oporowym

   **Trans=** - Stosunek przekładni w formacie [X:Y]
   **TransEff=** - Wydajność przekładni
   **Ftmax=** - Maksymalna siła trakcyjna, *w kN*
   **MotorBlowersSpeed=** - +X to mnożnik względem obrotów silnika
   głównego, a -X to stała wartość
   **PressureSwitch=** *(Yes, No)* - Obecność ciśnieniowego wyłącznika
   styczników
   **RPMDecRate=[2.0]** - Stosunek prędkości zmniejszania obrotów
   silnika w stosunku do ich zwiększania
   **InvNo=** *(X)* - określenie liczby falowników sterujących pracą
   pojazdu trakcyjnego, *X - liczba falowników*
   **MotorBlowersSustainTime=** - Czas podtrzymania pracy wentylatorów
   silników trakcyjnych
   **MotorBlowersStartVelocity=** - Prędkość rozruchu wentylatorów
   silników trakcyjnych
   **InvCtrCplFlag=[0]** *(X)* - określenie zasięgu przełączników od
   falowników w trakcji wielokrotnej na podstawie sprzęgu, *X - suma
   bitowa jak przy AllowedFlag we wpisie sprzęgu*

--------------

--------------

.. _speedcontrol_sekcja_konfiguracji_tempomatu:

SpeedControl: (Sekcja konfiguracji tempomatu)
---------------------------------------------

   **SpeedCtrl=** *(Yes / No)* - Wpis potwierdzający działanie tempomatu

   **SpeedCtrlDelay=** Zwłoka wprowadzenia zadanej prędkości do
   realizacji.

   **SpeedCtrlType=** *(Time)* Dźwignia impulsowa. Dla braku wpisu
   dźwignia liniowa.

   **SpeedCtrlATOF=** *(Yes / No)* Czy ruch zadajnikiem jazdy wyłącza
   tempomat.

   **SpeedButtons=prędkość1|prędkość2|prędkość3|...|prędkość10** -
   Predefiniowane prędkości dostępne pod klawiszami (max 10 wartości),
   *prędkość1|...|prędkość10 = prędkość w km/h*

   **OverrideManual=** *(Yes / No)* - Czy tempomat ingeruje w ustawienia
   ręczne mocy

   **InitPwr=** - Początkowy procent mocy, '' w zakresie 0..1''

   **MaxPwrVel=** - Prędkość zakończenie fazy początkowej i przejścia na
   pełną moc, *X = prędkość w km/h*

   **StartVel=** - Prędkość, do której należy potwierdzać fakt ruszenia
   pojazdem (nastawnik na ostatniej pozycji), *X = prędkość w km/h*

   **VelStep=** - Krok zmiany prędkości przyciskami + i -, w km/h

   **PwrStep=** - Krok zmiany zadanej mocy przyciskami + i -, *w
   zakresie 0..1*

   **MinPwr=** - Minimalna zadana moc tempomatu, *w zakresie 0..1*

   **MaxPwr=** - Maksymalna zadana moc tempomatu, *w zakresie 0..1*

   **MinVel=** - Minimalna prędkość zadana do ustawienia, *X = prędkość
   w km/h*

   **MaxVel=** - Maksymalna prędkość zadana do ustawienia, *X = prędkość
   w km/h*

   **Offset=** - Docelowy błąd ustawienia prędkości, *X = prędkość w
   km/h*

   **kPpos=** - Współczynnik proporcjonalności ustawionej mocy napędu
   przy niedoborze prędkości 1 km/h

   **kPneg=** - Współczynnik proporcjonalności ustawionej mocy hamowania
   przy nadmiarze prędkości 1 km/h

   **kIpos=** - Współczynnik (stała czasowa) całkowania błędu niedoboru
   prędkości, *X współczynnik w km/h/s*

   **kIneg=** - Współczynnik (stała czasowa) całkowania błędu nadmiaru
   prędkości, *X współczynnik w km/h/s*

   **BrakeIntervention=** *(Yes / No)* - Czy tempomat może wspomagać się
   hamulcem pneumatycznym samoczynnym, gdy inne środki zmniejszenia
   prędkości zawiodą

   **BrakeIntMaxVel=[30]** - Maksymalna prędkość, przy której tempomat
   może użyć hamowania pneumatycznego, *X = prędkość w km/h*

   **PowerUpSpeed=[1000]** - Współczynnik przyrostu mocy, *X =
   współczynnik w 100%/s*

   **PowerDownSpeed=[1000]** - Współczynnik spadku mocy, *X =
   współczynnik w 100%/s*

--------------

**UWAGA:** Aktualnie współczynnik *kIneg* nie jest wykorzystywany -
zamiast tego tymczasowo w obliczeniach używany jest *kIpos*!

--------------

--------------

.. _lightslist_sekcja_programatora_reflektorów:

LightsList: (Sekcja programatora reflektorów)
---------------------------------------------

   **Size=** Ilość pozycji tabelki
   **Wrap=** (yes/no) Czy pokrętło obraca się w pełnym zakresie
   **Default=** Startowe położenie pokrętła (id z tabelki)

| ````
| ``A B``

A - suma bitowa zapalonych reflektorów na czole A dla danej pozycji

B - suma bitowa zapalonych reflektorów na czole B dla danej pozycji

**Wartości:**

      **-1** Domyślna wartość
      **0** Brak zapalonych świateł
      **1** Lewy reflektor
      **2** Lewe światło czerwone
      **4** Górny reflektor
      **16** Prawy reflektor
      **32** Prawe światło czerwone
      **64** Tabliczki końca składu
      **128** Lewe białe światło sygnałowe
      **256** Prawe białe światło sygnałowe

   **endL** Wpis końcowy tabelki

**Przykład:**

| ````
| ``//Przełącznik na 2 pozycje, może się obracać o 360', domyślna pozycja nr 2``
| ``LightsList: Size=2 Wrap=Yes Default=2 ``
| ``21  34  //3 białe na czole A, 2 czerwone na czole B``
| ``34  0   //2 czerwone na czole A, nic na czole B``
| ``endL``

--------------

--------------

.. _uclist_zadajnik_jazdy_i_hamowania:

UCList: (Zadajnik jazdy i hamowania)
------------------------------------

*Działa tylko na pojazdach typu: DieselElectric i
ElectricInductionMotor*

**Size:** Ilość pozycji, nie licząc 0

**IntegratedBrakePN=** [n/a=yes] (yes, no) Czy hamulec pneumatyczny
(pociągowy) jest obsługiwany na tym zadajniku

**IntegratedBrake=** [n/a=yes] (yes, no) Czy hamulec ED/HD/pneumatyczny
pomocniczy jest obsługiwany na tym zadajniku

*Przykład: (218md.fiz)*

| ````
| ``UCList: Size=5``
| ``//A B   C   D   E   F   G   H   J   K``
| ``0   3   0   0   0   0.15    0.15    0   1   0``
| ``1   2   0   0   0   0.15    0.15    1   3   0``
| ``2   1   -1  0   -1  0.15    0.15    3   3   1``
| ``3   1   -1  1   0   0.00    0.15    3   4   1``
| ``4   0   -1  1   0   0.15    0.00    4   5   3``
| ``5   0   0   1   1   0.15    0.15    4   5   3``
| ``END-UCL ``

**A** Numer Pozycji

**B** Numer pozycji hamulca pneumatycznego powiązanego z tym zadajnikiem
(z tabelki hamulcowej)

**C** Minimalna wartość procentów

**D** Maksymalna wartość procentów

**E** Wartość docelowa

**F** Szybkość wzrostu

**G** Szybkość spadku

**H** Pozycja do której odskakuje (Nie zaimplementowane w exe190909)

**J** Najbliższa pozycja stablina w dół

**K** Najbliższa pozycja stablina w górę

**END-UCL** Wpis końcowy tabelki

--------------

--------------

.. _ai_podpowiedzi_dla_ai:

AI: (Podpowiedzi dla AI)
------------------------

   **Pantstate=** Jazda na wybranym pantografie

      *1* Jazda na pantografie A
      *2* Jazda na pantografie B
      *3* Jazda na obu pantografach

   **IdlePantUp=** (Yes/No) Czy podnosić drugi pantograf na postoju

   **LocalBrakeAccFactor=** Mnożnik siły hamowania

--------------

--------------

.. _switches_konfiguracja_przełączników:

Switches: (Konfiguracja przełączników)
--------------------------------------

   **Pantograph=** (impulse) - Przyciski zmiany stanu pantografów. Dla
   braku wpisu bistabilny.

   **Converter=** (impulse) - Przycisk zmiany stanu przetwornicy. Dla
   braku wpisu bistabilny.

   **MotorConnectors=** (toggle) - Przycisk zmiany stanu wylącznika
   styczników liniowych. Dla braku wpisu impulsowy.

   **RelayResetButtonX=** - Gdzie X to cyfra z zakresu 1-3. Przycisk
   odblokowania przekaźników zgodnie z podaną sumą bitową:

      *1*, przekaznik roznicowy obwodu glownego
      *2*, przekaznik roznicowy obwodu pomocniczego
      *4*, przekaznik nadmiarowy motorow trakcyjnych
      *8*, przekaznik nadmiarowy przetwornicy glownej
      *16*, przekaznik nadmiarowy przetwornicy dodatkowej
      *32*, przekaznik nadmiarowy wentylatorow
      *64*, przekaznik nadmiarowy ogrzewania
      *128*, przekaznik nadmiarowy hamowania ED

   **PantographPresets=X** - Zestaw pozycji wybieraka odbieraka prądu
   rozdzielonych znakiem *\|* a poszczególne pozycje to sumy bitowe dla
   odbieraka prądu nad daną kabiną (1) oraz nad kabiną przeciwną (2) -
   domyślna postać wpisu to ``0|1|3|2``.

--------------

--------------

.. _pojazdy_elektryczne:

Pojazdy elektryczne
===================

*Należy też wpisać odpowiednie wpisy ze wspólnych sekcji, powyżej!*

.. _power_sekcja_zasilania:

Power: (Sekcja zasilania)
-------------------------

   **EnginePower=** [CurrentCollector] (CurrentCollector) Źródło
   zasilania to pantograf

   **CollectorsNo=** Ilość pantografów

   **MaxVoltage=** Maksymalne napięcie, w Voltach

   **MaxCurrent=** Maksymalne natężenie prądu, w Amperach

   **MinH=** Minimalne podniesienie pantografu, od pozycji złożonej, w m

   **MaxH=** Maksymalne podniesienie pantografu, w m

   **CSW=** Szerokość robocza ślizgu pantografu, w m

   **MinV=** Minimalne napięcie do zamknięcia WS, w Woltach

   **MinPress=** Minimalne ciśnienie w Zbiorniku Pantografów (ZP) do
   podniesienia pantografu, w MPa

   **MaxPress=** Maksymalne ciśnienie w ZP, w MPa

   **PhysicalLayout=** Maska bitowa istniejących pantografów. &1 -
   przedni, &2 - tylni

--------------

.. _zmienne_silnika_asynchronicznego_z_falownikiem:

Zmienne silnika asynchronicznego z falownikiem
----------------------------------------------

.. _engine_sekcja_napędowa___kont.:

Engine: (Sekcja Napędowa - Kont.)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   **dfic=** Stosunek prądu silnika do różnicy prędkości pola i silnika

   **dfmax=** Maksymalny poślizg silnika

   **p=** liczba par biegunów silnika

   **cfu=** znamionowy stosunek U/f silnika

   **cim=** przełożenie prądu na moment silnika

   **icif=** przełożenie prądu silnika na trzy fazy

   **Uzmax=** maksymalne napięcie zasilania

   **Uzh=** maksymalne napięcie zasilania w trybie hamowania ED

   **DU=** spadek napięcia na falowniku

   **I0=** prąd jałowy

   **fcfu=** nastawa U/f falownika

   **fcfuH=** nastawa U/f falownika w trybie hamowania ED

   **F0=** siła początkowa

   **a1=** spadek siły w kN/km/h

   **Pmax=** moc maksymalna

   **Fh=** maksymalna siła hamowania ED

   **Ph=** maksymalna moc hamowania ED

   **Vh0=** prędkość zaniku ED

   **Vh1=** prędkość początku zaniku ED (minimalna prędkość pełnej siły
   hamowania)

   **Imax=** nastawa maksymalnego prądu członu

--------------

.. _zmienne_dla_pojazdów_elektrycznych_z_rozruchem_oporowym:

Zmienne dla pojazdów elektrycznych z rozruchem oporowym
-------------------------------------------------------

.. _engine_sekcja_napędowa___kont._1:

Engine: (Sekcja Napędowa - Kont.)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*Należy też wpisać odpowiednie wpisy ze wspólnej sekcji, powyżej!*

   **Volt=** Napięcie znamionowe silnika, w Woltach

   **WindingRes=** Rezystencja uzwojenia silnika, w Omach

   **nmax=** ?

--------------

MotorParamTable:
~~~~~~~~~~~~~~~~

''Przykład: ''

| ````
| ``/A B     C   D    E     F   G``
| ``MotorParamTable0:       ``
| ``0 21.4  105 0.12 141.5 105 0.12``
| ``1 19.57 140 0.07 129.3 140 0.07``
| ``2 20.42 190 0.09 134.7 190 0.09``
| ``3 22.97 160 0.25 152.1 160 0.25``
| ``4 22.12 255 0.16 145.8 255 0.16``
| ``5 24.18 170 0.35 158.2 170 0.35``
| ``6 22.76 800 0.02 149   800 0.02``
| ``END-MPT  ``

A=fin ?

B=bl ?

C=mfi= ?

D=mIsat ?

E=fi ?

F=Isat ?

MPTRelay[k].Iup= ?

MPTRelay[k].Idown= ?

**END-MPT** Wpis końcowy tabelki

RList:
~~~~~~

   **Size=** Ilość pozycji, nie wliczając pozycji 0

   **RVent=**\ (Automatic, Yes, No) Napędzanie wentylatorów chłodzenia
   rezystorów

   **RVentnmax=** Maksymalne obroty wentylatorów chłodzących w obr/min

   **RVentCutOff=** Wartość oporów poniżej której wentylatory nie
   pracują, w

   **RVentMinI=** Minimalny prąd przy którym się załączają wentylatory,
   w Amperach

   **RVentSpeed=** [0.5] (0 - 1) Zmiana prędkości obrotowej wentylatorów

   **DynBrakeRes=** Rezystancja przy hamowaniu ED w przeliczeniu na dwa
   silniki, w Ω - w przypadku, gdy na trzeciej nastawie pojazd ma dwa
   poziomy rezystancji, należy użyć wpisów DynBrakeRes1 (podstawowy) i
   DynBrakeRes2 (dla małych prędkości przy trzecim stopniu)

**END-RL** Wpis końcowy tabelki

''Przykład: ''

| ````
| ``RList: Size=4``
| ``//A      B               C       D         E     F``
| `` 0  0       0   0       0``
| `` 1      24.891      1   4       0``
| `` 2      16.821      1   4       0``
| `` 3      12.301      1   4       0``
| `` 4       9.771      1   4       0``
| ``END-RL``

**A** Numer pozycji rozruchu samoczynnego

**B** Opory rozruchowe na danej pozycji, w Omach

*'C* Ilość gałęzi

**D** Ilość silników w gałęzi

**E** Czy dana pozycja jest nastawiana ręcznie (domyś. brak wpisu) czy
automatycznie

**F** Jeśli jest bocznik *w nastawniku*, to jaki bocznik, na tej pozycji

--------------

.. _pojazdy_spalinowe:

Pojazdy spalinowe
=================

*Należy też wpisać odpowiednie wpisy ze wspólnych sekcji, powyżej!*

.. _engine_sekcja_napędowa___kont._2:

Engine: (Sekcja Napędowa - Kont.)
---------------------------------

   **OilMinPressure=** Minimalne ciśnienie oleju, żeby silnik się
   uruchomił

   **OilMaxPressure=** Maksymalne ciśnienie oleju, na maksymalnych
   obrotach

   **Ftmax=** Maksymalna siła trakcyjna, w kN

   **WaterMinTemperature=** Minimalna temperatura wody do uruchomienia
   silnika, w st. Celsjusza

   **WaterMaxTemperature=** Maksymalna dopuszczalna temperatura wody, w
   st. Celsjusza

   **WaterCoolingTemperature=** Temperatura powyżej której woda jest
   aktywnie chłodzona (np przez chłodnice, lub otwarcie żaluzji), w st.
   Celsjusza

   **WaterFlowTemperature=** Temperatura przy której uruchamiany jest
   obieg wody, w st. Celsjusza

   **WaterShutters=** (Yes, No) Czy są żaluzje, w obiegu głównym

   **WaterAuxCircuit=** (Yes, No) Czy jest pomocniczy obieg wodny

   **WaterAuxMinTemperature=** Minimalna temperatura w obiegu
   pomocniczym, przy której można uruchomić silnik, w st. Celsjusza

   **WaterAuxMaxTemperature=** Maksymalna temperatura w obiegu
   pomocniczym, przy której można chodzić silnik, w st. Celsjusza

   **WaterAuxCoolingTemperature=** Temperatura powyżej której woda w
   obiegu pomocniczym jest aktywnie chłodzona (np przez chłodnice, lub
   otwarcie żaluzji), w st. Celsjusza

   **WaterAuxShutters=** (Yes, No) Czy są żaluzje, w obiegu pomocniczym

   **HeaterMinTemperature=** Temperatura poniżej której załącza się
   włączony podgrzewacz wody, w st. Celsjusza

   **HeaterMaxTemperature=** Temperatura powyżej której wyłącza się
   włączony podgrzewacz wody, w st. Celsjusza

   **HeatKW=** Modyfikator wpływu wentylatorów chłodzących na zmianę
   temperatury [0.35]

   **HeatKV=** Modyfikator wpływu prędkości pojazdu na zmianę
   temperatury [0.6]

   **HeatKFE=** Modyfikator wymiany ciepła miedzy silnikiem i otoczeniem
   [1.0]

   **HeatKFS=** Modyfikator wymiany ciepła miedzy silnikiem i woda
   chłodząca [80.0]

   **HeatKFO=** Modyfikator wymiany ciepła miedzy silnikiem i olejem
   [25.0]

   **HeatKFO2=** Modyfikator wymiany ciepła miedzy olejem i wodą [25.0]

   **WaterCoolingFanSpeed=** Prędkość obrotowa wentylatorów. Procent
   aktualnych obrotów silnika pojazdu lub, w przypadku wartości ujemnej,
   określona stała ilość obrotów/min. [0.075]

.. _zmienne_przekładni_elektrycznej:

Zmienne przekładni elektrycznej
-------------------------------

.. _engine_sekcja_napędowa_1:

Engine: (Sekcja napędowa)
~~~~~~~~~~~~~~~~~~~~~~~~~

*Należy też wpisać odpowiednie wpisy ze wspólnej sekcji, powyżej!*

   **Flat=** (yes, no) Czy jest ograniczenie napięcia prądnicy (ucięta
   charakterystyka)

   **Vhyp=**

   **Vadd=**

   **AIM=** Prędkość zmiany obrotów silnika spalinowego (1.25 to wartość
   odpowiadająca dotychczasowemu zachowaniu)

   **Cr=** PowerCorRatio - współczynnik korekcyjny charakterystyki

   **RelayType=** flaga typu przekaźników bocznikowania: 0 - zależny od
   prądu; 1 - zależny od prędkości; 2 - zależny od prędkości i mocy; 41,
   45, 46 - rozbudowane warianty dedykowane dla tych typów lokomotyw

   **ShuntMode=** Czy jest tryb ręcznej regulacji wzbudzenia prądnicy

   **HeatingRPM=** Minimalny poziom obrotów, przy załączonym ogrzewaniu

--------------

.. _motorparamtable_1:

MotorParamTable:
~~~~~~~~~~~~~~~~

| ````
| ``MotorParamTable0:    ``
| ``0 21.4 105 0.12 141.5 105 0.12``
| ``1 19.57 140 0.07 129.3 140 0.07``
| ``2 20.42 190 0.09 134.7 190 0.09``
| ``3 22.97 160 0.25 152.1 160 0.25``
| ``4 22.12 255 0.16 145.8 255 0.16``
| ``5 24.18 170 0.35 158.2 170 0.35``
| ``6 22.76 800 0.02 149 800 0.02``
| ``END-MPT  ``

fin= numer pozycji bocznikowania

mfi= dzielnik liniowy

mIsat= stała

fi= moment przejścia z charakterystyki paraboloidalnej na liniową

Isat= współczynnik podpierwiastkowy (I = osie \* sqrt (Moment \* Isat))

MPTRelay[k].Iup= próg zwiększenia stopnia bocznikowania

MPTRelay[k].Idown= próg zmniejszenia stopnia bocznikowania

| ````
| ``if (abs(Mm) > MotorParam[ScndCtrlPos].fi)``
| ``Im = NPoweredAxles * abs(abs(Mm) / MotorParam[ScndCtrlPos].mfi + MotorParam[ScndCtrlPos].mIsat);``
| ``else``
| ``Im = NPoweredAxles * sqrt(abs(Mm * MotorParam[ScndCtrlPos].Isat));``

--------------

WWList:
~~~~~~~

| ````
| ``A       B       C       D``
| ````
| ``WWList: Size=14``
| ``696 0   0   0``
| ``696 0   0   0``
| ``629 96  78  273``
| ``763 192 147 547``
| ``830 288 221 820``
| ``897 384 295 1094``
| ``964 480 369 1367``
| ``1031    576 442 1641``
| ``1098    672 516 1914``
| ``1165    768 590 2187``
| ``1232    864 664 2461``
| ``1299    960 737 2734``
| ``1366    1056    811 3007``
| ``1433    1152    885 3281``
| ``1500    1245    960 3560``
| ``END-WWL``

WWList: Size= Ilość pozycji nastawnika, minus pozycja 0

fin=

DEList[k].rpm= (A) obroty silnika, w obr/min

DEList[k].genpower= (B) moc prądnicy, kW

DEList[k].Umax= (C) napięcie prądnicy, V

DEList[k].Imax= (D) prąd prądnicy, V

Dla shuntmode dodatkowo:

SST[k].Umin= napięcie przy minimalnym wzbudzeniu V

SST[k].Umax= napięcie przy maksymalnym wzbudzeniu V

SST[k].Pmax= moc przy maksymalnym wzbudzeniu kW

.. _zmienne_przekładni_mechanicznej:

Zmienne przekładni mechanicznej
-------------------------------

.. _engine_sekcja_napędowa___kont._3:

Engine: (Sekcja napędowa - Kont.)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*Należy też wpisać odpowiednie wpisy ze wspólnej sekcji, powyżej!*

   **nmin=** Obroty minimalne, w obr/min

   **nmax=** Obroty maksymalne, w obr/min

   **nmax_cutoff=** Obroty odcięcia paliwa, w obr/min

   **AIM=** Bezwładność silnika/wału

   **EUS=** Prędkość załączenia sprzęgła w skrzyni biegów w 1/s

   **EDS=** Prędkość puszczenia sprzęgła w skrzyni biegów w 1/s

   **IsTC=** (Yes, No) Czy jest przetwornik momentu

   **TC_TMMax=** Maksymalne wzmocnienie przetwornika momentu

   **TC_CP=** Prędkość względna sprężenia przetwornika momentu
   (przejście w tryb pracy sprzęgła hydraulicznego)

   **TC_LT=** Moment maksymalny sprzęgła blokującego przetwornik, w Nm

   **TC_LR=** Szybkość załączania sprzęgła blokującego, w 1/s

   **TC_ULR=** Szybkość puszczania sprzęgła blokującego, w 1/s

   **TC_FRI=** Szybkość napełniania przetwornika momentu, w 1/s

   **TC_FRD=** Szybkość opróżniania przetwornika momentu, w 1/s

   **TC_TII=** Stała sprzęgła wejście^2, w Nm/(obr/s)^2

   **TC_TIO=** Stała sprzęgła: wejście-wyjśćie, w Nm/(obr/s)

   **TC_TOO=** Stała sprzęgła: wyjście^2, w Nm/(obr/s)^2

   **TC_LS=** Prędkość załączania sprzęgła blokującego, w 1/s

   **TC_ULS=** Prędkość luzowania sprzęgła blokującego, w 1/s

   **IsRetarder=** (Yes, No) Czy jest retarder

   **R_Place=** Umiejscowienie retardera (0 - za skrzynią biegów, 1 -
   między skrzynią biegów a przetwornikiem momentu, 2 - między
   przetwornikiem momentu a silnikiem

   **R_TII=** Stała retardera, Nm/rps^2

   **R_MT=** Moment maksymalny retardera, Nm

   **R_MP=** Moc maksymalna retardera, kW

   **R_FRI=** Szybkość napełnienia retardera, w 1/s

   **R_FRD=** Szybkość opróżnienia retardera, w 1/s

   **R_MinVel=** Minimalna prędkość pracy retardera, w km/h

--------------

.. _motorparamtable_2:

MotorParamTable:
~~~~~~~~~~~~~~~~

   **minVelfullengage=** Prędkość pełnego sprzęgła

   **engageDia=** Średnica tarczy sprzęgła

   **engageMaxForce=** Maksymalny docisk sprzęgła

   **engagefriction=** Tarcie sprzęgła

Docisk sprzęgła liczony jest jako iloczyn engageDia \* engageMaxForce \*
engagefriction, stąd też można dwa parametry przyjąć równe 1, a sterować
tylko trzecim (np. engageMaxForce).

| ````
| ``A B     C   D``
| ````
| ``MotorParamTable:       ``
| ``0   0   0   -1``
| ``1   6.93    -1  8``
| ``2   4.03    4   13``
| ``3   2.36    9   23``
| ``4   1.40    18  40``
| ``5   1.00    33  100``
| ``END-MPT ``

   **A:** Nr biegu.
   **B:** Przełożenie na danym biegu.
   **C:** Prędkość redukcji na niższy bieg.
   **D:** Prędkość zmiany na wyższy.

--------------

MotorParamTable0:
~~~~~~~~~~~~~~~~~

Rozszerzony model pracy skrzyni biegów z dodatkowymi parametrami. W
pierwszej linijce przyjmuje parametry jak MotorParamTable, tj.

   **minVelfullengage=** Prędkość pełnego sprzęgła

   **engageDia=** Średnica tarczy sprzęgła

   **engageMaxForce=** Maksymalny docisk sprzęgła

   **engagefriction=** Tarcie sprzęgła

Docisk sprzęgła liczony jest jako iloczyn engageDia \* engageMaxForce \*
engagefriction, stąd też można dwa parametry przyjąć równe 1, a sterować
tylko trzecim (np. engageMaxForce).

| ````
| ``A       B       C       D       E       F       G       H``
| ``MotorParamTable0: minVelfullengage=3.0 engageDia=1 engageMaxForce=3300 engagefriction=1``
| ``0   0   0   0   -1  -1  0   1``
| ``1   2.81    -1  -1  31.3    33.7    0.15    1``
| ``2   1.84    17.4    29.9    47.9    51.5    0.15    1``
| ``3   1.36    26.6    45.0    64.8    69.7    0   1``
| ``4   1.00    61.1    61.1    88.2    94.8    0   1``
| ``5   0.80    80.2    80.2    200 200 0   1``
| ``END-MPT``

   **A:** numer kolejny biegu
   **B:** przełożenie przekładni (rozumiane jako stosunek obrotów
   wejściowych do wyjściowych)
   **C:** prędkość redukcji biegu, gdy zadane jest 0% mocy lub pojazd
   hamuje, km/h
   **D:** prędkość redukcji biegu, gdy zadana jest moc, km/h
   **E:** prędkość awansowania biegu, gdy zadane jest 0% mocy, km/h
   **F:** prędkość awansowania biegu, gdy zadane jest 100% mocy, km/h
   **G:** współczynnik ograniczenia mocy na danym biegu (ograniczenie
   maksymalnej dawki paliwa)
   **H:** informacja, czy jest automatyczna zmiana biegu

Przy redukcji biegów skrzynia wybiera jeden z progów:

-  B, gdy pojazd nie wytwarza siły pociągowej (0% mocy)
-  C, gdy pojazd wytwarza siłę pociągową (1..100% mocy)

Przy awansowaniu biegów skrzynia dobiera próg przełączania liniowo w
zakresie od E (0%) do F (100%) w zależności od zadanego procenta mocy.

Na wybranych biegach istnieje możliwość ograniczenia maksymalnej dawki
paliwa, np. dla przedstawionego wpisu maksymalna dawka paliwa na 1. i 2.
biegu będzie ograniczona o 0,15 (15%), czyli maksymalna dawka zamiast
1,00 będzie wynosić 0,85. W ten sposób maksymalny moment obrotowy
silnika zostanie również proporcjonalnie obniżony. Dla zadanego procentu
mocy w zakresie 0..85% nie będzie ograniczona i będzie zmieniać się
liniowo. Dla procentów mocy w zakresie 85..100% dawka paliwa będzie
wynosić 85%.

--------------

DList:
~~~~~~

   **Size=** Rozmiar tablicy pozycji przepustnicy

   **Mmax=** Moment maksymalny, w Nm

   **nMmax=** Obroty momentu maksymalnego, w obr/**SEK**

   **Mnmax=** Moment obrotów maksymalnych, w Nm

   **nmax=** Obroty maksymalne, w obr/**SEK**

   **nominalfill=** Względna znamionowa dawka paliwa, bezwymiarowe
   (0..1)

   **Mstand=** Moment oporów własnych, w Nm

   **NomFuelConsRate=** [250] Znamionowe zużycie paliwa przy pełnej
   mocy, w g/kWh

| ````
| ``DList:       ``
| ``//A B C``
| ``END-DL  ``

   **A** Numer pozycji przepustnicy (od zera)
   **B** Procentowa dawka paliwa
   **C** Zachowanie sprzęgła i regulatora

      0 - Brak sprzęgła
      1 - Pół sprzęgła i obroty min
      2 - Pełne sprzęgło i obroty max
      3 - Do minvelfullengage półsprzęgło. Potem pełne sprzęgło.
      4 - Do minvelfullengage 2/3 sprzęgła, obroty = 2/3 \* min + 1/3
      max.

--------------

DMList:
~~~~~~~

Jest to tabelka z której są liniowo interpolowane wartości momentu
obrotowego silnika spalinowego

| ````
| ``//A     B``
| ``DMList:``
| ``0   0``
| ``850 1450``
| ``1100    2700``
| ``1400    2700``
| ``2000    2174``
| ``END-DML``

   *A* to obroty silnika w obr/min

   *B* to moment obrotowy na danych obrotach, w Nm

--------------

HTCList:
~~~~~~~~

Jest to tabelka z której są liniowo interpolowane wartości współczynnika
konwersji momentu, ze stosunku obr. wyj. do obr. wej. przetwornika.
Zalecane do stosowania, gdy znany jest przebieg współczynnika konwersji
i nie da się go odwzorować przy pomocy podstawowego wzoru zastosowanego
w maszynie.

| ````
| ``//A     B``
| ``HTCList:``
| ``0.000   4.89``
| ``0.061   4.44``
| ``0.159   3.63``
| ``0.236   3.12``
| ``0.293   2.81``
| ``0.354   2.46``
| ``0.427   2.14``
| ``0.492   1.87``
| ``0.565   1.62``
| ``0.642   1.39``
| ``0.720   1.23``
| ``0.800   1.00``
| ``1.000   0.00``
| ``END-HTCL``

   *A* to stosunek obrotów wyjściowych do obrotów wejściowych

   *B* to współczynnik wzmocnienia momentu

Punkt 0.800 1.00 stanowi punkt sprzęgnięcia, w którym przetwornik
momentu zaczyna działać jak sprzęgło hydrauliczne, a przenoszony moment
jest proporcjonalny do różnicy prędkości obrotowych silników.

`Category:Formaty plików
symulatora <Category:Formaty_plików_symulatora>`__
