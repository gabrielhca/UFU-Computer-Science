import javax.swing.*;
import java.awt.*;

public class Calculadora2 {
    private JFrame frame;
    private JTextField visor;
    private JTextArea visor2;
    private double acumulador = 0;
    private String operadorPendente = null;
    private boolean iniciarNovoNumero = true; // controla quando começar a digitação de um novo número

    public static void main(String[] args) {
        new Calculadora2().mostrar();
    }

    private void mostrar() {
        frame = new JFrame("Calculadora");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout(10, 10));
        visor = new JTextField("0");
        visor.setEditable(false);
        visor.setHorizontalAlignment(SwingConstants.RIGHT);
        frame.add(visor, BorderLayout.NORTH);
        visor2 = new JTextArea(8, 8);
        visor2.setEditable(false);
        frame.add(new JScrollPane(visor2), BorderLayout.SOUTH);
        JPanel grade = new JPanel(new GridLayout(5, 4, 6, 6));
        frame.add(grade, BorderLayout.CENTER);
        // Linha 1: C, ⌫, ±, ÷
        addBotao(grade, "C", e -> limparTudo());
        addBotao(grade, "<|", e -> backspace());
        addBotao(grade, "±", e -> trocaSinal());
        addBotao(grade, "÷", e -> operador("/"));
        // Linha 2: 7 8 9 ×
        addBotao(grade, "7", e -> digito("7"));
        addBotao(grade, "8", e -> digito("8"));
        addBotao(grade, "9", e -> digito("9"));
        addBotao(grade, "×", e -> operador("*"));
        // Linha 3: 4 5 6 −
        addBotao(grade, "4", e -> digito("4"));
        addBotao(grade, "5", e -> digito("5"));
        addBotao(grade, "6", e -> digito("6"));
        addBotao(grade, "−", e -> operador("-"));
        // Linha 4: 1 2 3 +
        addBotao(grade, "1", e -> digito("1"));
        addBotao(grade, "2", e -> digito("2"));
        addBotao(grade, "3", e -> digito("3"));
        addBotao(grade, "+", e -> operador("+"));
        // Linha 5: 0 . = (largura normal)
        addBotao(grade, "0", e -> digito("0"));
        addBotao(grade, ".", e -> pontoDecimal());
        addBotao(grade, "=", e -> calcularIgual());
        frame.pack();
        frame.setResizable(false);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

    private void addBotao(JPanel pai, String texto, java.awt.event.ActionListener acao) {
        JButton b = new JButton(texto);
        b.addActionListener(acao);
        pai.add(b);
    }

    // ===== Métodos tratadores =====
    private void digito(String d) {
        if (iniciarNovoNumero || visor.getText().equals("0")) {
            visor.setText(d);
            iniciarNovoNumero = false;
        } else {
            visor.setText(visor.getText() + d);
        }
    }

    private void pontoDecimal() {
        if (iniciarNovoNumero) {
            visor.setText("0.");
            iniciarNovoNumero = false;
        } else if (!visor.getText().contains(".")) {
            visor.setText(visor.getText() + ".");
        }
    }

    private void trocaSinal() {
        if (iniciarNovoNumero)
            return;
        String t = visor.getText();
        if (t.equals("0"))
            return;
        if (t.startsWith("-"))
            visor.setText(t.substring(1));
        else
            visor.setText("-" + t);
    }

    private void backspace() {
        if (iniciarNovoNumero)
            return;
        String t = visor.getText();
        if (t.length() > 1) {
            t = t.substring(0, t.length() - 1);
            // evita ficar só com um "-" no visor
            if (t.equals("-"))
                t = "0";
            visor.setText(t);
        } else {
            visor.setText("0");
            iniciarNovoNumero = true;
        }
    }

    private void limparTudo() {
        acumulador = 0;
        operadorPendente = null;
        iniciarNovoNumero = true;
        visor.setText("0");
    }

    private void operador(String op) {
        try {
            double valorAtual = lerVisor();
            if (operadorPendente == null) {
                acumulador = valorAtual;
            } else if (!iniciarNovoNumero) {
                acumulador = aplicarOperacao(acumulador, valorAtual, operadorPendente);
                visor.setText("" + acumulador);
            }
            operadorPendente = op;
            iniciarNovoNumero = true;
        } catch (ArithmeticException ex) {
            erro(ex.getMessage());
        }
    }

    private void calcularIgual() {
        if (operadorPendente == null)
            return;
        try {
            double valorAtual = lerVisor();
            double primeiroNumero = acumulador;
            acumulador = aplicarOperacao(primeiroNumero, valorAtual, operadorPendente);
            String historico = primeiroNumero + " " + operadorPendente + " " + valorAtual + " = " + acumulador;
            visor2.setText(visor2.getText() + "" + historico + "\n");
            visor.setText("" + acumulador);
            operadorPendente = null;
            iniciarNovoNumero = true;
        } catch (ArithmeticException ex) {
            erro(ex.getMessage());
        }
    }

    private double aplicarOperacao(double a, double b, String op) {
        switch (op) {
            case "+":
                return a + b;
            case "-":
                return a - b;
            case "*":
                return a * b;
            case "/":
                if (b == 0) {
                    throw new ArithmeticException("Divisão por zero");
                }
                // divisão com escala e arredondamento para evitar ArithmeticException
                return a / b;
            default:
                return b;
        }
    }

    private double lerVisor() {
        String t = visor.getText();
        if (t.equals(".") || t.equals("-."))
            t = "0";
        return Double.parseDouble(t);
    }

    private void erro(String msg) {
        visor.setText("Erro");
        operadorPendente = null;
        iniciarNovoNumero = true;
        JOptionPane.showMessageDialog(frame, msg, "Erro", JOptionPane.ERROR_MESSAGE);
    }
}
