public class TesteISP {

    public static void main(String[] args) {
        ProcessadorArquivo editor = new EditorTexto();
        ComunicadorEmail enviar = new ClienteEmail();
        editor.abrir("documento.docx");
        editor.salvar("documento.docx");

        try {
            enviar.enviarEmail("alguem@exemplo.com", "teste");
        } catch (UnsupportedOperationException e) {
            System.out.println("[Erro esperado] " + e.getMessage());
        }

    }

}