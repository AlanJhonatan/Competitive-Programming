using System; 
class URI {
    static void Main(string[] args) { 
            int x = Convert.ToInt32(Console.ReadLine());
            int y = Convert.ToInt32(Console.ReadLine());
            int menor,maior,acum=0;
            if (x > y)
            {
                menor = y;
                maior = x;
            }
            else
            {
                menor = x;
                maior = y;
            }        
            for (int i = menor+1; i < maior; i++)
            {
                if (i%2 != 0)
                {
                    acum += i;
                }
            }
            Console.WriteLine(acum);
            Console.ReadKey();
    }
}
