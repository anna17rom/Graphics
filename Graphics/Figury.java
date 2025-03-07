
public class Figury {
    public enum Jeden_Parametr implements JedenParametr {
        KOLO(1), KWADRAT(2), PIECIOKAT(3), SZESCIOKAT(4);
        int numer;

        private Jeden_Parametr(int x) {
            numer = x;
        }

        @Override
        public double ObliczPole(double a) {
            switch (numer) {
                case 1:
                    System.out.println("Pole kola o promieniu " + a + ": ");
                    return a * a * Math.PI;
                case 2:
                    System.out.println("Pole kwadratu o boku " + a + ": ");
                    return a * a;
                case 3:
                    System.out.println("Pole pieciokata o boku " + a + ": ");
                    return 5 * (a * a * (1 / Math.tan(Math.PI / 5))) / 4;
                case 4:
                    System.out.println("Pole szesciokata o boku " + a + ": ");
                    return 3 * (a * a * Math.sqrt(3)) / 2;
                default:
                    return 0;
            }
        }

        @Override
        public double ObliczObwod(double a) {
            switch (numer) {
                case 1:
                    System.out.println("Obwod kola o promieniu " + a + ": ");
                    return 2 * a * Math.PI;
                case 2:
                    System.out.println("Obwod kwadratu o boku " + a + ": ");
                    return a * 4;
                case 3:
                    System.out.println("Obwod pieciokata o boku " + a + ": ");
                    return a * 5;
                case 4:
                    System.out.println("Obwod szesciokata o boku " + a + ": ");
                    return a * 6;
                default:
                    return 0;
            }
        }

        @Override
        public void PodajNazwe() {
            switch (numer) {
                case 1:
                    System.out.println("Kolo");
                    break;
                case 2:
                    System.out.println("Kwadrat");
                    break;
                case 3:
                    System.out.println("Pieciokat");
                    break;
                case 4:
                    System.out.println("Szesciokat");
                    break;

            }
        }
    }

    public enum Dwa_Parametry implements DwaParametry {
        PROSTOKAT(1), ROMB(2);
        int numer;

        private Dwa_Parametry(int x) {
            numer = x;
        }

        @Override
        public double ObliczPole(double a1, double a2) {
            switch (numer) {
                case 1:
                    System.out.println("Pole prostokata o bokach "+a1+" i "+a2+": ");
                    return a1*a2;
                case 2:
                    System.out.println("Pole rombu o boku "+a1+" i o kacie "+a2+": ");
                    return a1*a1*Math.sin(Math.toRadians(a2));
                default:
                    return 0;

            }
        }

        @Override
        public double ObliczObwod(double a1, double a2) {
            switch (numer) {
                case 1:
                    System.out.println("Obwod prostokata o bokach "+a1+" i "+a2+": ");
                    return (a1+a2)*2;
                case 2:
                    System.out.println("Obwod rombu o boku "+a1+" i o kacie "+a2+": ");
                    return a1*4;
                default:
                    return 0;

            }
        }

        @Override
        public void PodajNazwe() {
            switch (numer) {
                case 1:
                    System.out.println("Prostokat");
                    break;
                case 2:
                    System.out.println("Romb");
                   break;
            }
        }
    }
}


