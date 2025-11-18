import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;

public class AgendaGUI {
    private JFrame agendaFrame;
    private JTextField visor;
    private JTextField campoNome = new JTextField(20);
    private JTextField campoTelefone = new JTextField(20);
    private JTextField campoEndereco = new JTextField(20);
    private final ArrayList<Pessoa> contatos;

    public AgendaGUI() {
        agendaFrame = new JFrame("Agenda Telefônica");
        agendaFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        agendaFrame.setSize(300, 250);
        agendaFrame.setLayout(new BorderLayout(5, 5));
        JPanel painelPrincipal = new JPanel(new GridLayout(4, 1, 5, 5));
        visor = new JTextField();
        visor.setEditable(false);
        painelPrincipal.add(visor);
        JPanel painelNome = new JPanel();
        painelNome.add(new JLabel("Nome:"));
        painelNome.add(campoNome);
        painelPrincipal.add(painelNome);
        JPanel painelTelefone = new JPanel();
        painelTelefone.add(new JLabel("Telefone:"));
        painelTelefone.add(campoTelefone);
        painelPrincipal.add(painelTelefone);
        JPanel painelEndereco = new JPanel();
        painelEndereco.add(new JLabel("Endereço:"));
        painelEndereco.add(campoEndereco);
        painelPrincipal.add(painelEndereco);
        agendaFrame.add(painelPrincipal, BorderLayout.CENTER);
        JPanel painelBotoes = new JPanel();
        JButton btnCadastrar = new JButton("Cadastrar");
        JButton btnProcurar = new JButton("Procurar");
        JButton btnApagar = new JButton("Apagar");
        btnCadastrar.addActionListener(e -> cadastrarContato());
        btnProcurar.addActionListener(e -> procurarContato());
        btnApagar.addActionListener(e -> apagarContato());
        painelBotoes.add(btnProcurar);
        painelBotoes.add(btnApagar);
        painelBotoes.add(btnCadastrar);
        agendaFrame.add(painelBotoes, BorderLayout.SOUTH);
        contatos = new ArrayList<>();
        agendaFrame.setResizable(false);
        agendaFrame.setLocationRelativeTo(null);
        agendaFrame.setVisible(true);
    }

    private void cadastrarContato() {
        String nome = campoNome.getText();
        String telefone = campoTelefone.getText();
        String endereco = campoEndereco.getText();
        contatos.add(new Pessoa(nome, telefone, endereco));
        visor.setText("Cadastrado: " + nome);
    }

    private void procurarContato() {
        String nome = campoNome.getText();
        for (Pessoa p : contatos) {
            if (p.getNome().equalsIgnoreCase(nome)) {
                campoTelefone.setText(p.getTelefone());
                campoEndereco.setText(p.getEndereco());
                visor.setText("Encontrado: " + nome);
                return;
            }
        }
        visor.setText("Não encontrado: " + nome);
    }

    private void apagarContato() {
        String nome = campoNome.getText();
        for (int i = 0; i < contatos.size(); i++) {
            if (contatos.get(i).getNome().equalsIgnoreCase(nome)) {
                contatos.remove(i);
                campoNome.setText("");
                campoTelefone.setText("");
                campoEndereco.setText("");
                visor.setText("Apagado: " + nome);
                return;
            }
        }
        visor.setText("Não encontrado: " + nome);
    }

    public static void main(String[] args) {
        new AgendaGUI();
    }
}
