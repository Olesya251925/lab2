/**************************
* Лабораторная работа № 2 *
*         MS Excel        *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class MS Excel : LabTwo {
    public Excel() { }

    public MS Excel(
      string Name,
      string Author,
      string [] Keywords,
      string Subjects,
      string Path
    ) : base(Name, Author, Keywords, Subjects, Path){
        }

        public MS Excel(string Name, string Author, string[] Keywords, string Subjects, string Path)
          : base(Name, Author, Keywords, Subjects, Path) { }

        public MS Excel(string Name) : base(Name) { }

        public override void ValueParameter() {
          string ValueParameter = "";

          Console.Write("Тип файла: ");
          Console.WriteLine("MS Excel");
        }
    }
}
