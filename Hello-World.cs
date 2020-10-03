using System;
using System.Collections.Generic;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            var myMessage = new List<string>()
            {
                "Hello World !",
                "Sawasdee kub from Thailand !!",
                "Once I've been here at Hacktoberfest 2018 !!!",
            };
            myMessage.ForEach(m => Console.WriteLine(m));
        }
    }
}
