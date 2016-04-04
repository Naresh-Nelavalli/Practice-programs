using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Enrcyption
{
    class Program
    {
        static void Main(string[] args)
        {
          
                String inCount = Console.ReadLine();
                int count = Convert.ToInt32(inCount);
            for(int t = 0;t<count;t++)
            {
                String input1 = Console.ReadLine();
                string input = input1.ToLower();
                int Acount = 0;
                int Bcount = 0;
                char[] input2 = input.ToCharArray();
                foreach(char c in input2)
                {
                    if (c == 'a')
                        Acount += 1;
                    else
                        Bcount += 1;
                }
                int diff = Math.Abs(Acount - Bcount);
                if(diff == input.Length)
                {
                    diff = diff - 1;
                }
                Console.WriteLine(diff);
            }

               
            }

        }
    }

