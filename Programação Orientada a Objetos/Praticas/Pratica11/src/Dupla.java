public class Dupla {

	private String jogador1;
	private String jogador2;
	private int tentos;

	public Dupla() {
		this.jogador1 = "";
		this.jogador2 = "";
		this.tentos = 0;
	}

	public String getJogador1() {
		return jogador1;
	}

	public String getJogador2() {
		return jogador2;
	}

	public int getTentos() {
		return tentos;
	}

	public void setJogador1(String jogador1) {
		this.jogador1 = jogador1;
	}

	public void setJogador2(String jogador2) {
		this.jogador2 = jogador2;
	}

	public void setTentos(int tentos) {
		this.tentos = tentos;
	}

	public void maisTentos(int n) {
		this.tentos += n;
	}
}