/**************************
* Лабораторная работа № 2 *
*        MS Word          *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class MS Word {
    public string DateCreation { get; set; }
    public string DateChange { get; set; }
    public string Size { get; set; }
    public string Password { get; set; }
    public MS Word() { }

    public MS Word(
      string Name,
      string Author,
      string [] Keywords,
      string Subjects,
      string Path,
      string DateCreation,
      string DateChange,
      string Size
    ) : base(Name, Author, Keywords, Subjects, Path) {
          this.DateCreation = DateCreation;
          this.DateChange = DateChange;
          this.Size = Size;
        }

        public MS Word (string Name, string Author, string[] Keywords, string Subjects, string Path)
          : base (Name, Author, Keywords, Subjects, Path) { }

        public MS Word(string Name) : base(Name) { }

        public override void PrintValues() { //override предоставляет новую реализацию метода, унаследованного от базового класса
          string ParameterValue = "";

          Console.Write("Тип файла: ");
          Console.WriteLine("DOC");

          if (this.DateCreation == "") {
            ValueParameter = "Не существует";
          } else {
              ValueParameter = this.DateCreation;
            }

            base.Print("Дата создания: ", ValueParameter);
            ValueParameter = "";

            if (this.DateChange == "") {
                ValueParameter = "Не существует";
            } else{
                ValueParameter = this.DateChange;
            }

            base.Print("Дата изменения: ", ValueParameter);
            ValueParameter = "";

            if (this.Size == "") {
              ParameterValue = "Не существует";
            } else {
                ParameterValue = this.Size;
            }
            base.Print("Размер файла: ", ParameterValue);
            ParameterValue = "";

            if (this.Password == "") {
              ParameterValue = "Не существует";
            } else {
              ParameterValue = this.Password;
            }
            base.Print("Введите пароль: ", ParameterValue);
        }
    }
}
