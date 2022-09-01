using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Liskov
{
    public class Animal
    {
       public virtual void feed()
        {
            Console.WriteLine("Animal");
        }
    } 
    public class Cat: Animal
    {
        
        public override void feed()
        {
            Console.WriteLine("Cat");
        }
    }

    public class BengalCat: Cat
    {
        public override void feed()
        {
            Console.WriteLine("BengalCat");
        }
       
    }
    public class feedanimal
    {
        public void feed(Animal c)
        {
            c.feed();
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            feedanimal obj = new feedanimal();
            Cat o = new BengalCat();
            obj.feed(o);

            Console.ReadLine();
        }
    }
}
