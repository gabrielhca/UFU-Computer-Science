//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the
// gutter.
public class Main {
    public static void main(String[] args) {
        Evento evento1 = new Evento("TechWeek", 6);
        Evento evento2 = new Evento("Aplicacoes de Java no Agronegocio", 5);
        Evento evento3 = new Evento("Programacao com Arduino", 8);

        Voluntario voluntario1 = new Voluntario("Marquinnho", evento1, "Sonoplasta");
        Voluntario voluntario3 = new Voluntario("Carla", evento3, "Jardinagem");
        Voluntario voluntario2 = new Voluntario("Gabriel", evento1, "Cozinheiro");

        Organizador organizador2 = new Organizador("Vinicius", evento3);
        Organizador organizador1 = new Organizador("Monica", evento2);

        evento1.addParticipante(organizador2);
        evento1.addParticipante(voluntario1);
        evento1.addParticipante(voluntario3);

        evento2.addParticipante(organizador1);
        evento2.addParticipante(voluntario3);
        evento2.addParticipante(voluntario2);
        evento2.addParticipante(voluntario1);

        evento3.addParticipante(organizador2);
        evento3.addParticipante(voluntario3);
        evento2.addParticipante(voluntario2);

        System.out.println(evento1.certificados());
        System.out.println(evento2.certificados());
        System.out.println(evento3.certificados());
    }
}
