using System; 
class URI {
    static void Main(string[] args) { 
       double n = double.Parse(Console.ReadLine());
            double a = 3.14159 * (n * n);
            Console.WriteLine("A="+a.ToString("0.0000"));
            Console.ReadKey();
    }
}
