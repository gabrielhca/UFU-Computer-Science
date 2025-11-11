package interfaceregistro;

import javax.swing.*;
import java.awt.*;

public class JanelaDeAba {
    private JFrame janela;
    private JTabbedPane painelDeAbas;

    public JanelaDeAba(String titulo){
        janela = new JFrame(titulo);
        janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        janela.setSize(350,250); // tamanho razoavel

        // cria um painel de abas
        painelDeAbas = new JTabbedPane();

        // BorderLayout.CENTER permite que as abas ocupem todo espaço
        janela.getContentPane().add(painelDeAbas, BorderLayout.CENTER);
    }

    // metodo para adicionar uma nova aba
    public void adicionarAba(String tituloAba, JPanel painelConteudo){
        painelDeAbas.addTab(tituloAba, painelConteudo);
    }

    // torna a janela visivel
    public void mostrar(){
        janela.setVisible(true);
    }

}
