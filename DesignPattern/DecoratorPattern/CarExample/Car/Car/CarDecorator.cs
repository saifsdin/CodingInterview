using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Car
{
    public class CarDecorator : ICar
    {
        protected ICar car;
        public CarDecorator(ICar car)
        {
            this.car = car;
        }
        public virtual void Assembled()
        {
            car.Assembled();
        }
    }
}
