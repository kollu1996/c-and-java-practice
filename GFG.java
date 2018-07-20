import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner in = new Scanner (System.in);
		int t = in.nextInt();
		for (int i = 0; i < t; i++) {
		    int n = in.nextInt();
		    String [] array = new String [n];
		    for (int j = 0; j < n; j++) {
		        array[j] = String.valueOf(in.nextInt());
		    }
		    System.out.println(form(array));
		}
		in.close();
	}
	
	private static String form (String [] array) {
	    Arrays.sort(array, new Comparator<String>(){
	       @Override
	       public int compare(String s1, String s2) {
	           return comp(s1, s2);
	       }
	    });
	    StringBuilder sb = new StringBuilder();
	    for (int i = array.length - 1; i >= 0; i--) {
	        sb.append(array[i]);
	    }
	    return sb.toString();
	}
	
	private static int comp(String s1, String s2) {
	    int i1 = 0, i2 = 0;
	    while (i1 < s1.length() && i2 < s2.length()) {
	        if (s1.charAt(i1) < s2.charAt(i2)) {
	            return -1;
	        } else if (s1.charAt(i1) > s2.charAt(i2)) {
	            return 1;
	        }
	        i1++;
	        i2++;
	    }
	    if (i1 >= s1.length() && i2 >= s2.length()) {
	        return 0;
	    } else if (i1 >= s1.length()) {
	        return comp(s1, s2.substring(i2));
	    } else {
	        return comp(s1.substring(i1), s2);
	    }
	}
}
