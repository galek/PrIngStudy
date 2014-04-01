using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractClass
{
    using Analog;
    abstract class Test
    { 
    public abstract void blas();
    }
    class Program
    {
        static void Main(string[] args)
        {
            Class1 rk = new Class1(); ;
            rk.type = "Blah";
            rk.GetManaged();
            rk.GetNative();
        }
    }
}
