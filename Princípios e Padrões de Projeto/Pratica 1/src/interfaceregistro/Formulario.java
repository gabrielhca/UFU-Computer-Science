package interfaceregistro;

import javax.swing.*;
import java.awt.*;

public class Formulario {

    // painel generico com uma etiqueta e campo de texto
    public static JPanel criarCampoDeTexto(String etiqueta) {
        // cria o painel com FlowLayput alinhado a esquerda
        JPanel painelCampo = new JPanel(new FlowLayout(FlowLayout.LEFT));

        // cria a etiqueta
        JLabel label = new JLabel(etiqueta);

        // cria o campo de texto
        JTextField campo = new JTextField(20); // tamanho 20

        painelCampo.add(label);
        painelCampo.add(campo);
        return painelCampo;
    }

}
