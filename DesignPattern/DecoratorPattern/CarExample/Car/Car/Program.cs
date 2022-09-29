using System;

namespace Car
{
    class Program
    {
        static void Main(string[] args)
        {
            ICar sportcar = new SportCar(new BasicCar());
            sportcar = new SportCar(new CarExtra());
            sportcar.Assembled();

            Console.WriteLine("\n");

            ICar luxycar = new LuxaryCar(new BasicCar());
            luxycar.Assembled();

            Console.ReadLine();
        }
    }
}
