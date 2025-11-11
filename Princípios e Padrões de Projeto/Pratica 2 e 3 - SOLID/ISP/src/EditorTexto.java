public class EditorTexto implements ProcessadorArquivo {

    public void abrir(String caminho) {
        System.out.println("Abrindo documento: " + caminho);
    }

    public void salvar(String caminho) {
        System.out.println("Salvando documento: " + caminho);
    }

}