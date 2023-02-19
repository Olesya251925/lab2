/**************************
* Лабораторная работа № 2 *
*         MS Excel        *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class MS Excel : ElDocum {
    public int NumberColumns { get; set; }
    public int NumberRows { get; set; }
    public Excel() { }

    public MS Excel(string Name, string Author, string[] Keywords, string Subjects, string Path)
      : base(Name, Author, Keywords, Subjects, Path) { }

    public MS Excel(string Name) : base(Name) { }

    public override void ValueParameter() {
      Console.Write("Тип файла: ");
      Console.WriteLine("MS Excel");
      Console.WriteLine($"Количество Столбцов: {NumberColumns}\nКоличество Строк: {NumberRows}");
      Console.ReadKey();
    }
  }
}
