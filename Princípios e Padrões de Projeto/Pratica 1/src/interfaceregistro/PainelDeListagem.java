package interfaceregistro;

import javax.swing.*;
import java.awt.*;

// como essa classe é um painel, ela herda JPanel
public class PainelDeListagem extends JPanel {
    private JTextArea areaDeTexto;

    public PainelDeListagem(){
        // BorderLayout() faz com que o JScrollPane preencha todo o espaço
        setLayout(new BorderLayout());

        // cria a area de texto
        areaDeTexto = new JTextArea();
        areaDeTexto.setEditable(false); // o usuario não pode digitar na listagem

        // cria o JScrollPane e coloca a area de texto dentro dele
        JScrollPane painelComScroll = new JScrollPane(areaDeTexto);

        // adiciona o painel com scroll no centro do JPanel
        add(painelComScroll, BorderLayout.CENTER);
    }

    // permite definir o que aparece na listagem
    public void setTexto(String texto){
        areaDeTexto.setText(texto);
        areaDeTexto.setCaretPosition(0);
    }
}
