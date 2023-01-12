using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace strategydesign
{
   public class Context
    {
        public IStrategy stategy;

        public Context(IStrategy stategy)
        {
            this.stategy = stategy;
        }

        public int execute(int a,int b)
        {
            return this.stategy.execute(a, b);
        }
    }
}
