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

    protected virtual void Print(string Parameter, string ParameterValue) {
    }

    public virtual void PrintValues() {
      Print("Имя: ", Name);
      Print("Автор: ", Author);
      Print("Ключевые слова: ", ValueParameter);
      Print("Тематика: ", Subjects);
      Print("Путь к файлу: ", Path);
    }
  }
}
