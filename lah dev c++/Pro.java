public class Pro{
	int a1=100;

	/*static{
		int a2=20;
		System.out.println("in block"+a2);              // 20
		System.out.println("in block"+a1+","+a2); //30 , 20            //
	}*/
	public static void main(String args[])
	{ 
		System.out.println("in main"); // 20 

	Pro p1=new Pro();
	p1.a1=300;
		System.out.println("in main"+p1.a1); // 30,20
}}

		