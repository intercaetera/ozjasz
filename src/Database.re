let db = [|
  [
    {js|Proszę zwrócić uwagę, że|js},
    {js|I tak mam trzy razy mniej czasu, proszę mi pozwolić powiedzieć:|js},
    {js|Państwo się śmieją, ale|js},
    {js|Ja nie potrzebowałem edukacji seksualnej, żeby wiedzieć, że|js},
    {js|No niestety:|js},
    {js|Gdzie leży przyczyna problemu? Ja państwu powiem:|js},
    {js|Państwo chyba nie widzą, że|js},
    {js|Oświadczam kategorycznie:|js},
    {js|Powtarzam:|js},
    {js|Powiedzmy to z całą mocą:|js},
    {js|W Polsce dzisiaj:|js},
    {js|Państwo sobie nie zdają sprawy, że|js},
    {js|To ja przepraszam bardzo:|js},
    {js|Otóż nie wiem, czy pan wie, że|js},
    {js|Yyyyy...|js},
    {js|Ja chcę powiedzieć jedną rzecz:|js},
    {js|Trzeba powiedzieć jasno:|js},
    {js|Jak powiedział wybitny krakowianin Stanisław Lem,|js},
    {js|Proszę mnie dobrze zrozumieć:|js},
    {js|Ja chciałem państwu przypomnieć, że|js},
    {js|Niech państwo nie mają złudzeń: |js},
    {js|Powiedzmy to wyraźnie:|js},
  ],
  [
    {js|właściciele niewolników|js},
    {js|związkowcy|js},
    {js|trockiści|js},
    {js|tak zwane dzieci kwiaty|js},
    {js|rozmaici urzędnicy|js},
    {js|federaści|js},
    {js|etatyści|js},
    {js|ci durnie i złodzieje|js},
    {js|ludzie wybrani głosami meneli spod budki z piwem|js},
    {js|socjaliści pobożni|js},
    {js|socjaliści bezbożni|js},
    {js|komuniści z krzyżem w zębach|js},
    {js|agenci obcych służb|js},
    {js|członkowie Bandy Czworga|js},
    {js|pseudo-masoni z Wielkiego Wschodu Francji|js},
    {js|przedstawiciele czerwonej hołoty|js},
    {js|ci wszyscy (tfu!) geje|js},
    {js|funkcjonariusze reżymowej telewizji|js},
    {js|tak zwani ekolodzy|js},
    {js|ci wszyscy (tfu!) demokraci|js},
    {js|agenci bezpieki|js},
    {js|feminazistki|js},
  ],
  [
    {js|po przeczytaniu 'Manifestu komunistycznego'|js},
    {js|którymi się brzydzę,|js},
    {js|których nienawidzę,|js},
    {js|z okolic 'Gazety Wyborczej'|js},
    {js|czyli taka żydokomuna,|js},
    {js|odkąd zniesiono karę śmierci,|js},
    {js|którymi pogardzam,|js},
    {js|których miejsce w normalnym kraju jest w więzieniu,|js},
    {js|na polecenie Brukseli|js},
    {js|posłusznie|js},
    {js|bezmyślnie|js},
    {js|z nieprawdopodobną pogardą dla człowieka|js},
    {js|za pieniądze podatników|js},
    {js|zgodnie z ideologią LGBTQZ|js},
    {js|za wszelką cenę|js},
    {js|zupełnie bezkarnie|js},
    {js|całkowicie bezczelnie|js},
    {js|o poglądach na lewo od komunizmu|js},
    {js|celowo i świadomie|js},
    {js|z premedytacją|js},
    {js|z czasów Okrągłego Stołu|js},
    {js|w ramach postępu|js},
  ],
  [
    {js|udają homoseksualistów|js},
    {js|niszczą rodzinę|js},
    {js|idą do polityki|js},
    {js|zakazują góralom robienia oscypków|js},
    {js|organizują paraolimpiady|js},
    {js|wprowadzają ustrój, w którym raz na cztery lata można wybrać sobie pana|js},
    {js|ustawiają fotoradary|js},
    {js|wprowadzają dotacje|js},
    {js|wydzielają buspassy|js},
    {js|podnoszą wiek emerytalny|js},
    {js|rżną głupa|js},
    {js|odbierają dzieci rodzicom|js},
    {js|wprowadzają absurdalne przepisy|js},
    {js|umieszczają dzieci w szkołach koedukacyjnych|js},
    {js|wprowadzają parytety|js},
    {js|nawołują do podniesienia podatków|js},
    {js|próbują wyrzucić kierowców z miast|js},
    {js|próbują skłócić Polskę z Rosją|js},
    {js|głoszą brednie o globalnym ociepleniu|js},
    {js|zakazują posiadania broni|js},
    {js|nie dopuszczają prawicy do władzy|js},
    {js|uczą dzieci homoseksualizmu|js},
  ],
  [
    {js|żeby poddawać wszystkich tresurze,|js},
    {js|bo taka jest ich natura,|js},
    {js|bo chcą wszystko kontrolować,|js},
    {js|bo nie rozumieją, że socjalizm nie działa,|js},
    {js|żeby wreszcie zapanował socjalizm,|js},
    {js|dokładnie tak jak tow. Janosik,|js},
    {js|zamiast pozwolić ludziom zarabiać|js},
    {js|żeby wyrwać kobiety z domu|js},
    {js|bo to jest w interesie tak zwanych ludzi pracy|js},
    {js|zamiast pozwolić decydować konsumentowi|js},
    {js|żeby nie opłacało się mieć dzieci|js},
    {js|zamiast obniżyć podatki|js},
    {js|bo nie rozumieją, że selekcja naturalna jest czymś dobrym|js},
    {js|żeby mężczyźni przestali być agresywni|js},
    {js|bo dzięki temu mogą brać łapówki|js},
    {js|bo dzięki temu mogą kraść|js},
    {js|bo dostają za to pieniądze|js},
    {js|bo tak się uczy w państwowej szkole|js},
    {js|bo bez tego (tfu!) demokracja nie może istnieć|js},
    {js|bo głupich jest więcej niż mądrych|js},
    {js|bo chcą tworzyć raj na ziemi|js},
    {js|bo chcą niszczyć cywilizację białego człowieka|js},
  ],
  [
    {js|co ma z resztą tyle samo sensu, co zawody w szachach dla debili.|js},
    {js|co zostało dokładnie zaplanowane w Magdalence przez śp. generała Kiszczaka.|js},
    {js|i trzeba być idiotą, żeby ten system popierać.|js},
    {js|ale nawet ja jeszcze dożyję  normalnych czasów.|js},
    {js|co dowodzi, że wyskrobano nie tych co trzeba.|js},
    {js|a zwykłym ludziom wmawiają, że im coś 'dadzą'.|js},
    {js|- cóż, chcieliście (tfu!) demokracji, to macie.|js},
    {js|dlatego trzeba zlikwidować koryto, a nie zmieniać świnie.|js},
    {js|a wystarczyłoby przestać wypłacać zasiłki.|js},
    {js|podczas gdy normalni ludzie uważani są za dziwaków.|js},
    {js|co w wieku XIX po prostu by wyśmiano.|js},
    {js|- dlatego w społeczeństwie jest równość, a powinno być rozwarstwienie.|js},
    {js|co prowadzi Polskę do katastrofy.|js},
    {js|- dlatego trzeba przywrócić normalnosć.|js},
    {js|ale w wolnej Polsce pójdą siedzieć.|js},
    {js|przez kolejne kadencje.|js},
    {js|o czym się nie mówi.|js},
    {js|i właśnie dlatego Europa umiera.|js},
    {js|ale przyjdą muzułmanie i zrobią porządek.|js},
    {js|- tak samo zresztą jak za Hitlera.|js},
    {js|- proszę zobaczyć, co się dzieje na Zachodzie, jeśli mi państwo nie wierzą.|js},
    {js|co lat temu sto nikomu nie przyszłoby nawet do głowy.|js},
  ],
|];
