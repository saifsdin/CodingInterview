using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Car
{
    public class SportCar :CarDecorator
    {
        public SportCar(ICar c):base(c)
        {

        }

        public override void Assembled()
        {
            base.Assembled();
            Console.WriteLine("Sport car introduce");
        }
    }
}
