/**************************
* Лабораторная работа № 2 *
*           HTML          *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class HTML : LabTwo {
    public HTML() { }

    public HTML(
      string Name,
      string Author,
      string [] Keywords,
      string Subjects,
      string Path,
    ) : base(Name, Author, Keywords, Subjects, Path){ 
        }

        public HTML(string Name, string Author, string[] Keywords, string Subjects, string Path)
        : base(Name, Author, Keywords, Subjects, Path) { }

        public HTML(string Name) : base(Name) { } 

        public override void PrintValues(){
          string ValueParameter = "";
          Console.Write("Тип файла: ");
          Console.WriteLine("HTML");
        }
    }
}
