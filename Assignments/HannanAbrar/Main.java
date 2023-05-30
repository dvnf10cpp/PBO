class User {
	String username;
	String password;

	User(String username, String password) {
		this.username = username;
		this.password = password;
	}
}

public class Main {
	public static void main(String[] args) {
		User hannan = new User("Hannan","ubpti22");
		System.out.printf("%s\n",hannan.username);
	}
}
