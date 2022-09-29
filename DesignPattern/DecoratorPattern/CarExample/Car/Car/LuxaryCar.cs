using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Car
{
    public class LuxaryCar :CarDecorator
    {
        public LuxaryCar(ICar c):base(c)
        {

        }
        public override void Assembled()
        {
            base.Assembled();
            Console.WriteLine("Luxury car introduce");
        }
    }
}
