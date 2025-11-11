public class Frequencias {
    private int totalAulas;
    private int faltas = 0;
    private double presencaMinima = 0.75; // 75%

    public Frequencias(int totalAulas){
        this.totalAulas = totalAulas;
    }

    public void registrarFalta() { faltas++; }

    public double percentualPresenca() {
        if (totalAulas == 0) return 1.0;
        return 1.0 - ((double) faltas / totalAulas);
    }

    public boolean cumprePresenca() {
        return percentualPresenca() >= presencaMinima;
    }
}
