package sistemabibliotecario;

public class MaterialBibliotecario {
    private String titulo;
    private Integer ano;

    public MaterialBibliotecario(String titulo, Integer ano){
        this.titulo = titulo;
        this.ano = ano;
    }

    public String getTitulo(){
        return titulo;
    }

    public Integer getAno(){
        return ano;
    }

    @Override
    public String toString() {
        return getTitulo() + " " + getAno();
    }
}
