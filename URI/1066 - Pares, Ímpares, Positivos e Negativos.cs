using System; 

class URI {

    static void Main(string[] args) { 

        int pr = 0, imp = 0, pos = 0, neg = 0; 
            for (int i = 0; i < 5; i++)
            {
                int n = Convert.ToInt32(Console.ReadLine());
                if (n % 2 == 0)
                    pr++;
                else
                    imp++;

                if (n > 0)
                    pos++;
                else if (n < 0)
                    neg++;
            }
            Console.WriteLine("{0} valor(es) par(es)", pr);
            Console.WriteLine("{0} valor(es) impar(es)", imp);
            Console.WriteLine("{0} valor(es) positivo(s)", pos);
            Console.WriteLine("{0} valor(es) negativo(s)", neg);
            Console.ReadKey();

    }

}
