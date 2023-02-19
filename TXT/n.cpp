/**************************
* Лабораторная работа № 2 *
*          TXT            *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class TXT : LabTwo {
    public string DateCreation { get; set; }
    public string DateChange { get; set; }
    public string Size { get; set; }

    public TXT() { }

    public TXT(
      string Name,
      string Author,
      string[] Keywords,
      string Subjects,
      string Path,
      string DateCreation,
      string DateChange,
      string Size
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

          if (this.DateCreation == ""){
            ValueParameter = "Не существует";
          } else {
            ValueParameter = this.DateCreation;
            }

            base.Print("Дата создания: ", ValueParameter);
            ValueParameter = "";

            if (this.DateChange == "") {
              ValueParameter = "Не существует";
            } else {
                ValueParameter = this.DateChange;
            }

            base.Print("Дата изменения: ", ValueParameter);
            ValueParameter = "";

            if (this.Size == "") {
              ValueParameter = "Не существует";
            } else {
                ValueParameter = this.Size;
            }
            base.Print("Размер файла: ", ValueParameter);
            ValueParameter = "";
        }
    }
}
