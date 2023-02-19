/**************************
* Лабораторная работа № 2 *
*        MS Word          *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class MS Word : LabTwo {
    public MS Word() { }

    public MS Word(
      string Name,
      string Author,
      string [] Keywords,
      string Subjects,
      string Path,
    ) : base(Name, Author, Keywords, Subjects, Path) {
        }

        public MS Word (string Name, string Author, string[] Keywords, string Subjects, string Path)
          : base (Name, Author, Keywords, Subjects, Path) { }

        public MS Word(string Name) : base(Name) { }

        public override void PrintValues() { //override предоставляет новую реализацию метода, унаследованного от базового класса
          string ParameterValue = "";

          Console.Write("Тип файла: ");
          Console.WriteLine("DOC");
        }
    }
}
