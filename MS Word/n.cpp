/**************************
* Лабораторная работа № 2 *
*        MS Word          *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class MS Word : ElDocum {
    public string LetterSize { get; set; }
    public int LetterFont { get; set; }
    public string ElapsedTime { get; set; }
    public MS Word() { }

    public MS Word (string Name, string Author, string[] Keywords, string Subjects, string Path)
      : base (Name, Author, Keywords, Subjects, Path) { }

    public MS Word(string Name) : base(Name) { }

    public override void OutputLines() { 
       Console.Write("Тип файла: ");
       Console.WriteLine("DOC");
       Console.WriteLine($"Размер букв: {LetterSize}\nШрифт букв: {LetterFont}\nЗатраченное время: {ElapsedTime}");
       Console.ReadKey();
    }
  }
}
