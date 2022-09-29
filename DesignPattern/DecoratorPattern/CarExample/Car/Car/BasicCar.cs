using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Car
{
    public class BasicCar : ICar
    {
        public void Assembled()
        {
            Console.WriteLine("Basic Car");
        }
    }
}
