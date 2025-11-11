package sistemabibliotecario;

public class Livro extends MaterialBibliotecario {
    private String autor;

    public Livro(String titulo, Integer ano, String autor){
        super(titulo,ano);
        this.autor = autor;
    }

    public String getAutor(){
        return autor;
    }

    @Override
    public String toString(){
        return "Livro: " + getTitulo() + " " + getAutor() + " " + getAno();
    }

}
