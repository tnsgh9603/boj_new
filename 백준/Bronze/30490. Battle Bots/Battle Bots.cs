using System;  // Console
using System.IO;  // BufferedStream, StreamReader
using System.Text;  // StringBuilder

namespace C_Project
{
    class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StringBuilder sb = new StringBuilder();

            long n = long.Parse(sr.ReadLine());
            bool decimal_part = false;

            int res = 0;
            while(n > 0)
            {
                if (!decimal_part && n != 1 && n % 2 != 0) decimal_part = true;

                n /= 2;

                res += 1; 
            }
            if (decimal_part) res += 1;

            sb.Append(res);

            Console.Write(sb);
        }
    }
}