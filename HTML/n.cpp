/**************************
* Лабораторная работа № 2 *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class HTML {
    public string DateCreation { get; set; }
    public string DateChange { get; set; }
    public string Size { get; set; }
    public HTML() { }
      
    public HTML(
      string Name,
      string Author,
      string[] Keywords,
      string Subjects,
      string Path,
      string DateCreation,
      string DateChange,
      string Size
    ) : base(Name, Author, Keywords, Subjects, Path){ //base используется для доступа к членам базового класса из производного класса
          this.DateOfCreation = DateOfCreation;
          this.DateOfChange = DateOfChange;
          this.Size = Size;
        }
  
        public HTML(string Name, string Author, string[] Keywords, string Subjects, string Path)
        : base(Name, Author, Keywords, Subjects, Path) { }

        public HTML(string Name) : base(Name) { } 

        public override void PrintValues(){
          string ValueParameter = "";
          Console.Write("Тип файла: ");
          Console.WriteLine("HTML");

          if (this.DateCreation == ""){
            ValueParameter = "Не существует";
          } else{
            ValueParameter = this.DateCreation;
          }

          base.Print("Дата создания: ", ValueParameter);
          ValueParameter = "";

          if (this.DateChange == ""){
            ValueParameter = "Не существует";
          } else {
            ValueParameter = this.DateChange;
          }

          base.Print("Дата изменения: ", ValueParameter);
          ValueParameter = "";

          if (this.Size == ""){
            ValueParameter = "Не существует";
          } else {
            ValueParameter = this.Size;
          }
          base.Print("Размер файла: ", ValueParameter);
          ValueParameter = "";
        }
    }
}
