using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace strategydesign
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 2;
            int b = 4;
            // Context c = new Context(new Strategymul());
           // Context c = new Context(new StrategyAdd());
            Context c = new Context(new Strategysub());
            Console.WriteLine(c.execute(2, 4));

            Console.ReadLine();
        }
    }
}
