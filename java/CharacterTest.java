import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class CharacterTest {
public static void main(String[] args) throws IOException{
BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter a Character: ");
char ch=(char)br.read();

if(ch>='A' && ch<='Z')
System.out.println("The character is Upper Case");
else	if(ch>='a' && ch<='z')
System.out.println("The character is Lower Case");
else if(ch>='0' && ch<='9')
System.out.println("The character is Digit");
else
System.out.println("The character is Special One");
}
}