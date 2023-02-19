/**************************
* Лабораторная работа № 2 *
*          TXT            *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class TXT : LabTwo{
    public TXT() { }

    public TXT(
      string Name,
      string Author,
      string[] Keywords,
      string Subjects,
      string Path,
    ) : base(Name, Author, Keywords, Subjects, Path) {
          this.DateOfCreation = DateOfCreation;
          this.DateOfChange = DateOfChange;
          this.Size = Size;
        }

        public TXT(string Name, string Author, string[] Keywords, string Subjects, string Path)
          : base(Name, Author, Keywords, Subjects, Path) { }

        public TXT(string Name) : base(Name) { }
        public override void ValueParameter() {
          string ParameterValue = "";

          Console.Write("Тип файла: ");
          Console.WriteLine("TXT");
        }
    }
}

