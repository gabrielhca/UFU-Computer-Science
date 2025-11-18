package teste;

import sistemabancario.Cliente;
import sistemabancario.Conta;

public class TestesManuais {
    public void executarTestes() {
        System.out.println("Iniciando testes manuais do sistema bancário...\n");
        Cliente gabriel = new Cliente("Gabriel Rodrigues", "Rua A, 123");
        Cliente monica = new Cliente("Monica Wanille", "Rua B, 456");
        Cliente maria = new Cliente("Maria João", "Rua C, 789");
        // Criação de contas
        Conta contaGabriel = new Conta(gabriel, false, 1000.0);
        Conta contaMonica = new Conta(monica, true, 500.0);
        Conta contaMaria = new Conta(maria, false, 200.0);
        System.out.println("----- TESTE 1: Operações Básicas -----");
        contaGabriel.depositar(300.0);
        contaMonica.sacar(200.0);
        contaMaria.depositar(150.0);
        System.out.println();
        System.out.println("----- TESTE 2: Transferências -----");
        contaGabriel.transferir(400.0, contaMonica);
        contaMaria.transferir(500.0, contaGabriel);
        contaMonica.transferir(800.0, contaMaria);
        System.out.println();
        System.out.println("----- TESTE 3: Casos de Borda -----");
        contaGabriel.sacar(0.0);
        contaMonica.depositar(-100.0);
        contaMaria.sacar(contaMaria.getSaldo() + 1);
        System.out.println();
        System.out.println("----- TESTE 4: Extratos e Dados -----");
        System.out.println("\nDados do Gabriel:");
        contaGabriel.dadosCliente();
        System.out.println("\nExtrato da Monica:");
        contaMonica.imprimirExtrato();
        System.out.println("\nExtrato da Maria:");
        contaMaria.imprimirExtrato();
        System.out.println("\n----- TESTE 5: Saldos Finais -----");
        System.out.println("Saldo Gabriel: R$ " + contaGabriel.getSaldo());
        System.out.println("Saldo Monica: R$ " + contaMonica.getSaldo());
        System.out.println("Saldo Maria: R$ " + contaMaria.getSaldo());
        System.out.println("\n----- TESTE 6: Situações Especiais -----");
        System.out.println("Tentando saque grande em conta normal:");
        contaGabriel.sacar(2000.0);
        System.out.println("\nTentando saque grande em conta especial:");
        contaMonica.sacar(1500.0);
    }

    public static void main(String[] args) {
        new TestesManuais().executarTestes();
    }
}
