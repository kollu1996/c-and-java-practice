import jade.core.Agent;
import java.util.*;
public class HelloWorldAgent extends Agent {
protected void setup() {
System.out.println("Hello World. I’m an agent!");
System.out.println("My local-name is "+getAID().getLocalName());
System.out.println("My GUID is "+getAID().getName());
System.out.println("My addresses are:");
Iterator it = getAID().getAllAddresses();
while (it.hasNext()) {
System.out.println("- "+it.next());
}
}

public static void main (String []args)
 {
    String localname = "Peter";
AID id = new AID(localname, AID.ISLOCALNAME);

String guid = "Peter@foo-platform";
AID id = new AID(guid, AID.ISGUID);
}
}
