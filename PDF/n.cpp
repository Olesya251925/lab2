/**************************
* Лабораторная работа № 2 *
*           PDF           *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class PDF : LabTwo {
    public string Title { get; set; }
    public string NumberPages { get; set; }
    public PDF() { }

    public PDF (string Name, string Author, string[] Keywords, string Subjects, string Path)
      : base (Name, Author, Keywords, Subjects, Path) { }

    public PDF(string Name) : base(Name) { }
    
    public override void PrintValues() {
      string ParameterValue = "";

      Console.Write("Тип файла: ");
      Console.WriteLine("PDF");
      Console.WriteLine($"Заголовок: {Title}\nКоличество страниц: {NumberPages}");
      Console.ReadKey();
    }
  }
}
