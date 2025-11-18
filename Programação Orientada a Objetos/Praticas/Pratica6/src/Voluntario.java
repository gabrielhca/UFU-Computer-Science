public class Voluntario extends Participante{
    private String atividade;

    public Voluntario(String n, Evento e, String atividade){
        super(n,e);
        this.atividade = atividade;
    }

    public String getCertificado() {
        return super.getCertificado() + " e auxiliou na organizacao como: " + atividade;
    }
}
