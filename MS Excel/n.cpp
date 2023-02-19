/**************************
* Лабораторная работа № 2 *
*         MS Excel        *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class MS Excel : LabTwo {
    public string DateCreation { get; set; }
    public string DateChange { get; set; }
    public string Size { get; set; }
    public Excel() { }

    public MS Excel(
      string Name,
      string Author,
      string [] Keywords,
      string Subjects,
      string Path,
      string DateCreation,
      string DateChange,
      string Size
    ) : base(Name, Author, Keywords, Subjects, Path){
          this.DateOfCreation = DateCreation;
          this.DateOfChange = DateChange;
          this.Size = Size;
        }

        public MS Excel(string Name, string Author, string[] Keywords, string Subjects, string Path)
          : base(Name, Author, Keywords, Subjects, Path) { }

        public MS Excel(string Name) : base(Name) { }

        public override void ValueParameter() {
          string ValueParameter = "";
          
          Console.Write("Тип файла: ");
          Console.WriteLine("MS Excel");

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
        }
    }
}
