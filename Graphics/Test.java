public class Test {
    public static void main(String[] args) {
        double a;
        double a1,a2;
        double bok1,bok2,bok3,bok4,kat;
        switch (args[0]) {
            case "c":
                try {
                    bok1 = Double.parseDouble(args[1]);
                    bok2 = Double.parseDouble(args[2]);
                    bok3 = Double.parseDouble(args[3]);
                    bok4 = Double.parseDouble(args[4]);
                    kat = Double.parseDouble(args[5]);
                    if(bok1<1 || bok2<1 || bok3<1 || bok4<1){
                        System.out.println("Bok nie moze byc ujemny");
                    }
                    if (kat > 180 || kat < 0){
                        System.out.println("Niepoprawny kat dla czworokatu");
                    }
                    else{
                        if (bok1 == bok2 && bok2 == bok3 && bok3 == bok4 && kat == 90){
                            a = bok1;
                            Figury.Jeden_Parametr kwadrat = Figury.Jeden_Parametr.KWADRAT;
                            kwadrat.PodajNazwe();
                            System.out.println(kwadrat.ObliczObwod(a));
                            System.out.println(kwadrat.ObliczPole(a));
                        } else if (bok1 == bok2 && bok2 == bok3 && bok3 == bok4) {
                           a1 = bok1;
                           a2 = kat;
                            Figury.Dwa_Parametry romb = Figury.Dwa_Parametry.ROMB;
                            romb.PodajNazwe();
                            System.out.println(romb.ObliczObwod(a1,a2));
                            System.out.println(romb.ObliczPole(a1,a2));
                        } else if ((bok1 == bok2 && bok3 == bok4) || (bok1 == bok4 && bok2 == bok3) || (bok1 == bok3 && bok2 == bok4) && kat == 90) {
                            a1 = bok1;
                            if(bok1 == bok2 && bok3 == bok4)
                                a2 = bok3;
                            else
                                a2 = bok2;

                            Figury.Dwa_Parametry prostokat = Figury.Dwa_Parametry.PROSTOKAT;
                            prostokat.PodajNazwe();
                            System.out.println(prostokat.ObliczObwod(a1,a2));
                            System.out.println(prostokat.ObliczPole(a1,a2));
                        } else {
                            System.out.println("Niepoprawny typ czworokatu");
                        }

                    }

                } catch (Exception e) {
                    System.out.println("Podano nieprawidlowa ilosc parametrow dla czworokatu");
                }
                break;
            case "o":
                try {
                    a = Double.parseDouble(args[1]);
                    if (a < 1) {
                        System.out.println("Promien nie moze byc ujemny lub rowny zero");
                    } else {
                        JedenParametr kolo = Figury.Jeden_Parametr.KOLO;
                        kolo.PodajNazwe();
                        System.out.println(kolo.ObliczObwod(a));
                        System.out.println(kolo.ObliczPole(a));
                    }
                } catch (NumberFormatException e) {
                    System.out.println("Nie podano parametrow dla kola");
                }
                break;
            case "p":
                try{
                    a = Double.parseDouble(args[1]);
                    if (a<1){
                        System.out.println("Bok piecokata nie moze byc ujemny lub rowny zero");
                    } else{
                        Figury.Jeden_Parametr pieciokat = Figury.Jeden_Parametr.PIECIOKAT;
                        pieciokat.PodajNazwe();
                        System.out.println(pieciokat.ObliczObwod(a));
                        System.out.println(pieciokat.ObliczPole(a));
                    }

                } catch (Exception e) {
                    System.out.println("Nie podano parametrow dla pieciokata");
                }
                break;
            case "s":
                try{
                    a = Double.parseDouble(args[1]);
                    if (a<1){
                        System.out.println("Bok szesciokata nie moze byc ujemny lub rowny zero");
                    } else{
                        Figury.Jeden_Parametr szesciokat = Figury.Jeden_Parametr.SZESCIOKAT;
                        szesciokat.PodajNazwe();
                        System.out.println(szesciokat.ObliczObwod(a));
                        System.out.println(szesciokat.ObliczPole(a));
                    }

                } catch (Exception e) {
                    System.out.println("Nie podano parametrow dla szesciokata");
                }
                break;
            default:
                System.out.println(args[0] + "- nieprawidlowy typ figury");

        }
    }
}
