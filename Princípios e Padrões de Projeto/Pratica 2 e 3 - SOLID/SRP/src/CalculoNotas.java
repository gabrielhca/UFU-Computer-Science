import java.util.ArrayList;
import java.util.List;

public class CalculoNotas {
    private final List<Double> notas = new ArrayList<>();
    private final List<Double> pesos = new ArrayList<>();
    private double mediaAprovacao = 6.0;

    public void adicionarNota(double nota, double peso) {
        notas.add(nota);
        pesos.add(peso);
    }

    public double mediaPonderada() {
        double soma = 0, somaPesos = 0;
        for (int i = 0; i < notas.size(); i++) {
            soma += notas.get(i) * pesos.get(i);
            somaPesos += pesos.get(i);
        }
        return (somaPesos == 0) ? 0 : soma / somaPesos;
    }

    public boolean precisaProvaFinal() {
        double m = mediaPonderada();
        return m >= 4.0 && m < mediaAprovacao;
    }

    public double getMediaAprovacao(){
        return mediaAprovacao;
    }
}
