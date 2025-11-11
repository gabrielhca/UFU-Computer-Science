public class TesteAlunoLSP {
    public static void main(String[] args) {
        Aluno presencial = new AlunoPresencial("1", "Ana", 6.5, 60, 10); // 83.3% presença
        Aluno ead        = new AlunoEAD("2", "Bruno", 8.0, 20, 20);      // 100% participação


        System.out.println("Ana (Presencial) aprovada? " + presencial.aprovado()); // true
        System.out.println("Bruno (EAD) aprovado? " + ead.aprovado());            // false (ERRADO)
    }
}