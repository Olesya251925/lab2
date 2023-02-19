/**************************
* Лабораторная работа № 2 *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class LabTwo {
    public string Name { get; set; }
    public string Author { get; set; }
    public string [] Keywords { get; set; }
    public string Subjects { get; set; }
    public string Path { get; set; }

    public LabTwo(string Name, string Author, string[] Keywords, string Subjects, string Path){
      this.SetValues(Name, Author, Keywords, Subjects, Path);
	}

    public LabTwo(string Name) => this.Name = Name;
    public LabTwo () { }

    public void SetValues(
      string Name,
      string Author,
      string [] Keywords,
      string Subjects,
      string Path
    ) {
	this.Name = Name;
	this.Author = Author;
	this.Keywords = Keywords;
	this.Subjects = Subjects;
	this.Path = Path;
      }

      protected virtual void Print(string Parameter, string ParameterValue) {
        Console.Write(Parameter);
        Console.ForegroundColor = ConsoleColor.DarkGreen;
        Console.WriteLine(ValueParameter);
      }

     public virtual void PrintValues() {
       string ValueParameter = "";

       foreach (string el in Keywords) {
         if (ValueParameter == "") {
           ValueParameter = el;
         } else {
             ValueParameter += ", " + el;
           }
       }

       Print("Имя: ", Name);
       Print("Автор: ", Author);
       Print("Ключевые слова: ", ValueParameter);
       Print("Тематика: ", Subjects);
       Print("Путь к файлу: ", Path);
       ValueParameter = "";
    }
  }
}
