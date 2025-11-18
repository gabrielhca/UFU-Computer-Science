public class Organizador extends Participante{
    public Organizador(String n, Evento e){
        super(n,e);
    }

    public String getCertificado(){
        return " " + getNome() + " organizou o evento: " + getEvento().getNome();
    }
}
