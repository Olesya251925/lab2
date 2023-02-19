/**************************
* Лабораторная работа № 2 *
*          TXT            *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class TXT : LabTwo{
    public string DateCreation { get; set; }
    public string Language { get; set; }
    public TXT() { }

    public TXT(string Name, string Author, string[] Keywords, string Subjects, string Path)
      : base(Name, Author, Keywords, Subjects, Path) { }

    public TXT(string Name) : base(Name) { }
    public override void ValueParameter() {
      string ParameterValue = "";

      Console.Write("Тип файла: ");
      Console.WriteLine("TXT");
      Console.WriteLine($"Дата создания: {DateCreation}\nЯзык: {Language}");
      Console.ReadKey();
    }
  }
}

