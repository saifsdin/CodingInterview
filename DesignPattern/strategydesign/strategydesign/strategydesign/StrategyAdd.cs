﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace strategydesign
{
   public class StrategyAdd : IStrategy
    {
        public int execute(int a, int b)
        {
            return a + b;
        }
    }
}
