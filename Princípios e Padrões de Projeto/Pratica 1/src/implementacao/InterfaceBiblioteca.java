package implementacao;

import interfaceregistro.JanelaDeAba;
import interfaceregistro.PainelDeListagem;
import sistemabibliotecario.*;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

// usa as peças genericas do pacote interfaceregistro para montar a interface da biblioteca
// tambem gerencia os eventos e a lista de dados
public class InterfaceBiblioteca implements ActionListener {

    // peças genericas
    private JanelaDeAba janelaPrincipal;
    private PainelDeListagem painelListagem;

    // componentes do livro
    private JTextField txtLivroTitulo;
    private JTextField txtLivroAutor;
    private JTextField txtLivroAno;
    private JButton btnIncluirLivro;

    // componentes da revista
    private JTextField txtRevistaTitulo;
    private JTextField txtRevistaOrgao;
    private JTextField txtRevistaVolume;
    private JTextField txtRevistaNumero;
    private JTextField txtRevistaAno;
    private JButton btnIncluirRevista;

    // controlador
    private ArrayList<MaterialBibliotecario> listaDeMateriais;

    public InterfaceBiblioteca(){
        // inicializa a lista de materiais
        listaDeMateriais = new ArrayList<>();

        // cria a janela principal usando a peça generica
        janelaPrincipal = new JanelaDeAba("Biblioteca Municipal");

        // cria os paineis de conteudo para cada aba
        JPanel painelCadastroLivro = criarPainelLivro();
        JPanel painelCadastroRevista = criarPainelRevista();

        // cria o painel de listagem usando a peça generica
        painelListagem = new PainelDeListagem();

        // adiciona as abas na janela
        janelaPrincipal.adicionarAba("Cadastrar Livro", painelCadastroLivro);
        janelaPrincipal.adicionarAba("Cadastrar Revista", painelCadastroRevista);
        janelaPrincipal.adicionarAba("Listagem", painelListagem);
    }

    // torna a janela visivel
    public void mostrar() {
        janelaPrincipal.mostrar();
    }

    // tratamento de evento clique do botão
    @Override
    public void actionPerformed(ActionEvent e) {
        // verifica qual botão disparou o evento
        Object fonte = e.getSource();

        if(fonte == btnIncluirLivro){
            incluirLivro();
        } else if (fonte == btnIncluirRevista) {
            incluirRevista();
        }
    }

    private void incluirLivro() {
        try {
            String titulo = txtLivroTitulo.getText();
            String autor = txtLivroAutor.getText();
            int ano = Integer.parseInt(txtLivroAno.getText());
            Livro novoLivro = new Livro(titulo, ano, autor);
            listaDeMateriais.add(novoLivro);
            atualizarListagem();
            txtLivroTitulo.setText("");
            txtLivroAutor.setText("");
            txtLivroAno.setText("");
            JOptionPane.showMessageDialog(null, "Livro incluído com sucesso!");

        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(null, "Erro: 'Ano' deve ser um número.", "Erro de Formato", JOptionPane.ERROR_MESSAGE);
        }
    }

    private void incluirRevista() {
        try {
            String titulo = txtRevistaTitulo.getText();
            String orgao = txtRevistaOrgao.getText();
            int volume = Integer.parseInt(txtRevistaVolume.getText());
            int numero = Integer.parseInt(txtRevistaNumero.getText());
            int ano = Integer.parseInt(txtRevistaAno.getText());
            Revista novaRevista = new Revista(titulo, ano, orgao, volume, numero);
            listaDeMateriais.add(novaRevista);
            atualizarListagem();
            txtRevistaTitulo.setText("");
            txtRevistaOrgao.setText("");
            txtRevistaVolume.setText("");
            txtRevistaNumero.setText("");
            txtRevistaAno.setText("");
            JOptionPane.showMessageDialog(null, "Revista incluída com sucesso!");

        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(null, "Erro: 'Vol', 'Nro' e 'Ano' devem ser números.", "Erro de Formato", JOptionPane.ERROR_MESSAGE);
        }
    }

    private void atualizarListagem() {
        String textoCompleto = "";
        for (MaterialBibliotecario item : listaDeMateriais) {
            textoCompleto += item.toString() + "\n";
        }
        painelListagem.setTexto(textoCompleto);
    }

    // metodos de criacao dos paineis
    private JPanel criarPainelLivro() {
        JPanel painelPrincipal = new JPanel(new BorderLayout());
        JPanel painelForm = new JPanel(new GridLayout(3, 1, 5, 5));

        txtLivroTitulo = new JTextField(20);
        JPanel linhaTitulo = new JPanel(new FlowLayout(FlowLayout.LEFT));
        linhaTitulo.add(new JLabel("Título:"));
        linhaTitulo.add(txtLivroTitulo);
        painelForm.add(linhaTitulo);

        txtLivroAutor = new JTextField(20);
        JPanel linhaAutor = new JPanel(new FlowLayout(FlowLayout.LEFT));
        linhaAutor.add(new JLabel("Autor:"));
        linhaAutor.add(txtLivroAutor);
        painelForm.add(linhaAutor);

        txtLivroAno = new JTextField(5);
        JPanel linhaAno = new JPanel(new FlowLayout(FlowLayout.LEFT));
        linhaAno.add(new JLabel("Ano:"));
        linhaAno.add(txtLivroAno);
        painelForm.add(linhaAno);

        painelForm.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        painelPrincipal.add(painelForm, BorderLayout.CENTER);

        JPanel painelBotoes = new JPanel(new FlowLayout());
        btnIncluirLivro = new JButton("Incluir");
        painelBotoes.add(btnIncluirLivro);
        painelPrincipal.add(painelBotoes, BorderLayout.SOUTH);

        btnIncluirLivro.addActionListener(this);

        return painelPrincipal;
    }

    private JPanel criarPainelRevista() {
        JPanel painelPrincipal = new JPanel(new BorderLayout());
        JPanel painelForm = new JPanel(new GridLayout(3, 1, 5, 5));

        txtRevistaTitulo = new JTextField(20);
        JPanel linhaTitulo = new JPanel(new FlowLayout(FlowLayout.LEFT));
        linhaTitulo.add(new JLabel("Título:"));
        linhaTitulo.add(txtRevistaTitulo);
        painelForm.add(linhaTitulo);

        txtRevistaOrgao = new JTextField(20);
        JPanel linhaOrgao = new JPanel(new FlowLayout(FlowLayout.LEFT));
        linhaOrgao.add(new JLabel("Org.:"));
        linhaOrgao.add(txtRevistaOrgao);
        painelForm.add(linhaOrgao);

        JPanel linhaTripla = new JPanel(new FlowLayout(FlowLayout.LEFT));
        txtRevistaVolume = new JTextField(5);
        linhaTripla.add(new JLabel("Vol.:"));
        linhaTripla.add(txtRevistaVolume);
        txtRevistaNumero = new JTextField(5);
        linhaTripla.add(new JLabel("Nro.:"));
        linhaTripla.add(txtRevistaNumero);
        txtRevistaAno = new JTextField(5);
        linhaTripla.add(new JLabel("Ano:"));
        linhaTripla.add(txtRevistaAno);
        painelForm.add(linhaTripla);

        painelForm.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        painelPrincipal.add(painelForm, BorderLayout.CENTER);

        JPanel painelBotoes = new JPanel(new FlowLayout());
        btnIncluirRevista = new JButton("Incluir");
        painelBotoes.add(btnIncluirRevista);
        painelPrincipal.add(painelBotoes, BorderLayout.SOUTH);

        btnIncluirRevista.addActionListener(this);

        return painelPrincipal;
    }
}