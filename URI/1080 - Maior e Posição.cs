using System; 
using System.Collections.Generic;
class URI {

    static void Main(string[] args) { 

        int m = 0, pos = 0;
            int n = 100;
            List <int> v = new List<int> ();
            for(int i = 0; i < n; i++)
            {
                int x = Convert.ToInt32(Console.ReadLine());
                v.Add(x);
            }
            for (int i = 0; i < n; i++)
            {
                if (v[i] > m)
                {
                    m = v[i];
                    pos = i + 1;
                }
            }
            Console.WriteLine(m);
            Console.WriteLine(pos);
            Console.ReadKey();
    }
}
