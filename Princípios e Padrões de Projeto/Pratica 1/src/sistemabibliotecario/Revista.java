package sistemabibliotecario;

public class Revista extends MaterialBibliotecario {
    private String orgao;
    private Integer volume;
    private Integer numero;

    public Revista(String titulo, Integer ano, String orgao, Integer volume, Integer numero){
        super(titulo,ano);
        this.orgao = orgao;
        this.volume = volume;
        this.numero = numero;
    }

    public String getOrgao(){
        return orgao;
    }
    public Integer getVolume(){
        return volume;
    }
    public Integer getNumero(){
        return numero;
    }

    @Override
    public String toString(){
        return "Revista: " + getTitulo() + " " + getOrgao() + " " + getVolume() + " " + getNumero() + " " + getAno();
    }
}
