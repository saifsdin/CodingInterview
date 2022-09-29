using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Car
{
    public class CarExtra : ICar
    {
        public void Assembled()
        {
            Console.WriteLine("CarExtra introduce");
        }
    }
}
