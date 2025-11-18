import javax.swing.*;
import javax.swing.border.TitledBorder;
import java.awt.*;
import java.io.*;
import java.util.Properties;

public class PlacarTruco extends JFrame {

	private static final String NOME_ARQUIVO = "placar_truco.txt";


	private Dupla dupla1;
	private Dupla dupla2;


	private JTextField txtNome1Dupla1, txtNome2Dupla1, txtTentosDupla1;
	private JTextField txtNome1Dupla2, txtNome2Dupla2, txtTentosDupla2;

	public PlacarTruco() {

		dupla1 = new Dupla();
		dupla2 = new Dupla();

		setTitle("Placar de Truco");
		setSize(500, 280);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setResizable(false);
		setLocationRelativeTo(null);

		JPanel painelPrincipal = new JPanel(new GridLayout(1, 2, 20, 0));

		painelPrincipal.add(criarPainelDupla("Dupla 1", dupla1, txtNome1Dupla1 = new JTextField(15), txtNome2Dupla1 = new JTextField(15), txtTentosDupla1 = new JTextField(3)));
		painelPrincipal.add(criarPainelDupla("Dupla 2", dupla2, txtNome1Dupla2 = new JTextField(15), txtNome2Dupla2 = new JTextField(15), txtTentosDupla2 = new JTextField(3)));

		add(painelPrincipal);

		carregarDados();
	}

	private JPanel criarPainelDupla(String titulo, Dupla dupla, JTextField txtNome1, JTextField txtNome2, JTextField txtTentos) {
		JPanel painelDupla = new JPanel(new BorderLayout(0, 10));
		painelDupla.setBorder(new TitledBorder(titulo));

		JPanel painelNomes = new JPanel(new GridLayout(2, 2, 0, 5));
		painelNomes.add(new JLabel("  Nome 1:"));
		painelNomes.add(txtNome1);
		painelNomes.add(new JLabel("  Nome 2:"));
		painelNomes.add(txtNome2);
		painelDupla.add(painelNomes, BorderLayout.NORTH);

		JPanel painelTentos = new JPanel(new FlowLayout(FlowLayout.CENTER, 10, 0));
		painelTentos.add(new JLabel("Tentos:"));
		txtTentos.setEditable(false);
		painelTentos.add(txtTentos);
		painelDupla.add(painelTentos, BorderLayout.CENTER);

		JPanel painelBotoes = new JPanel(new GridLayout(1, 3, 5, 0));
		JButton btnMais1 = new JButton("+1");
		JButton btnMais3 = new JButton("+3");
		JButton btnMenos1 = new JButton("-1");

		btnMais1.addActionListener(e -> {
			dupla.maisTentos(1);
			atualizarTentos(dupla, txtTentos);
		});
		btnMais3.addActionListener(e -> {
			dupla.maisTentos(3);
			atualizarTentos(dupla, txtTentos);
		});
		btnMenos1.addActionListener(e -> {
			dupla.maisTentos(-1);
			atualizarTentos(dupla, txtTentos);
		});

		painelBotoes.add(btnMais1);
		painelBotoes.add(btnMais3);
		painelBotoes.add(btnMenos1);
		painelDupla.add(painelBotoes, BorderLayout.SOUTH);

		return painelDupla;
	}

	private void atualizarTentos(Dupla dupla, JTextField txtTentos) {
		txtTentos.setText(String.valueOf(dupla.getTentos()));
		salvarDados();
	}

	private void salvarDados() {
		Properties props = new Properties();
		props.setProperty("dupla1.nome1", txtNome1Dupla1.getText());
		props.setProperty("dupla1.nome2", txtNome2Dupla1.getText());
		props.setProperty("dupla1.tentos", String.valueOf(dupla1.getTentos()));
		props.setProperty("dupla2.nome1", txtNome1Dupla2.getText());
		props.setProperty("dupla2.nome2", txtNome2Dupla2.getText());
		props.setProperty("dupla2.tentos", String.valueOf(dupla2.getTentos()));

		try (OutputStream output = new FileOutputStream(NOME_ARQUIVO)) {
			props.store(output, "Dados do Placar de Truco");
		} catch (IOException io) {
			io.printStackTrace();
		}
	}

	private void carregarDados() {
		Properties props = new Properties();
		try (InputStream input = new FileInputStream(NOME_ARQUIVO)) {
			props.load(input);
			txtNome1Dupla1.setText(props.getProperty("dupla1.nome1"));
			txtNome2Dupla1.setText(props.getProperty("dupla1.nome2"));
			dupla1.setTentos(Integer.parseInt(props.getProperty("dupla1.tentos")));
			txtTentosDupla1.setText(String.valueOf(dupla1.getTentos()));

			txtNome1Dupla2.setText(props.getProperty("dupla2.nome1"));
			txtNome2Dupla2.setText(props.getProperty("dupla2.nome2"));
			dupla2.setTentos(Integer.parseInt(props.getProperty("dupla2.tentos")));
			txtTentosDupla2.setText(String.valueOf(dupla2.getTentos()));

		} catch (IOException | NumberFormatException ex) {
			// Arquivo não encontrado ou dados inválidos, começa com placar zerado
		}
	}

	public static void main(String[] args) {
		SwingUtilities.invokeLater(() -> {
			PlacarTruco placar = new PlacarTruco();
			placar.setVisible(true);
		});
	}
}